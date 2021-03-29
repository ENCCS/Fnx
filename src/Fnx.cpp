#include "Fnx.hpp"

#include <chrono>
#include <iomanip>
#include <iostream>
#include <vector>

#include "print_utils.hpp"
#include "utils.hpp"

#include "F_00.hpp"
#include "F_01.hpp"

using namespace detail;

template <>
std::vector<double> boys_function(int32_t order,
                                  const std::vector<double> &xs) {
  auto start = std::chrono::steady_clock::now();
  // classify input points and NON-DESTRUCTIVELY partition them into separate
  // vectors we create 3 empty vectors with a reservation of a 3rd of the size
  // of the xs
  auto r = static_cast<size_t>(xs.size() / 3);
  auto ls = std::vector<Point<double>>();
  ls.reserve(r);
  auto ms = std::vector<Point<double>>();
  ms.reserve(r);
  auto hs = std::vector<Point<double>>();
  hs.reserve(r);
  for (auto i = 0; i < xs.size(); ++i) {
    auto x = xs[i];
    auto p = grid_point(x);

    if (p < 121) {
      ls.emplace_back(i, x);
    } else if (p < 361 + order * 20) {
      ms.emplace_back(i, x);
    } else {
      hs.emplace_back(i, x);
    }
  }
  auto end = std::chrono::steady_clock::now();

  std::chrono::duration<double, std::milli> diff = end - start;
  std::cout << "Time elapsed in classification/partition = " << std::setw(9)
            << diff.count() << " ms\n ";

  //PRINT_COLLECTION(detail::Fn<double, 0>(ls, detail::pretabulated<0>(), ms, hs),
  //                 "values");

  // compute Boys function
  switch (order) {
  case 0:
    return detail::Fn<double, 0>(xs);
  case 1:
    return detail::Fn<double, 1>(xs);
  default:
    std::cerr << "Boys function of order " << order << " not implemented"
              << std::endl;
    std::abort();
  }

  // rearrange output
}
