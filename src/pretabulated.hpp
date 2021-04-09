#pragma once

#include <cstdint>

#include "types.hpp"

namespace tables {
/**
 * Pretabulated values of given order.
 *
 * @tparam order Order of the table to fetch.
 * @return table of values.
 */
template <int32_t order> inline constexpr Table pretabulated() noexcept;
} // namespace tables

#include "tables/F_00.hpp"
#include "tables/F_01.hpp"
#include "tables/F_02.hpp"
