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

/** n-th order modified falling factorial of x.
 *
 * @tparam N
 *
 * @note We use compile-time recursion to compute:
 *
 *   \f[
 *    (x)_{N} = \begin{cases}
 *                 1, & \text{for} N = 0 \\
 *                 (x-1)(x-2) \cdots (x-N), & \text{for} 1 \leq N \leq x-1.
 *              \end{cases}
 *            = \prod_{k = 1}^{N} (x-k)
 *  \f]
 *
 *  Use the front-end function, not the class directly!
 */
template <unsigned int N> struct ModifiedFallingFactorial {
  template <typename T> static T value(T x) {
    return (x - N) * ModifiedFallingFactorial<N - 1>::value(x);
  }
};

template <> struct ModifiedFallingFactorial<0> {
  template <typename T> static T value(T x) { return static_cast<T>(1.0); }
};

/** Compile-time fill an array of N elements with results of a function of the
 * index.
 *
 * @tparam T output scalar type
 * @tparam N size of the array
 * @tparam Generator function to apply on each index. Signature: T
 * op(std::size_t)
 * @tparam Is indices
 * @param op generator function
 * @param index sequence
 */
template <typename T, std::size_t N, typename Callable, std::size_t... Is>
constexpr std::array<T, N> fill_array_impl(Callable op,
                                           std::index_sequence<Is...>) {
  return {{op(Is)...}};
}
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

/** Compile-time factorial.
 *
 *  @param n
 *  @return n!
 *
 *  @note Should be reliable up to n = 150
 */
constexpr double factorial(unsigned int n) {
  return (n > 1) ? n * factorial(n - 1) : static_cast<double>(1);
}

/** Run-time, N-th order modified falling factorial of x
 *
 * @tparam T
 * @param x
 * @param N
 *
 * This function computes:
 *   \f[
 *    (x)_{N} = \begin{cases}
 *                 1, & \text{for} N = 0 \\
 *                 (x-1)(x-2) \cdots (x-N), & \text{for} 1 \leq n \leq x-1.
 *              \end{cases}
 *            = \prod_{k = 1}^{N} (x-k)
 *  \f]
 */
template <typename T,
          typename U = typename std::common_type<T, unsigned int>::type>
U modified_falling_factorial(T x, unsigned int N) {
  auto ret = static_cast<U>(1.0);
  if (N != 0) {
    for (auto k = 1; k <= N; ++k) {
      ret *= (x - k);
    }
  }
  return ret;
}

/** Compile-time, N-th order modified falling factorial of x
 *
 * @tparam T
 * @tparam N
 * @param x
 *
 * This function computes:
 *   \f[
 *    (x)_{N} = \begin{cases}
 *                 1, & \text{for} N = 0 \\
 *                 (x-1)(x-2) \cdots (x-N), & \text{for} 1 \leq n \leq x-1.
 *              \end{cases}
 *            = \prod_{k = 1}^{N} (x-k)
 *  \f]
 */
template <unsigned int N, typename T>
constexpr T modified_falling_factorial(T x) {
  return detail::ModifiedFallingFactorial<N>::value(x);
}

/** Compile-time fill an array of N elements with results of a function of the
 * index.
 *
 * @tparam T output scalar type
 * @tparam N size of the array
 * @tparam Callable function to apply on each index. Signature: T
 * op(std::size_t)
 * @tparam Is indices
 * @param op generator function
 */
template <typename T, std::size_t N, typename Callable,
          typename Is = std::make_index_sequence<N>>
constexpr std::array<T, N> fill_array(Callable op) {
  return detail::fill_array_impl<T, N>(op, Is{});
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
  // return static_cast<X>(c0) + x * horner(x, cs...);
  //  TODO for the GPU the function call is without std::
  return std::fma(x, horner(x, cs...), static_cast<X>(c0));
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
