#include <catch2/catch.hpp>

#include <algorithm>
#include <iterator>
#include <vector>

#include "Fnx.hpp"
#include "testing_utils.hpp"

TEST_CASE("Boys function of order 1 with small arguments", "[bf_01][small]") {
  auto args = small_args();
  // res contains the values of the Boys function for orders 1 and below
  // we split it up into by-order arrays
  const auto res = boys_function(1, args);

  auto res00 = extract<1>(0, res);

  REQUIRE_THAT(res00, Catch::Approx(ref00_small()).margin(1e-13));

  auto res01 = extract<1>(1, res);

  REQUIRE_THAT(res01, Catch::Approx(ref01_small()).margin(1e-13));
}

TEST_CASE("Boys function of order 1 with medium arguments", "[bf_01][medium]") {
  auto args = medium_args();
  // res contains the values of the Boys function for orders 1 and below
  // we split it up into by-order arrays
  const auto res = boys_function(1, args);

  auto res00 = extract<1>(0, res);

  REQUIRE_THAT(res00, Catch::Approx(ref00_medium()).margin(1e-13));

  auto res01 = extract<1>(1, res);

  REQUIRE_THAT(res01, Catch::Approx(ref01_medium()).margin(1e-13));
}

TEST_CASE("Boys function of order 1 with large arguments", "[bf_01][large]") {
  auto args = large_args();
  // res contains the values of the Boys function for orders 1 and below
  // we split it up into by-order arrays
  const auto res = boys_function(1, args);

  auto res00 = extract<1>(0, res);

  REQUIRE_THAT(res00, Catch::Approx(ref00_large()).margin(1e-13));

  auto res01 = extract<1>(1, res);

  REQUIRE_THAT(res01, Catch::Approx(ref01_large()).margin(1e-13));
}
