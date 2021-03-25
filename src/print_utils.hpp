#pragma once

#include <iostream>
#include <string>

template <typename T>
inline void PRINT_COLLECTION(const T &c, const std::string &title = "",
                             char start = '[', char sep = ' ', char end = ']') {
  std::cout << title << std::endl;
  std::cout << start;
  for (auto x : c) {
    std::cout << x << sep;
  }
  std::cout << end << std::endl;
}
