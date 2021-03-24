#pragma once

#include <array>
#include <cstdint>
#include <vector>

#include "types.hpp"

namespace detail {
/**
 * Pretabulated values of given order.
 *
 * @tparam order Order of the table to fetch.
 * @return table of values.
 */
template <int32_t order> inline constexpr Table<order> pretabulated() noexcept;

constexpr double odd_number(std::size_t n) noexcept {
  return static_cast<double>(2 * n + 1);
}

constexpr double inverse_odd_number(std::size_t n) noexcept {
  return static_cast<double>(1.0 / (2 * n + 1));
}

namespace detail {
template <typename T, std::size_t N, typename Generator, std::size_t... Is>
constexpr std::array<T, N>
fill_array_impl(const Generator &g, std::index_sequence<Is...>) noexcept {
  return {{g(Is)...}};
}
} // namespace detail

template <typename T, std::size_t N, typename Generator,
          typename Is = std::make_index_sequence<N>>
constexpr std::array<T, N> fill_array(const Generator &g) noexcept {
  return detail::fill_array_impl<T, N>(g, Is{});
}

template <typename X, typename T> constexpr X horner(X /* x */, T v) noexcept {
  return static_cast<X>(v);
}

/**
 * Horner's scheme for evaluation of 1D polynomial (variadic implementation)
 *
 * @f{align}
 *   a_0 &+ a_1x + a_2x^2 + a_3x^3 + \cdots + a_nx^n \\
 *   &= a_0 + x \bigg(a_1 + x \Big(a_2 + x \big(a_3 + \cdots + x(a_{n-1} + x \,
 * a_n) \cdots \big) \Big) \bigg)
 * @f}
 *
 * @tparam X Scalar type of output
 * @tparam T Scalar type of first coefficient
 * @tparam Args Types of all other coefficients
 * @param[in] x evaluation point
 * @param[in] c0 zeroth order polynomial coefficient
 * @param[in] cs polynomial coefficients, in *reverse lexicographical order*
 * (lowest to highest degree)
 * @return value of polynomial at point
 */
template <typename X, typename T, typename... Args>
constexpr X horner(X x, T c0, Args... cs) noexcept {
  return static_cast<X>(c0) + x * horner(x, cs...);
}

namespace detail {
template <typename T, std::size_t N, std::size_t... Is>
constexpr T horner_impl(T x, const std::array<T, N> &coefs,
                        std::index_sequence<Is...>) noexcept {
  return horner(x, coefs[Is]...);
}
} // namespace detail

/**
 * Horner's scheme for evaluation of 1D polynomial.
 *
 * @f{align}
 *   a_0 &+ a_1x + a_2x^2 + a_3x^3 + \cdots + a_nx^n \\
 *   &= a_0 + x \bigg(a_1 + x \Big(a_2 + x \big(a_3 + \cdots + x(a_{n-1} + x \,
 * a_n) \cdots \big) \Big) \bigg)
 * @f}
 *
 * @tparam X Scalar type of output
 * @tparam T Scalar type of coefficients
 * @tparam N Number of coefficients
 * @tparam Is sequence of indices in the coefficients array
 * @param[in] x evaluation point
 * @param[in] c polynomial coefficients, in *reverse lexicographical order*
 * (lowest to highest degree)
 * @return value of polynomial at point
 */
template <typename T, std::size_t N, typename Is = std::make_index_sequence<N>>
constexpr T horner(T x, const std::array<T, N> &c) noexcept {
  return detail::horner_impl(x, c, Is{});
}

/**
 * Obtain index of point within pretabulated grid.
 *
 * @tparam T scalar type of the point variable. Must be floating point
 * @param[in] x the point
 * @return The index of the point in the pretabulated grid.
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline constexpr int32_t grid_point(T x) noexcept {
  return (x > 1.0e5) ? 1000000 : static_cast<int32_t>(10.0 * x + 0.5);
}

/**
 * Evaluate Boys function at single point.
 *
 * @tparam order Order of the Boys function.
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @param[in] x evaluation point
 * @param[in] table pretabulated values.
 * @return value at point.
 */
template <int32_t order, typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline T Fn(T x, const Table<order> &table) noexcept;

/**
 * Evaluate Boys function at multiple points.
 *
 * @tparam order Order of the Boys function.
 * @tparam T scalar type of evaluation points and return values. Must be
 * floating point
 * @param[in] x vector of evaluation points
 * @param[in] y vector of output values
 */
template <int32_t order, typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline void Fn(const std::vector<T> &x, std::vector<T> &y) noexcept {
  auto table = pretabulated<order>();

#pragma omp parallel for schedule(static)
  for (auto i = 0; i < x.size(); ++i) {
    y[i] = Fn<order, T>(x[i], table);
  }
}
} // namespace detail
