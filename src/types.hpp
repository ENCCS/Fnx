#pragma once

#include <cstdint>
#include <type_traits>
#include <utility>

/* Workarounds for C++11 */
#if __cplusplus < 201402L
namespace detail {
template <std::size_t...> struct indexSequence {};

template <std::size_t N, std::size_t... Next>
struct indexSequenceHelper
    : public indexSequenceHelper<N - 1U, N - 1U, Next...> {};

template <std::size_t... Next> struct indexSequenceHelper<0U, Next...> {
  using type = indexSequence<Next...>;
};

template <std::size_t N>
using makeIndexSequence = typename indexSequenceHelper<N>::type;
} // namespace detail

namespace std {
template <bool B, class T = void>
using enable_if_t = typename enable_if<B, T>::type;

// index sequence only
template <std::size_t... Is>
using index_sequence = detail::indexSequence<Is...>;

template <std::size_t N>
using make_index_sequence = detail::makeIndexSequence<N>;
} // namespace std
#endif
