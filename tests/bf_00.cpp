#include <catch2/catch.hpp>

#include <algorithm>
#include <iterator>
#include <vector>

#include "Fnx.hpp"
#include "testing_utils.hpp"

TEST_CASE("Boys function of order 0 with small arguments", "[bf_00][small]") {
  auto args = small_args();
  auto res = boys_function(0, args);

  auto bf00ref = std::vector<double>(
      {1.000000000000000e+00, 8.337643826556670e-01, 7.142807113640670e-01,
       6.262241865622670e-01, 5.596855024991541e-01, 5.081688518561950e-01,
       4.673527088040290e-01, 4.343163954040780e-01, 4.070529803295650e-01,
       3.841594831321780e-01, 3.646377456929750e-01, 3.477649743144210e-01,
       3.330085519272120e-01, 3.199692619171010e-01, 3.083429405237970e-01});

  REQUIRE_THAT(res, Catch::Approx(bf00ref).margin(1e-13));
}

TEST_CASE("Boys function of order 0 with medium arguments", "[bf_00][medium]") {
  auto args = medium_args();
  auto res = boys_function(0, args);

  auto bf00ref = std::vector<double>(
      {2.921751330979280e-01, 2.890511551509060e-01, 2.860251433313420e-01,
       2.830921042884270e-01, 2.802473905066430e-01, 2.774866706120870e-01,
       2.748059026617780e-01, 2.722013100791120e-01, 2.696693599402060e-01,
       2.672067433518620e-01, 2.648103576932870e-01, 2.624772905209140e-01,
       2.602048049594860e-01, 2.579903264232660e-01, 2.558314305293830e-01});

  REQUIRE_THAT(res, Catch::Approx(bf00ref).margin(1e-13));
}

TEST_CASE("Boys function of order 0 with large arguments", "[bf_00][large]") {
  auto args = large_args();
  auto res = boys_function(0, args);

  auto bf00ref = std::vector<double>(
      {2.530010614452080e-01, 2.018850143830020e-01, 1.729079270949040e-01,
       1.536450383766990e-01, 1.396542400511970e-01, 1.288997691402010e-01,
       1.202998345068450e-01, 1.132194394910130e-01, 1.072580727778950e-01,
       1.021489678366730e-01, 9.770666548820869e-02, 9.379769655720870e-02,
       9.032322896254140e-02, 8.720830633426380e-02, 8.439490980885930e-02});

  REQUIRE_THAT(res, Catch::Approx(bf00ref).margin(1e-13));
}
