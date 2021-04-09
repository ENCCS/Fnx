#pragma once

#include "Fnx.hpp"

#include <cmath>

#include "utils.hpp"

namespace detail {
template <>
Values<double, 1> Fn<double, 1>(double x, const Table &table) noexcept {
  auto vs = Values<double, 1>{{0.0, 0.0}};
  auto pnt = grid_point(x);

  if (pnt < 121) {
    auto w = x - 0.1 * pnt;
    auto y = horner(w, table[pnt]);
    vs.at(1) = y;
    // downward recursion
    vs.at(0) = 2.0 * x * y + std::exp(-x);
  } else {
    auto fia = 1.0 / x;

    auto value = 0.5 * std::sqrt(M_PI) * std::sqrt(fia);

    if (pnt < 381) {
      auto f = horner(fia, 0.0, 0.4999489092, -0.2473631686, +0.3211809090,
                      -0.3811559346);

      // return value - f * std::exp(-x);
      auto val0 = value - f * std::exp(-x);
      vs.at(0) = val0;
      // upward recursion
      vs.at(1) = 0.5 * fia * (val0 - std::exp(-x));
    } else {
      // asymptotics
      vs.at(0) = value;
      vs.at(1) = value * 0.5 * fia;
    }
  }

  return vs;
}
} // namespace detail
