#pragma once

#include <cstdint>
#include <type_traits>
#include <vector>

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
inline std::vector<T> Fn(const std::vector<Point<T>> &ls, const Table &table,
                         const std::vector<Point<T>> &ms,
                         const std::vector<Point<T>> &hs) noexcept;

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

  constexpr auto table = pretabulated<order>();
  auto retval = Values<T, order>();
  auto npoints = x.size();

  for (auto j = 0; j < npoints; ++j) {
    retval = Fn<T, order>(x[j], table);
    std::move(retval.cbegin(), retval.cend(), y.begin() + j * (order + 1));
  }

  //PRINT_COLLECTION(y, "more values");

  return y;
}
} // namespace detail
