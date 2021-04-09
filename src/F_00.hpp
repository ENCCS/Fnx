#pragma once

#include "Fnx.hpp"

#include <cmath>

#include "utils.hpp"

namespace detail {
template <>
inline Values<double, 0> Fn<double, 0>(double x, const Table &table) noexcept {
  auto vs = Values<double, 0>{{0.0}};
  auto pnt = grid_point(x);

  if (pnt < 121) {
    auto w = x - 0.1 * pnt;

    vs.at(0) = horner(w, table[pnt]);
  } else {
    auto fia = 1.0 / x;

    auto value = 0.5 * std::sqrt(M_PI) * std::sqrt(fia);

    if (pnt < 361) {
      auto f = horner(fia, 0.0, 0.4999489092, -0.2473631686, +0.3211809090,
                      -0.3811559346);

      vs.at(0) = value - f * std::exp(-x);
    } else {
      vs.at(0) = value;
    }
  }

  return vs;
}
} // namespace detail
