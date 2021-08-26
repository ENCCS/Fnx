#pragma once

#include <cmath>
#include <cstdint>
#include <type_traits>
#include <vector>

#include "constants.hpp"
#include "pretabulated.hpp"
#include "types.hpp"
#include "utils.hpp"

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
std::vector<T> boys_mmd(int32_t order, const std::vector<T> &xs);

/**
 * Evaluate Boys function at multiple points, using the Guseinov-Mamedov
 * finite-sum method.
 *
 * @warning This is not safe for evaluation at the origin.
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
std::vector<T> boys_gm(int32_t order, const std::vector<T> &xs);

namespace gm {
template <int32_t order, typename T = double>
inline auto Fn(const std::vector<T> &xs)
    -> decltype(std::is_floating_point<T>::value, std::vector<T>()) {
  constexpr auto ncols = order + 1;

  auto npoints = xs.size();

  auto ys = std::vector<double>(npoints * (order + 1), 0.0);

  for (auto i = 0; i < npoints; ++i) {
    auto x = xs[i];

    // precompute all powers of x up to desired order
    auto xks = fill_array<double, order>(
        [x](int j) { return std::pow(x, j - order); });

    // zeroth order Boys function: calculated from the error function
    auto sqrt_x = std::sqrt(x);
    auto F_0_x = std::sqrt(M_PI) * std::erf(sqrt_x) / (2 * sqrt_x);
    ys[0 + i * ncols] = F_0_x;

    auto exp_mx = std::exp(-x);
    // upward recursion
    for (auto o = 1; o <= order; ++o) {
      auto Sj = static_cast<T>(0.0);
      // TODO perhaps a modified version of Horner's method?
      for (auto n = 0; n < o; ++n) {
        Sj += modified_falling_factorial(o + 0.5, o - (n + 1)) *
              xks[order - (o - n)];
      }
      ys[o + i * ncols] =
          xks[order - o] * modified_falling_factorial(o + 0.5, o) * F_0_x -
          0.5 * exp_mx * Sj;
    }
  }

  return ys;
}
} // namespace gm

/**
 * Evaluate Boys function at multiple points, using the Mazur-Makowski-Lazarski
 * algorithm.
 *
 * Essentially a Taylor series!
 */
template <typename T>
auto boys_mml(int32_t order, const std::vector<T> &xs)
    -> decltype(std::is_floating_point<T>::value, std::vector<T>());

namespace mml {
template <int32_t order, typename T = double>
inline auto Fn(const std::vector<T> &xs)
    -> decltype(std::is_floating_point<T>::value, std::vector<T>()) {
  constexpr auto ncols = order + 1;

  auto npoints = xs.size();

  auto ys = std::vector<double>(npoints * (order + 1), 0.0);

  for (auto i = 0; i < npoints; ++i) {
    auto x = xs[i];

    // TODO leave it hardcoded?
    constexpr auto k_max = 80;

    // precompute coefficients
    auto coeffs = fill_array<double, k_max>([](int k) {
      return std::pow(-1.0, k) / ((2 * order + 2 * k + 1) * factorial(k));
    });

    ys[order + i * ncols] = horner(x, coeffs);

    auto exp_mx = std::exp(-x);
    // downward recursion
    for (auto o = order - 1; o >= 0; --o) {
      ys[o + i * ncols] =
          (2.0 * x * ys[(o + 1) + i * ncols] + exp_mx) / (2 * o + 1);
    }
  }

  return ys;
}
} // namespace mml

/**
 * Evaluate Boys function at multiple points, using the Tian-Suo-Ma-Jin
 * algorithm.
 */
template <typename T>
auto boys_tsmj(int32_t order, const std::vector<T> &xs)
    -> decltype(std::is_floating_point<T>::value, std::vector<T>());

namespace tsmj {
template <int32_t order, typename T = double>
inline auto Fn(const std::vector<T> &xs)
    -> decltype(std::is_floating_point<T>::value, std::vector<T>()) {
  constexpr auto ncols = order + 1;

  auto npoints = xs.size();

  auto ys = std::vector<double>(npoints * (order + 1), 0.0);

  constexpr auto inverse_odds = inverse_odd_numbers<T, order + 1>();

  // TODO leave it hardcoded?
  constexpr auto k_max = 80;

  // precompute coefficients for the MML Taylor expansion
  auto coefs = fill_array<double, k_max>([](int k) {
    return std::pow(-1.0, k) / ((2 * order + 2 * k + 1) * factorial(k));
  });

  for (auto i = 0; i < npoints; ++i) {
    auto x = xs[i];

    if (x == 0.0) {
      // Analytic formula to all orders
      for (auto o = 0; o <= order; ++o) {
        ys[o + i * ncols] = inverse_odds[o];
      }
    } else {
      // zeroth order Boys function: calculated from the error function
      auto sqrt_x = std::sqrt(x);
      auto F_0_x = std::sqrt(M_PI) * std::erf(sqrt_x) / (2 * sqrt_x);

      ys[0 + i * ncols] = F_0_x;

      // Mazur-Makowski-Lazarski, i.e. Taylor expansion to order k_max
      // for the highest order followed by downward recursion
      if (x <= TS_15<order>) {
        ys[order + i * ncols] = horner(x, coefs);

        auto exp_mx = std::exp(-x);
        // downward recursion
        for (auto o = order - 1; o > 0; --o) {
          ys[o + i * ncols] =
              (2.0 * x * ys[(o + 1) + i * ncols] + exp_mx) * inverse_odds[o];
        }
      } else {
        // Guseinov-Mamedov finite sum formula

        auto exp_mx = std::exp(-x);
        // we compute std::pow(x, -o) during the iterations
        auto x_mo = 1.0 / x;
        // upward recursion
        for (auto o = 1; o <= order; ++o) {
          // Horner's method with explicit loop
          auto So = static_cast<T>(0.0);
          for (auto n = o - 1; n >= 0; --n) {
            So = std::fma(So, x,
                          modified_falling_factorial(o + 0.5, o - (n + 1)));
          }
          ys[o + i * ncols] =
              x_mo * (modified_falling_factorial(o + 0.5, o) * F_0_x -
                      0.5 * exp_mx * So);
          // prepare x_mo for next order
          x_mo /= x;
        }
      }
    }
  }

  return ys;
}
} // namespace tsmj

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
inline std::vector<T> Fn(const std::vector<T> &xs) {
  constexpr auto ncols = order + 1;

  auto npoints = xs.size();

  constexpr auto table = tables::pretabulated<order>();

  auto ys = std::vector<double>(npoints * (order + 1), 0.0);

  for (auto i = 0; i < npoints; ++i) {
    auto x = xs[i];
    auto p = grid_point(x);

    if (p < 121) {
      auto w = x - 0.1 * p;
      auto y = horner(w, table[p]);

      ys[order + i * ncols] = y;
      // downward recursion
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
      for (auto o = 0; o < order; ++o) {
        ys[(o + 1) + i * ncols] =
            0.5 * fia * ((2 * o + 1) * ys[o + i * ncols] - std::exp(-x));
      }
    } else {
      auto fia = 1.0 / x;
      // asymptotics can be either upward or downard. We go upward
      auto y = 0.5 * std::sqrt(M_PI) * std::sqrt(fia);
      ys[0 + i * ncols] = y;
      for (auto o = 0; o < order; ++o) {
        ys[(o + 1) + i * ncols] = 0.5 * fia * (2 * o + 1) * ys[o + i * ncols];
      }
    }
  }

  return ys;
}
} // namespace mmd
