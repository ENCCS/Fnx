#pragma once

#include <cmath>
#include <cstdint>
#include <type_traits>
#include <vector>

#include "pretabulated.hpp"
#include "print_utils.hpp"
#include "types.hpp"
#include "utils.hpp"

/**
 * Evaluate Boys function at single point.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @param[in] order order of the Boys function
 * @param[in] x evaluation point
 * @return value at point.
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
std::vector<T> boys_function(int32_t order, T x);

/**
 * Evaluate Boys function at multiple points.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @param[in] order order of the Boys function
 * @param[in,out] x vector of evaluation points
 * @return vector of output values
 * @note the vector of evaluation points will be sorted in-place
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
std::vector<T> boys_function(int32_t order, const std::vector<T> &xs);

namespace detail {
/**
 * Evaluate Boys function at single point.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @tparam order Order of the Boys function.
 * @param[in] x evaluation point
 * @param[in] table pretabulated values.
 * @return value at point.
 */
template <typename T, int32_t order,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline Values<T, order> Fn(T x, const Table &table) noexcept;

template <typename T, int32_t order,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline std::vector<T> Fn(const std::vector<Point<T>> &ls,
                         const std::vector<Point<T>> &ms,
                         const std::vector<Point<T>> &hs) noexcept {
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

  return vs;
}

/**
 * Evaluate Boys function at multiple points.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @tparam order Order of the Boys function.
 * @param[in] x vector of evaluation points
 * @return vector of output values
 */
template <typename T, int32_t order,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline std::vector<T> Fn(const std::vector<T> &x) noexcept {
  auto y = std::vector<double>(x.size() * (order + 1), 0.0);

  constexpr auto table = tables::pretabulated<order>();
  auto retval = Values<T, order>();
  auto npoints = x.size();

  for (auto j = 0; j < npoints; ++j) {
    retval = Fn<T, order>(x[j], table);
    std::move(retval.cbegin(), retval.cend(), y.begin() + j * (order + 1));
  }

  // PRINT_COLLECTION(y, "more values");

  return y;
}
} // namespace detail
