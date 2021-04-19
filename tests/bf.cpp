#include <catch2/catch.hpp>

#include <cstdint>

#include "Fnx.hpp"
#include "testing_utils.hpp"

#include "print_utils.hpp"

TEMPLATE_TEST_CASE_SIG("Boys function with small arguments", "[bf][small]",
                       ((int32_t order), order), (0), (1)) {
  auto args = small_args();
  // res contains the values of the Boys function for orders 1 and below
  // we split it up into by-order arrays
  const auto res = boys_function(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);

    REQUIRE_THAT(res_to_order, Catch::Approx(ref_small_args(i)).margin(1e-13));
  }
}

TEMPLATE_TEST_CASE_SIG("Boys function with medium arguments", "[bf][medium]",
                       ((int32_t order), order), (0), (1)) {
  auto args = medium_args();
  // res contains the values of the Boys function for orders 1 and below
  // we split it up into by-order arrays
  const auto res = boys_function(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);

    REQUIRE_THAT(res_to_order, Catch::Approx(ref_medium_args(i)).margin(1e-13));
  }
}

TEMPLATE_TEST_CASE_SIG("Boys function with large arguments", "[bf][large]",
                       ((int32_t order), order), (0), (1)) {
  auto args = large_args();
  // res contains the values of the Boys function for orders 1 and below
  // we split it up into by-order arrays
  const auto res = boys_function(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);

    REQUIRE_THAT(res_to_order, Catch::Approx(ref_large_args(i)).margin(1e-13));
  }
}
