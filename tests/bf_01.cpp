#include <catch2/catch.hpp>

#include <algorithm>
#include <iterator>
#include <vector>

#include "Fnx.hpp"
#include "testing_utils.hpp"

TEST_CASE("Boys function of order 1 with small arguments", "[bf_01][small]") {
  auto args = small_args();
  auto res = boys_function(1, args);

  auto bf01ref = std::vector<double>(
      {3.333333333333330e-01, 2.368110999331860e-01, 1.724584630351420e-01,
       1.287828242194510e-01, 9.857315239467210e-02, 7.725917727250210e-02,
       6.191234205110620e-02, 5.063359764909080e-02, 4.217561459545820e-02,
       3.570786783564010e-02, 3.066934753171250e-02, 2.667537945349410e-02,
       2.345810584596280e-02, 2.082807327857870e-02, 1.864916958429630e-02});

  REQUIRE_THAT(res, Catch::Approx(bf01ref).margin(1e-13));
}

TEST_CASE("Boys function of order 1 with medium arguments", "[bf_01][medium]") {
  auto args = medium_args();
  auto npoints = args.size();
  auto order = 1;

  auto res = boys_function(order, args);

  auto bf01ref = std::vector<double>(
      {1.587359204870060e-02, 1.537066122794410e-02, 1.489361534348180e-02,
       1.444064554535690e-02, 1.401009952884400e-02, 1.360046570065700e-02,
       1.321035914321010e-02, 1.283850915421610e-02, 1.248374816837010e-02,
       1.214500189323060e-02, 1.182128051326880e-02, 1.151167083491540e-02,
       1.121532926171330e-02, 1.093147550276910e-02, 1.065938692987630e-02});

  auto res01 = std::vector<double>(npoints, 0.0);
  for (auto i = 0; i < npoints; ++i) {
    for (auto j = 0; j < order+1; ++j) {
      res01[i] = res[i * (order +1)+ j];
    }
  }
  REQUIRE_THAT(res01, Catch::Approx(bf01ref).margin(1e-13));
}

TEST_CASE("Boys function of order 1 with large arguments", "[bf_01][large]") {
  auto args = large_args();
  auto res = boys_function(1, args);

  auto bf01ref = std::vector<double>(
      {1.030955057373630e-02, 5.238324081627980e-03, 3.290976914560420e-03,
       2.309062794960850e-03, 1.733973678311360e-03, 1.363441602921520e-03,
       1.108345628402840e-03, 9.239386281296980e-04, 7.855432311256420e-04,
       6.785503376954490e-04, 5.938170991139460e-04, 5.253595640036330e-04,
       4.691141007714830e-04, 4.222344646764010e-04, 3.826739358341310e-04});

  REQUIRE_THAT(res, Catch::Approx(bf01ref).margin(1e-13));
}
