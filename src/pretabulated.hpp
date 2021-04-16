#pragma once

#include <array>
#include <cstdint>

namespace tables {
/**
 * Pretabulated values of given order.
 *
 * @tparam order Order of the table to fetch.
 * @return table of values.
 */
template <int32_t order>
inline constexpr std::array<std::array<double, 7>, 121> pretabulated();
} // namespace tables

#include "tables/F_00.hpp"
#include "tables/F_01.hpp"
#include "tables/F_02.hpp"
#include "tables/F_03.hpp"
#include "tables/F_04.hpp"
#include "tables/F_05.hpp"
#include "tables/F_06.hpp"
#include "tables/F_07.hpp"
#include "tables/F_08.hpp"
#include "tables/F_09.hpp"
#include "tables/F_10.hpp"
#include "tables/F_11.hpp"
#include "tables/F_12.hpp"
#include "tables/F_13.hpp"
#include "tables/F_14.hpp"
#include "tables/F_15.hpp"
#include "tables/F_16.hpp"
#include "tables/F_17.hpp"
#include "tables/F_18.hpp"
#include "tables/F_19.hpp"
#include "tables/F_20.hpp"
#include "tables/F_21.hpp"
#include "tables/F_22.hpp"
#include "tables/F_23.hpp"
#include "tables/F_24.hpp"
#include "tables/F_25.hpp"
#include "tables/F_26.hpp"
#include "tables/F_27.hpp"
#include "tables/F_28.hpp"
