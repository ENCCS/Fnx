#pragma once

#include <array>
#include <cstdint>
#include <vector>

#include "types.hpp"

namespace detail {
/** n-th odd number as double precision.
 *
 * @param n index of the odd number.
 * @return odd number as double precision.
 */
constexpr double odd_number(std::size_t n) {
  return static_cast<double>(2 * n + 1);
}

/** n-th inverse odd number as double precision.
 *
 * @param n index of the odd number.
 * @return inverse odd number as double precision.
 */
constexpr double inverse_odd_number(std::size_t n) {
  return static_cast<double>(1.0 / (2 * n + 1));
}

/** Compile-time fill an array of N elements with results of a function of the
 * index.
 *
 * @tparam T output scalar type
 * @tparam N size of the array
 * @tparam Generator function to apply on each index. Signature: T g(std::size_t
 * i)
 * @tparam Is indices
 * @param g generator function
 * @param index sequence
 */
template <typename T, std::size_t N, typename Generator, std::size_t... Is>
constexpr std::array<T, N> fill_array_impl(const Generator &g,
                                           std::index_sequence<Is...>) {
  return {{g(Is)...}};
}

template <typename T>
using Point = std::pair<typename std::vector<T>::difference_type, T>;
} // namespace detail

/**
 * Obtain index of point within pretabulated grid.
 *
 * @tparam T scalar type of the point variable. Must be floating point
 * @param[in] x the point
 * @return The index of the point in the pretabulated grid.
 */
template <typename T,
          typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline constexpr int32_t grid_point(T x) {
  return (x > 1.0e5) ? 1000000 : static_cast<int32_t>(10.0 * x + 0.5);
}

/** Compile-time fill an array of N elements with results of a function of the
 * index.
 *
 * @tparam T output scalar type
 * @tparam N size of the array
 * @tparam Generator function to apply on each index. Signature: T g(std::size_t
 * i)
 * @tparam Is indices
 * @param g generator function
 */
template <typename T, std::size_t N, typename Generator,
          typename Is = std::make_index_sequence<N>>
constexpr std::array<T, N> fill_array(const Generator &g) {
  return detail::fill_array_impl<T, N>(g, Is{});
}

/** Compile-time array of the N first inverse odd numbers.
 *
 * @tparam T output scalar type
 * @tparam N size of the array
 */
template <typename T, std::size_t N>
constexpr std::array<T, N> inverse_odd_numbers() {
  return fill_array<T, N>(detail::inverse_odd_number);
}

/** Base case of Horner's scheme compile-time recursion (variadic
 * implementation). */
template <typename X, typename T> constexpr X horner(X /* x */, T v) {
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
constexpr X horner(X x, T c0, Args... cs) {
  return static_cast<X>(c0) + x * horner(x, cs...);
}

namespace detail {
/** Implementation of Horner's scheme with an array of coefficients.
 *
 * @note This uses the variadic implementation internally.
 */
template <typename T, std::size_t N, std::size_t... Is>
constexpr T horner_impl(T x, const std::array<T, N> &coefs,
                        std::index_sequence<Is...>) {
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
constexpr T horner(T x, const std::array<T, N> &c) {
  return detail::horner_impl(x, c, Is{});
}
