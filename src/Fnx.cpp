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

template <>
std::vector<double> boys_tsmj(int32_t order, const std::vector<double> &xs) {
  // compute Boys function
  switch (order) {
  case 0:
    return tsmj::Fn<0, double>(xs);
  case 1:
    return tsmj::Fn<1, double>(xs);
  case 2:
    return tsmj::Fn<2, double>(xs);
  case 3:
    return tsmj::Fn<3, double>(xs);
  case 4:
    return tsmj::Fn<4, double>(xs);
  case 5:
    return tsmj::Fn<5, double>(xs);
  case 6:
    return tsmj::Fn<6, double>(xs);
  case 7:
    return tsmj::Fn<7, double>(xs);
  case 8:
    return tsmj::Fn<8, double>(xs);
  case 9:
    return tsmj::Fn<9, double>(xs);
  case 10:
    return tsmj::Fn<10, double>(xs);
  case 11:
    return tsmj::Fn<11, double>(xs);
  case 12:
    return tsmj::Fn<12, double>(xs);
  case 13:
    return tsmj::Fn<13, double>(xs);
  case 14:
    return tsmj::Fn<14, double>(xs);
  case 15:
    return tsmj::Fn<15, double>(xs);
  case 16:
    return tsmj::Fn<16, double>(xs);
  case 17:
    return tsmj::Fn<17, double>(xs);
  case 18:
    return tsmj::Fn<18, double>(xs);
  case 19:
    return tsmj::Fn<19, double>(xs);
  case 20:
    return tsmj::Fn<20, double>(xs);
  case 21:
    return tsmj::Fn<21, double>(xs);
  case 22:
    return tsmj::Fn<22, double>(xs);
  case 23:
    return tsmj::Fn<23, double>(xs);
  case 24:
    return tsmj::Fn<24, double>(xs);
  case 25:
    return tsmj::Fn<25, double>(xs);
  case 26:
    return tsmj::Fn<26, double>(xs);
  case 27:
    return tsmj::Fn<27, double>(xs);
  case 28:
    return tsmj::Fn<28, double>(xs);
  default:
    std::cerr << "Boys function of order " << order << " not implemented"
              << std::endl;
    std::abort();
  }
}

template <>
std::vector<double> boys_pgm(int32_t order, const std::vector<double> &xs) {
  // compute Boys function
  switch (order) {
  case 0:
    return pgm::Fn<0, double>(xs);
  case 1:
    return pgm::Fn<1, double>(xs);
  case 2:
    return pgm::Fn<2, double>(xs);
  case 3:
    return pgm::Fn<3, double>(xs);
  case 4:
    return pgm::Fn<4, double>(xs);
  case 5:
    return pgm::Fn<5, double>(xs);
  case 6:
    return pgm::Fn<6, double>(xs);
  case 7:
    return pgm::Fn<7, double>(xs);
  case 8:
    return pgm::Fn<8, double>(xs);
  case 9:
    return pgm::Fn<9, double>(xs);
  case 10:
    return pgm::Fn<10, double>(xs);
  case 11:
    return pgm::Fn<11, double>(xs);
  case 12:
    return pgm::Fn<12, double>(xs);
  case 13:
    return pgm::Fn<13, double>(xs);
  case 14:
    return pgm::Fn<14, double>(xs);
  case 15:
    return pgm::Fn<15, double>(xs);
  case 16:
    return pgm::Fn<16, double>(xs);
  case 17:
    return pgm::Fn<17, double>(xs);
  case 18:
    return pgm::Fn<18, double>(xs);
  case 19:
    return pgm::Fn<19, double>(xs);
  case 20:
    return pgm::Fn<20, double>(xs);
  case 21:
    return pgm::Fn<21, double>(xs);
  case 22:
    return pgm::Fn<22, double>(xs);
  case 23:
    return pgm::Fn<23, double>(xs);
  case 24:
    return pgm::Fn<24, double>(xs);
  case 25:
    return pgm::Fn<25, double>(xs);
  case 26:
    return pgm::Fn<26, double>(xs);
  case 27:
    return pgm::Fn<27, double>(xs);
  case 28:
    return pgm::Fn<28, double>(xs);
  default:
    std::cerr << "Boys function of order " << order << " not implemented"
              << std::endl;
    std::abort();
  }
}
