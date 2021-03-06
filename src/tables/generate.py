#!/usr/bin/env python3
from pathlib import Path

from sympy import Float, Matrix, Pow, factorial, lowergamma, symbols

MMD_TEMPLATE = """
#pragma once

#include <array>

/* This file was autogenerated. DO NOT EDIT! */

namespace tables {{
/** Pretabulated coefficients for the seven-term Taylor expansion of the Boys function of order {order}.
 *  See: McMurchie, L. E.; Davidson, E. R. J. Comput. Phys. 1978, 26, 218. https://doi.org/10.1016/0021-9991(78)90092-X
 */
template <> inline constexpr std::array<std::array<double, 7>, 121> pretabulated<{order}>() {{
  // clang-format off
  return {{{{{lines}}}}};
  // clang-format on
}}
}} // namespace tables
"""


def generate():
    # declare sympy symbols
    x = symbols('x', real=True)
    n = symbols('n', integer=True)
    max_order = 28
    delta = Float(0.1)
    # assemble the factorial factors for the Taylor expansion beforehand
    taylors = Matrix([Pow(-1, _) / factorial(_) for _ in range(7)])
    for n in range(max_order + 1):
        print(f"Generating table for order {n:02d}")
        ls = []
        x = Float(0.0)
        for i in range(121):
            vs = []
            if i == 0:
                # at x = 0.0, we can evaluate the Boys function analytically
                vs = Matrix(
                    [1 / (2 * _ + 1) for _ in range(n, n + 7)]
                ).multiply_elementwise(
                    taylors
                )
            else:
                # away from 0.0, we use the lower gamma function
                vs = Matrix(
                    [
                        lowergamma(_ + 1 / 2, x) / (2 * Pow(x, (_ + 1 / 2)))
                        for _ in range(n, n + 7)
                    ]
                ).multiply_elementwise(
                    taylors
                )
            ls.append(f"{{{', '.join([format(v.evalf(25), '3.20e') for v in vs])}}}")
            x += delta
        with (Path.cwd() / f"F_{n:02d}.hpp").open("w") as fh:
            fh.write(MMD_TEMPLATE.format(order=n, lines=f",\n{' '*11}".join(ls)))


if __name__ == "__main__":
    generate()
