#pragma once

#include <cstdint>
#include <cstdio>
#include <type_traits>

#include <hip/hip_runtime.h>

#include "constants.hpp"
#include "pretabulated.hpp"
#include "types.hpp"
#include "utils.hpp"

#define HIP_CHECK(cmd)                                                         \
  {                                                                            \
    hipError_t error = cmd;                                                    \
    if (error != hipSuccess) {                                                 \
      fprintf(stderr, "error: '%s'(%d) at %s:%d\n", hipGetErrorString(error),  \
              error, __FILE__, __LINE__);                                      \
      exit(EXIT_FAILURE);                                                      \
    }                                                                          \
  }

/**
 * Evaluate Boys function at multiple points, using the McMurchie-Davidson
 * algorithm.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @param[in] order order of the Boys function
 * @param[in] x vector of evaluation points
 * @return vector of output values
 *
 * See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218.
 * https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
__host__ std::vector<T> boys_mmd_gpu(int32_t order, const std::vector<T> &xs);

namespace mmd {
/**
 * Evaluate Boys function at multiple points, using the McMurchie-Davidson
 * algorithm.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @tparam order Order of the Boys function.
 * @param[in] x vector of evaluation points
 * @return vector of output values
 *
 * See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218.
 * https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <typename T, int32_t order,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
__global__ void Fn(int32_t npoints, const T *xs, T *ys) {
  auto offset = (hipBlockIdx_x * hipBlockDim_x + hipThreadIdx_x);
  auto stride = hipBlockDim_x * hipGridDim_x;

  constexpr auto table = tables::pretabulated<order>();

  constexpr auto ncols = order + 1;

  for (auto i = offset; i < npoints; i += stride) {
    auto x = xs[i];
    auto p = grid_point(x);

    if (p < 121) {
      auto w = x - 0.1 * p;
      auto y = horner(w, table[p]);

      ys[order + i * ncols] = y;
      // downward recursion
#pragma unroll
      for (auto o = order - 1; o >= 0; --o) {
        ys[o + i * ncols] =
            (2.0 * x * ys[(o + 1) + i * ncols] + std::exp(-x)) / (2 * o + 1);
      }
    } else if (p < 361 + order * 20) {
      auto fia = 1.0 / x;

      auto f = horner(fia, 0.0, 0.4999489092, -0.2473631686, +0.3211809090,
                      -0.3811559346);

      auto y = 0.5 * std::sqrt(M_PI) * std::sqrt(fia) - f * std::exp(-x);
      ys[0 + i * ncols] = y;
      // upward recursion
#pragma unroll
      for (auto o = 0; o < order; ++o) {
        ys[(o + 1) + i * ncols] =
            0.5 * fia * ((2 * o + 1) * ys[o + i * ncols] - std::exp(-x));
      }
    } else {
      auto fia = 1.0 / x;
      // asymptotics can be either upward or downard. We go upward
      auto y = 0.5 * std::sqrt(M_PI) * std::sqrt(fia);
      ys[0 + i * ncols] = y;
#pragma unroll
      for (auto o = 0; o < order; ++o) {
        ys[(o + 1) + i * ncols] = 0.5 * fia * (2 * o + 1) * ys[o + i * ncols];
      }
    }
  }
}
} // namespace mmd

/**
 * Evaluate Boys function at multiple points, using the Tian-Suo-Ma-Jin
 * algorithm.
 */
template <typename T>
__host__ auto boys_tsmj_gpu(int32_t order, const std::vector<T> &xs)
    -> decltype(std::is_floating_point<T>::value, std::vector<T>());

