#pragma once

#include <chrono>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <type_traits>
#include <vector>

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
 * @param[in,out] x vector of evaluation points
 * @return vector of output values
 *
 * See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218.
 * https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
std::vector<T> boys_mmd(int32_t order, const std::vector<T> &xs);

/**
 * Evaluate Boys function at multiple points, pre-classifying them beforehand
 * and using the McMurchie-Davidson algorithm.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @param[in] order order of the Boys function
 * @param[in,out] x vector of evaluation points
 * @return vector of output values
 *
 * See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218.
 * https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
std::vector<T> boys_mmd_classify(int32_t order, const std::vector<T> &xs);

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
  auto start = std::chrono::steady_clock::now();

  constexpr auto offset = order + 1;

  auto npoints = xs.size();

  // this should be __constant__ memory directly on the GPU
  constexpr auto table = tables::pretabulated<order>();

  // this should be __constant__ memory directly on the GPU
  constexpr auto ft = inverse_odd_numbers<T, order>();

  auto ys = std::vector<double>(npoints * (order + 1), 0.0);

  for (auto i = 0; i < npoints; ++i) {
    auto x = xs[i];
    auto p = grid_point(x);

    if (p < 121) {
      auto w = x - 0.1 * p;
      auto y = horner(w, table[p]);

      ys[order + i * offset] = y;
      // downward recursion
      for (auto o = order; o > 0; --o) {
        ys[(o - 1) + i * offset] =
            ft[o - 1] * 2.0 * x * ys[o + i * offset] + std::exp(-x);
      }
    } else if (p < 361 + order * 20) {
      auto fia = 1.0 / x;

      auto f = horner(fia, 0.0, 0.4999489092, -0.2473631686, +0.3211809090,
                      -0.3811559346);

      auto y = 0.5 * std::sqrt(M_PI) * std::sqrt(fia) - f * std::exp(-x);
      ys[0 + i * offset] = y;
      // upward recursion
      for (auto o = 0; o <= order; ++o) {
        ys[(o + 1) + i * offset] =
            0.5 * fia * (ys[o + i * offset] - std::exp(-x));
      }
    } else {
      auto fia = 1.0 / x;
      // asymptotics can be either upward or downard. We go upward
      auto y = 0.5 * std::sqrt(M_PI) * std::sqrt(fia);
      ys[0 + i * offset] = y;
      for (auto o = 0; o <= order; ++o) {
        ys[(o + 1) + i * offset] = 0.5 * fia * ys[o + i * offset];
      }
    }
  }

  auto end = std::chrono::steady_clock::now();
  std::chrono::duration<double, std::milli> diff = end - start;
  std::cout << ">>> Time elapsed evaluating the Boys' function = "
            << std::setw(9) << diff.count() << " ms\n";

  return ys;
}

/**
 * Evaluate Boys function at multiple, pre-classified points and using the
 * McMurchie-Davidson algorithm.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @tparam order Order of the Boys function.
 * @param[in] ls evaluation points in low range
 * @param[in] ms evaluation points in mid range
 * @param[in] hs evaluation points in high range
 * @return values at points.
 *
 * See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218.
 * https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <typename T, int32_t order,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline std::vector<T> Fn(const std::vector<detail::Point<T>> &ls,
                         const std::vector<detail::Point<T>> &ms,
                         const std::vector<detail::Point<T>> &hs) {
  auto start = std::chrono::steady_clock::now();

  constexpr auto offset = order + 1;

  // this should be __constant__ memory directly on the GPU
  constexpr auto table = tables::pretabulated<order>();

  // this should be __constant__ memory directly on the GPU
  constexpr auto ft = inverse_odd_numbers<T, order>();

  // this can be allocated directly on the GPU. Do we need it on the CPU at all?
  auto vs =
      std::vector<double>((ls.size() + ms.size() + hs.size()) * offset, 0.0);

  /* kernel launch */
  // low-range points
  for (const auto x : ls) {
    auto pnt = grid_point(x.second);
    auto w = x.second - 0.1 * pnt;
    auto y = horner(w, table[pnt]);

    vs[order + x.first * offset] = y;
    // downward recursion
    for (auto o = order; o > 0; --o) {
      vs[(o - 1) + x.first * offset] =
          ft[o - 1] * 2.0 * x.second * vs[o + x.first * offset] +
          std::exp(-x.second);
    }
  }
  /* kernel launch */
  // mid-range points
  for (const auto x : ms) {
    auto fia = 1.0 / x.second;

    auto f = horner(fia, 0.0, 0.4999489092, -0.2473631686, +0.3211809090,
                    -0.3811559346);

    auto y = 0.5 * std::sqrt(M_PI) * std::sqrt(fia) - f * std::exp(-x.second);
    vs[0 + x.first * offset] = y;
    // upward recursion
    for (auto o = 0; o <= order; ++o) {
      vs[(o + 1) + x.first * offset] =
          0.5 * fia * (vs[o + x.first * offset] - std::exp(-x.second));
    }
  }
  /* kernel launch */
  // high-range points
  for (const auto x : hs) {
    auto fia = 1.0 / x.second;
    // asymptotics can be either upward or downard. We go upward
    auto y = 0.5 * std::sqrt(M_PI) * std::sqrt(fia);
    vs[0 + x.first * offset] = y;
    // vs[order + x.first * offset] = 0.5 * fia * y;
    for (auto o = 0; o <= order; ++o) {
      vs[(o + 1) + x.first * offset] = 0.5 * fia * vs[o + x.first * offset];
    }
  }

  auto end = std::chrono::steady_clock::now();
  std::chrono::duration<double, std::milli> diff = end - start;
  std::cout << ">>> Time elapsed evaluating the Boys' function = "
            << std::setw(9) << diff.count() << " ms\n";

  return vs;
}
} // namespace mmd
