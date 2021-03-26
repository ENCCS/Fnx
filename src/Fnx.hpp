#pragma once

#include <cstdint>
#include <type_traits>
#include <vector>

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
 * @param[in] x vector of evaluation points
 * @return vector of output values
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
std::vector<T> boys_function(int32_t order, const std::vector<T> &x);

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

/**
 * Evaluate Boys function at multiple points.
 *
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @tparam order Order of the Boys function.
 * @param[in] x vector of evaluation points
 * @param[in] y vector of output values
 */
template <typename T, int32_t order,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline void Fn(const std::vector<T> &x, std::vector<T> &y) noexcept {
  constexpr auto table = pretabulated<order>();
  auto retval = Values<T, order>();
  auto npoints = x.size();

  for (auto j = 0; j < npoints; ++j) {
    retval = Fn<T, order>(x[j], table);
    std::move(retval.cbegin(), retval.cend(), y.begin() + j*(order+1));
  }
}

/**
 * Evaluate Boys function on grid of points.
 *
 * @tparam T scalar type of evaluation points and return values.
 * @tparam order Order of the Boys function.
 * @param[in] x vector of evaluation points
 * @return vector of values.
 *
 * @note The number of elements in the output might be larger than that in the
 * input, since for higher order we evaluate also lower order by downward
 * recursion.
 */
template <typename T, int32_t order,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline std::vector<T> Fn(const std::vector<T> &x) noexcept {
  auto values = std::vector<T>(x.size() * (order + 1), 0.0);

  Fn<T, order>(x, values);

  return values;
}
} // namespace detail