namespace tsmj {
template <int32_t order, typename T = double>
__global__ auto Fn(int32_t npoints, const T *xs, T *ys)
    -> decltype(std::is_floating_point<T>::value, void()) {
  auto offset = (hipBlockIdx_x * hipBlockDim_x + hipThreadIdx_x);
  auto stride = hipBlockDim_x * hipGridDim_x;

  constexpr auto ncols = order + 1;

  constexpr auto inverse_odds = inverse_odd_numbers<T, order + 1>();

  constexpr auto k_max = 35;
  // precompute coefficients for the MML Taylor expansion
  constexpr auto coefs = fill_array<double, k_max>([](int k) {
    // check if k is even to decide the sign
    return ((k % 2) ? -1.0 : 1.0) / ((2 * order + 2 * k + 1) * factorial(k));
  });

  for (auto i = offset; i < npoints; i += stride) {
    auto x = xs[i];

    auto use_taylor = (x <= std::min(5.0, TS_15<order>)) ? true : false;

    if (x == 0.0) {
      // Analytic formula to all orders
      for (auto o = 0; o <= order; ++o) {
        ys[o + i * ncols] = inverse_odds[o];
      }
    } else {
      // zeroth order Boys function: calculated from the error function
      auto sqrt_x = sqrt(x);
      auto F_0_x = sqrt(M_PI) * erf(sqrt_x) / (2 * sqrt_x);
      auto exp_mx = exp(-x);

      ys[0 + i * ncols] = F_0_x;

      if (use_taylor) {
        // Mazur-Makowski-Lazarski, i.e. Taylor expansion to order k_max
        // for the highest order followed by downward recursion

        ys[order + i * ncols] = horner(x, coefs);

// downward recursion
#pragma unroll
        for (auto o = order - 1; o > 0; --o) {
          ys[o + i * ncols] =
              (2.0 * x * ys[(o + 1) + i * ncols] + exp_mx) * inverse_odds[o];
        }
      } else {
        // Guseinov-Mamedov finite sum formula

        // we compute std::pow(x, -o) during the iterations
        auto x_m1 = 1.0 / x;
        auto x_mo = x_m1;
// upward recursion
#pragma unroll
        for (auto o = 1; o <= order; ++o) {
          // Horner's method with explicit loop
          auto So = static_cast<T>(0.0);
#pragma unroll
          for (auto n = o - 1; n >= 0; --n) {
            So = fma(So, x,
                          modified_falling_factorial(o + 0.5, o - (n + 1)));
          }
          ys[o + i * ncols] =
              x_mo * (modified_falling_factorial(o + 0.5, o) * F_0_x -
                      0.5 * exp_mx * So);
          // prepare x_mo for next order
          x_mo *= x_m1;
        }
      }
    }
  }
}
} // namespace tsmj

/**
 * Evaluate Boys function at multiple points, using the Padé+Guseinov-Mamedov
 * algorithm.
 */
template <typename T>
__host__ auto boys_pgm_gpu(int32_t order, const std::vector<T> &xs)
    -> decltype(std::is_floating_point<T>::value, std::vector<T>());

namespace pgm {
template <typename T, int32_t order>
__global__ auto Fn(int32_t npoints, const T *xs, T *ys)
    -> decltype(std::is_floating_point<T>::value, void()) {
  auto offset = (hipBlockIdx_x * hipBlockDim_x + hipThreadIdx_x);
  auto stride = hipBlockDim_x * hipGridDim_x;

  constexpr auto ncols = order + 1;

  constexpr auto inverse_odds = inverse_odd_numbers<T, order + 1>();

  for (auto i = offset; i < npoints; i += stride) {
    auto x = xs[i];

    auto use_pade = (x < Ts<order>) ? true : false;

    if (x == 0.0) {
// Analytic formula to all orders
#pragma unroll
      for (auto o = 0; o <= order; ++o) {
        ys[o + i * ncols] = inverse_odds[o];
      }
    } else {
      // zeroth order Boys function: calculated from the error function
      auto sqrt_x = sqrt(x);
      auto exp_mx = exp(-x);
      auto F_0_x = sqrt(M_PI) * erf(sqrt_x) / (2 * sqrt_x);

      ys[0 + i * ncols] = F_0_x;

      if (use_pade) {
        // Padé

        // [15/16] Padé approximation for the highest order followed by
        // downward recursion

        // Ps are the coefficients of the polynomial at the numerator
        // stored in device constant memory
        auto num = horner(x, Ps<order>);
        // Qs are the coefficients of the polynomial at the denominator
        // stored in device constant memory
        auto den = horner(x, Qs<order>);

        ys[order + i * ncols] = num / den;

// downward recursion
#pragma unroll
        for (auto o = order - 1; o > 0; --o) {
          ys[o + i * ncols] =
              (2.0 * x * ys[(o + 1) + i * ncols] + exp_mx) * inverse_odds[o];
        }
      } else {
        // Guseinov-Mamedov finite sum formula

        // we compute std::pow(x, -o) during the iterations
        auto x_m1 = 1.0 / x;
        auto x_mo = x_m1;
// upward recursion
#pragma unroll
        for (auto o = 1; o <= order; ++o) {
          // Horner's method with explicit loop
          auto So = T{0};
#pragma unroll
          for (auto n = o - 1; n >= 0; --n) {
            So = fma(So, x, modified_falling_factorial(o + 0.5, o - (n + 1)));
          }
          ys[o + i * ncols] =
              x_mo * (modified_falling_factorial(o + 0.5, o) * F_0_x -
                      0.5 * exp_mx * So);
          // prepare x_mo for next order
          x_mo *= x_m1;
        }
      }
    }
  }
}
} // namespace pgm
