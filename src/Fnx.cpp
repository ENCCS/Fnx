#include "Fnx.hpp"

#include <chrono>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <vector>

#include "utils.hpp"

using namespace detail;

template <>
std::vector<double> boys_mmd(int32_t order, const std::vector<double> &xs) {
  // compute Boys function
  switch (order) {
  case 0:
    return mmd::Fn<double, 0>(xs);
  case 1:
    return mmd::Fn<double, 1>(xs);
  case 2:
    return mmd::Fn<double, 2>(xs);
  case 3:
    return mmd::Fn<double, 3>(xs);
  case 4:
    return mmd::Fn<double, 4>(xs);
  case 5:
    return mmd::Fn<double, 5>(xs);
  case 6:
    return mmd::Fn<double, 6>(xs);
  case 7:
    return mmd::Fn<double, 7>(xs);
  case 8:
    return mmd::Fn<double, 8>(xs);
  case 9:
    return mmd::Fn<double, 9>(xs);
  case 10:
    return mmd::Fn<double, 10>(xs);
  case 11:
    return mmd::Fn<double, 11>(xs);
  case 12:
    return mmd::Fn<double, 12>(xs);
  case 13:
    return mmd::Fn<double, 13>(xs);
  case 14:
    return mmd::Fn<double, 14>(xs);
  case 15:
    return mmd::Fn<double, 15>(xs);
  case 16:
    return mmd::Fn<double, 16>(xs);
  case 17:
    return mmd::Fn<double, 17>(xs);
  case 18:
    return mmd::Fn<double, 18>(xs);
  case 19:
    return mmd::Fn<double, 19>(xs);
  case 20:
    return mmd::Fn<double, 20>(xs);
  case 21:
    return mmd::Fn<double, 21>(xs);
  case 22:
    return mmd::Fn<double, 22>(xs);
  case 23:
    return mmd::Fn<double, 23>(xs);
  case 24:
    return mmd::Fn<double, 24>(xs);
  case 25:
    return mmd::Fn<double, 25>(xs);
  case 26:
    return mmd::Fn<double, 26>(xs);
  case 27:
    return mmd::Fn<double, 27>(xs);
  case 28:
    return mmd::Fn<double, 28>(xs);
  default:
    std::cerr << "Boys function of order " << order << " not implemented"
              << std::endl;
    std::abort();
  }
}

template <>
std::vector<double> boys_mmd_classify(int32_t order,
                                      const std::vector<double> &xs) {
  // Classify input points and NON-DESTRUCTIVELY partition them into separate
  // vectors. We create 3 empty vectors with a reservation of a 3rd of the size
  // of the xs

  auto start = std::chrono::steady_clock::now();

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
  std::cout << ">>> Time elapsed in point classification/partition = "
            << std::setw(9) << diff.count() << " ms\n";

  // compute Boys function
  switch (order) {
  case 0:
    return mmd::Fn<double, 0>(ls, ms, hs);
  case 1:
    return mmd::Fn<double, 1>(ls, ms, hs);
  case 2:
    return mmd::Fn<double, 2>(ls, ms, hs);
  case 3:
    return mmd::Fn<double, 3>(ls, ms, hs);
  case 4:
    return mmd::Fn<double, 4>(ls, ms, hs);
  case 5:
    return mmd::Fn<double, 5>(ls, ms, hs);
  case 6:
    return mmd::Fn<double, 6>(ls, ms, hs);
  case 7:
    return mmd::Fn<double, 7>(ls, ms, hs);
  case 8:
    return mmd::Fn<double, 8>(ls, ms, hs);
  case 9:
    return mmd::Fn<double, 9>(ls, ms, hs);
  case 10:
    return mmd::Fn<double, 10>(ls, ms, hs);
  case 11:
    return mmd::Fn<double, 11>(ls, ms, hs);
  case 12:
    return mmd::Fn<double, 12>(ls, ms, hs);
  case 13:
    return mmd::Fn<double, 13>(ls, ms, hs);
  case 14:
    return mmd::Fn<double, 14>(ls, ms, hs);
  case 15:
    return mmd::Fn<double, 15>(ls, ms, hs);
  case 16:
    return mmd::Fn<double, 16>(ls, ms, hs);
  case 17:
    return mmd::Fn<double, 17>(ls, ms, hs);
  case 18:
    return mmd::Fn<double, 18>(ls, ms, hs);
  case 19:
    return mmd::Fn<double, 19>(ls, ms, hs);
  case 20:
    return mmd::Fn<double, 20>(ls, ms, hs);
  case 21:
    return mmd::Fn<double, 21>(ls, ms, hs);
  case 22:
    return mmd::Fn<double, 22>(ls, ms, hs);
  case 23:
    return mmd::Fn<double, 23>(ls, ms, hs);
  case 24:
    return mmd::Fn<double, 24>(ls, ms, hs);
  case 25:
    return mmd::Fn<double, 25>(ls, ms, hs);
  case 26:
    return mmd::Fn<double, 26>(ls, ms, hs);
  case 27:
    return mmd::Fn<double, 27>(ls, ms, hs);
  case 28:
    return mmd::Fn<double, 28>(ls, ms, hs);
  default:
    std::cerr << "Boys function of order " << order << " not implemented"
              << std::endl;
    std::abort();
  }
}
