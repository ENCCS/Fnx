#include "Fnx.hpp"

#include <chrono>
#include <iomanip>
#include <iostream>
#include <vector>

#include "print_utils.hpp"
#include "utils.hpp"

using namespace detail;

template <>
std::vector<double> boys_function(int32_t order,
                                  const std::vector<double> &xs) {
  //auto start = std::chrono::steady_clock::now();
  //// classify input points and NON-DESTRUCTIVELY partition them into separate
  //// vectors we create 3 empty vectors with a reservation of a 3rd of the size
  //// of the xs
  //auto r = static_cast<size_t>(xs.size() / 3);
  //auto ls = std::vector<Point<double>>();
  //ls.reserve(r);
  //auto ms = std::vector<Point<double>>();
  //ms.reserve(r);
  //auto hs = std::vector<Point<double>>();
  //hs.reserve(r);
  //for (auto i = 0; i < xs.size(); ++i) {
  //  auto x = xs[i];
  //  auto p = grid_point(x);

  //  if (p < 121) {
  //    ls.emplace_back(i, x);
  //  } else if (p < 361 + order * 20) {
  //    ms.emplace_back(i, x);
  //  } else {
  //    hs.emplace_back(i, x);
  //  }
  //}
  //auto end = std::chrono::steady_clock::now();

  //std::chrono::duration<double, std::milli> diff = end - start;
  //std::cout << "Time elapsed in classification/partition = " << std::setw(9)
  //          << diff.count() << " ms\n ";

  //PRINT_COLLECTION(detail::Fn<double, 0>(ls, ms, hs),
  //                 "values");

  // compute Boys function
  switch (order) {
  case 0:
    return detail::Fn<double, 0>(xs);
  case 1:
    return detail::Fn<double, 1>(xs);
  case 2:
    return detail::Fn<double, 2>(xs);
  case 3:
    return detail::Fn<double, 3>(xs);
  case 4:
    return detail::Fn<double, 4>(xs);
  case 5:
    return detail::Fn<double, 5>(xs);
  case 6:
    return detail::Fn<double, 6>(xs);
  case 7:
    return detail::Fn<double, 7>(xs);
  case 8:
    return detail::Fn<double, 8>(xs);
  case 9:
    return detail::Fn<double, 9>(xs);
  case 10:
    return detail::Fn<double, 10>(xs);
  case 11:
    return detail::Fn<double, 11>(xs);
  case 12:
    return detail::Fn<double, 12>(xs);
  case 13:
    return detail::Fn<double, 13>(xs);
  case 14:
    return detail::Fn<double, 14>(xs);
  case 15:
    return detail::Fn<double, 15>(xs);
  case 16:
    return detail::Fn<double, 16>(xs);
  case 17:
    return detail::Fn<double, 17>(xs);
  case 18:
    return detail::Fn<double, 18>(xs);
  case 19:
    return detail::Fn<double, 19>(xs);
  case 20:
    return detail::Fn<double, 20>(xs);
  case 21:
    return detail::Fn<double, 21>(xs);
  case 22:
    return detail::Fn<double, 22>(xs);
  case 23:
    return detail::Fn<double, 23>(xs);
  case 24:
    return detail::Fn<double, 24>(xs);
  case 25:
    return detail::Fn<double, 25>(xs);
  case 26:
    return detail::Fn<double, 26>(xs);
  case 27:
    return detail::Fn<double, 27>(xs);
  case 28:
    return detail::Fn<double, 28>(xs);
  default:
    std::cerr << "Boys function of order " << order << " not implemented"
              << std::endl;
    std::abort();
  }

  // rearrange output
}
