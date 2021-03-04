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
template <int32_t order>
inline constexpr Table<order> pretabulated() noexcept;

/**
 * Horner's scheme for evaluation of 1D polynomial.
 *
 * @f{align}
 *   a_0 &+ a_1x + a_2x^2 + a_3x^3 + \cdots + a_nx^n \\
 *   &= a_0 + x \bigg(a_1 + x \Big(a_2 + x \big(a_3 + \cdots + x(a_{n-1} + x \, a_n) \cdots \big) \Big) \bigg)
 * @f}
 *
 * @tparam T Underlying scalar type
 * @tparam N Number of coefficients
 * @param[in] c polynomial coefficients
 * @param[in] x evaluation point
 * @param[in] i index (used for recursion)
 * @return value of polynomial at point
 */
template <typename T, size_t N>
constexpr T
horner1D(const std::array<T, N>& c, T x, size_t i = 0) noexcept
{
    return i <= c.size() ? c[i] + horner1D(c, x, i + 1) * x : c[i];
}

/**
 * Obtain index of point within pretabulated grid.
 *
 * @tparam T scalar type of the point variable. Must be floating point
 * @param[in] x the point
 * @return The index of the point in the pretabulated grid.
 */
template <typename T, typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline constexpr int32_t
grid_point(T x) noexcept
{
    return (x > 1.0e5) ? 1000000 : static_cast<int32_t>(10.0 * x + 0.5);
}

/**
 * Evaluate Boys function at single point.
 *
 * @tparam order Order of the Boys function.
 * @tparam T scalar type of evaluation points and return values. Must be floating point
 * @param[in] x evaluation point
 * @param[in] table pretabulated values.
 * @return value at point.
 */
template <int32_t order, typename T, typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline T Fn(T x, const Table<order>& table) noexcept;

/**
 * Evaluate Boys function at multiple points.
 *
 * @tparam order Order of the Boys function.
 * @tparam T scalar type of evaluation points and return values. Must be floating point
 * @param[in] x vector of evaluation points
 * @param[in] y vector of output values
 */
template <int32_t order, typename T, typename = std::enable_if_t<std::is_floating_point<T>::value>>
inline void
Fn(const std::vector<T>& x, std::vector<T>& y) noexcept
{
    auto table = pretabulated<order>();

    // OpenMP?
    for (auto i = 0; i < x.size(); ++i)
    {
        y[i] = Fn<order, T>(x[i], table);
    }
}
}  // namespace detail
