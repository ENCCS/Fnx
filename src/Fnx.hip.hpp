#pragma once

#include <cmath>
#include <cstdint>
#include <cstdio>
#include <type_traits>

#include <hip/hip_runtime.h>

#include "pretabulated.hpp"
#include "types.hpp"
#include "utils.hpp"

#define HIP_CHECK(cmd)                                                             \
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
