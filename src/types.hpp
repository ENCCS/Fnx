#pragma once

#include <array>
#include <cstdint>
#include <type_traits>

template <int32_t order>
using Table = std::array<std::array<double, 7>, 121 * (order + 1)>;

#if __cplusplus < 201402L
namespace std {
template <bool B, class T = void>
using enable_if_t = typename enable_if<B, T>::type;
}
#endif
