#include "testing_utils.hpp"

#include <iostream>
#include <vector>

std::vector<double> ref_small_args(int32_t order) {
  switch (order) {
  case 0:
    return detail::ref_small_args<0>();
  case 1:
    return detail::ref_small_args<1>();
  case 2:
    return detail::ref_small_args<2>();
  case 3:
    return detail::ref_small_args<3>();
  case 4:
    return detail::ref_small_args<4>();
  case 5:
    return detail::ref_small_args<5>();
  case 6:
    return detail::ref_small_args<6>();
  case 7:
    return detail::ref_small_args<7>();
  case 8:
    return detail::ref_small_args<8>();
  case 9:
    return detail::ref_small_args<9>();
  case 10:
    return detail::ref_small_args<10>();
  case 11:
    return detail::ref_small_args<11>();
  case 12:
    return detail::ref_small_args<12>();
  case 13:
    return detail::ref_small_args<13>();
  case 14:
    return detail::ref_small_args<14>();
  case 15:
    return detail::ref_small_args<15>();
  case 16:
    return detail::ref_small_args<16>();
  case 17:
    return detail::ref_small_args<17>();
  case 18:
    return detail::ref_small_args<18>();
  case 19:
    return detail::ref_small_args<19>();
  case 20:
    return detail::ref_small_args<20>();
  case 21:
    return detail::ref_small_args<21>();
  case 22:
    return detail::ref_small_args<22>();
  case 23:
    return detail::ref_small_args<23>();
  case 24:
    return detail::ref_small_args<24>();
  case 25:
    return detail::ref_small_args<25>();
  case 26:
    return detail::ref_small_args<26>();
  case 27:
    return detail::ref_small_args<27>();
  case 28:
    return detail::ref_small_args<28>();
  default:
    std::cerr << "Reference values for Boys function of order " << order
              << " at small argument values are not available" << std::endl;
    std::abort();
  }
}

std::vector<double> ref_medium_args(int32_t order) {
  switch (order) {
  case 0:
    return detail::ref_medium_args<0>();
  case 1:
    return detail::ref_medium_args<1>();
  case 2:
    return detail::ref_medium_args<2>();
  case 3:
    return detail::ref_medium_args<3>();
  case 4:
    return detail::ref_medium_args<4>();
  case 5:
    return detail::ref_medium_args<5>();
  case 6:
    return detail::ref_medium_args<6>();
  case 7:
    return detail::ref_medium_args<7>();
  case 8:
    return detail::ref_medium_args<8>();
  case 9:
    return detail::ref_medium_args<9>();
  case 10:
    return detail::ref_medium_args<10>();
  case 11:
    return detail::ref_medium_args<11>();
  case 12:
    return detail::ref_medium_args<12>();
  case 13:
    return detail::ref_medium_args<13>();
  case 14:
    return detail::ref_medium_args<14>();
  case 15:
    return detail::ref_medium_args<15>();
  case 16:
    return detail::ref_medium_args<16>();
  case 17:
    return detail::ref_medium_args<17>();
  case 18:
    return detail::ref_medium_args<18>();
  case 19:
    return detail::ref_medium_args<19>();
  case 20:
    return detail::ref_medium_args<20>();
  case 21:
    return detail::ref_medium_args<21>();
  case 22:
    return detail::ref_medium_args<22>();
  case 23:
    return detail::ref_medium_args<23>();
  case 24:
    return detail::ref_medium_args<24>();
  case 25:
    return detail::ref_medium_args<25>();
  case 26:
    return detail::ref_medium_args<26>();
  case 27:
    return detail::ref_medium_args<27>();
  case 28:
    return detail::ref_medium_args<28>();
  default:
    std::cerr << "Reference values for Boys function of order " << order
              << " at medium argument values are not available" << std::endl;
    std::abort();
  }
}

std::vector<double> ref_large_args(int32_t order) {
  switch (order) {
  case 0:
    return detail::ref_large_args<0>();
  case 1:
    return detail::ref_large_args<1>();
  case 2:
    return detail::ref_large_args<2>();
  case 3:
    return detail::ref_large_args<3>();
  case 4:
    return detail::ref_large_args<4>();
  case 5:
    return detail::ref_large_args<5>();
  case 6:
    return detail::ref_large_args<6>();
  case 7:
    return detail::ref_large_args<7>();
  case 8:
    return detail::ref_large_args<8>();
  case 9:
    return detail::ref_large_args<9>();
  case 10:
    return detail::ref_large_args<10>();
  case 11:
    return detail::ref_large_args<11>();
  case 12:
    return detail::ref_large_args<12>();
  case 13:
    return detail::ref_large_args<13>();
  case 14:
    return detail::ref_large_args<14>();
  case 15:
    return detail::ref_large_args<15>();
  case 16:
    return detail::ref_large_args<16>();
  case 17:
    return detail::ref_large_args<17>();
  case 18:
    return detail::ref_large_args<18>();
  case 19:
    return detail::ref_large_args<19>();
  case 20:
    return detail::ref_large_args<20>();
  case 21:
    return detail::ref_large_args<21>();
  case 22:
    return detail::ref_large_args<22>();
  case 23:
    return detail::ref_large_args<23>();
  case 24:
    return detail::ref_large_args<24>();
  case 25:
    return detail::ref_large_args<25>();
  case 26:
    return detail::ref_large_args<26>();
  case 27:
    return detail::ref_large_args<27>();
  case 28:
    return detail::ref_large_args<28>();
  default:
    std::cerr << "Reference values for Boys function of order " << order
              << " at large argument values are not available" << std::endl;
    std::abort();
  }
}
