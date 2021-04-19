#pragma once

#include <algorithm>
#include <cstdint>
#include <vector>

namespace detail {
inline std::vector<double> generate_arguments(std::size_t nargs, double base,
                                              double increment,
                                              std::size_t start = 1) {
  // fill a vector with the base value
  auto args = std::vector<double>(nargs, base);

  // add increment, starting from start element
  std::generate(std::next(args.begin(), start), args.end(),
                  [&base, increment]() { return base += increment; });

  return args;
}

template <int32_t order> std::vector<double> ref_small_args();
template <int32_t order> std::vector<double> ref_medium_args();
template <int32_t order> std::vector<double> ref_large_args();
} // namespace detail

std::vector<double> ref_small_args(int32_t order);
std::vector<double> ref_medium_args(int32_t order);
std::vector<double> ref_large_args(int32_t order);

inline std::vector<double> small_args() {
  return detail::generate_arguments(15, 0.0, 0.59);
}

inline std::vector<double> medium_args() {
  return detail::generate_arguments(15, 9.2, 0.2);
}

inline std::vector<double> large_args() {
  return detail::generate_arguments(15, 5.27, 7.0, 0);
}

template <int32_t max_order>
inline std::vector<double> extract(int32_t order,
                                   const std::vector<double> &results) {
  auto sz = static_cast<int32_t>(results.size() / (max_order + 1));
  auto retval = std::vector<double>(sz, 0.0);

  auto n = -1; // in C++14 I could do n = -1 in the capture list...
  std::generate(retval.begin(), retval.end(), [n, &results, order]() mutable {
    n++;
    return results[order + n * (max_order + 1)];
  });

  return retval;
}
