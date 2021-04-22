#include "Fnx.hpp"

#include <cstdlib>
#include <iostream>
#include <vector>

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
