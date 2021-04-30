#!/usr/bin/env python3
from itertools import accumulate, repeat
from pathlib import Path

from sympy import Float, Pow, lowergamma

TEMPLATE = """/** Reference values of the Boys function of order {order} for {name} arguments. */
template <> std::vector<double> ref_{name}_args<{order}>() {{
  return {lines};
}}
"""
FILE = """#include \"testing_utils.hpp\"

#include <vector>

/* This file was autogenerated. DO NOT EDIT! */

namespace detail {{
{lines}}} // namespace detail
"""


def generate(name, nargs, base, increment):
    max_order = 28
    base = Float(base)
    increment = Float(increment)
    args = list(accumulate(repeat(base, nargs), func=lambda x, _: x + increment))
    ls = []
    for order in range(max_order + 1):
        ys = [Float(0.0)] * nargs
        for i, x in enumerate(args):
            if name == "small" and i == 0:
                # at x = 0.0, we can evaluate the Boys function analytically
                ys[i] = Float(1 / (2 * order + 1))
            else:
                # away from 0.0, we use the lower gamma function
                ys[i] = lowergamma(order + 1 / 2, x) / (2 * Pow(x, (order + 1 / 2)))
        l = f"{{{', '.join([format(_.evalf(25), '3.20e') for _ in ys])}}}"
        ls.append(TEMPLATE.format(name=name, order=order, lines=l))
    with (Path.cwd() / f"reference_{name}_args.cpp").open("w") as fh:
        fh.write(FILE.format(lines="\n".join(ls)))


if __name__ == "__main__":
    # small arguments
    generate("small", 15, 0.0, 0.59)
    # medium arguments
    generate("medium", 15, 9.2, 0.2)
    # large arguments
    generate("large", 15, 12.27, 7.0)