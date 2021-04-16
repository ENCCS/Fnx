#include <catch2/catch.hpp>

#include <algorithm>
#include <iterator>
#include <vector>

#include "Fnx.hpp"
#include "testing_utils.hpp"

TEST_CASE("Boys function of order 0 with small arguments", "[bf_00][small]") {
  auto args = small_args();
  auto res = boys_function(0, args);

  REQUIRE_THAT(res, Catch::Approx(ref00_small()).margin(1e-13));
}

TEST_CASE("Boys function of order 0 with medium arguments", "[bf_00][medium]") {
  auto args = medium_args();
  auto res = boys_function(0, args);

  REQUIRE_THAT(res, Catch::Approx(ref00_medium()).margin(1e-13));
}

TEST_CASE("Boys function of order 0 with large arguments", "[bf_00][large]") {
  auto args = large_args();
  auto res = boys_function(0, args);

  REQUIRE_THAT(res, Catch::Approx(ref00_large()).margin(1e-13));
}
