#include "Fnx.hpp"

#include <iostream>
#include <vector>

#include "utils.hpp"

#include "F_00.hpp"
#include "F_01.hpp"

template <>
std::vector<double> boys_function(int32_t order, const std::vector<double> &x) {
  switch (order) {
  case 0:
    return detail::Fn<double, 0>(x);
  case 1:
    return detail::Fn<double, 1>(x);
  default:
    std::cerr << "Boys function of order " << order << " not implemented"
              << std::endl;
    std::abort();
  }
}
