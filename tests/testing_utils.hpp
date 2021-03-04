#pragma once

#include <cstdint>
#include <vector>

namespace detail {
std::vector<double>
generate_arguments(size_t nargs, double base, double increment, size_t start = 1) noexcept
{
    auto args = std::vector<double>(15, base);

    std::generate(std::next(args.begin(), start), args.end(), [&base, increment]() { return base += increment; });

    return args;
}
}  // namespace detail

std::vector<double>
small_args() noexcept
{
    return detail::generate_arguments(15, 0.0, 0.59);
}

std::vector<double>
medium_args() noexcept
{
    return detail::generate_arguments(15, 9.2, 0.2);
}

std::vector<double>
large_args() noexcept
{
    return detail::generate_arguments(15, 5.27, 7.0, 0);
}
