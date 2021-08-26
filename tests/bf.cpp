#include <catch2/catch.hpp>

#include <cstdint>
#include <iomanip>

#include "Fnx.hpp"
#include "print_utils.hpp"
#include "testing_utils.hpp"

TEMPLATE_TEST_CASE_SIG(
    "McMurchie-Davidson algorithm for the Boys function with small arguments",
    "[bf][mmd][small]", ((int32_t order), order), (0), (1), (2), (3), (4), (5),
    (6), (7), (8), (9), (10), (11), (12), (13), (14), (15), (16), (17), (18),
    (19), (20), (21), (22), (23), (24), (25), (26), (27), (28)) {
  auto args = small_args();
  // res contains the values of the Boys function for all orders
  // we split it up into by-order arrays
  const auto res = boys_mmd(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);
    INFO("Boys function of order " << i << " (highest order computed  " << order
                                   << ")");

    auto refs = ref_small_args(i);
    for (auto j = 0; j < args.size(); ++j) {
      INFO("Evaluation point " << j << " (" << args[j] << ")");
      INFO("computed = " << std::setprecision(25) << res_to_order[j]);
      INFO("expected = " << std::setprecision(25) << refs[j]);
      CHECK(is_close(res_to_order[j], refs[j], 0.0, 1e-14));
    }
  }
}

TEMPLATE_TEST_CASE_SIG(
    "McMurchie-Davidson algorithm for the Boys function with medium arguments",
    "[bf][mmd][medium]", ((int32_t order), order), (0), (1), (2), (3), (4), (5),
    (6), (7), (8), (9), (10), (11), (12), (13), (14), (15), (16), (17), (18),
    (19), (20), (21), (22), (23), (24), (25), (26), (27), (28)) {
  auto args = medium_args();
  // res contains the values of the Boys function for all orders
  // we split it up into by-order arrays
  const auto res = boys_mmd(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);
    INFO("Boys function of order " << i << " (highest order computed  " << order
                                   << ")");

    auto refs = ref_medium_args(i);
    for (auto j = 0; j < args.size(); ++j) {
      INFO("Evaluation point " << j << " (" << args[j] << ")");
      INFO("computed = " << std::setprecision(25) << res_to_order[j]);
      INFO("expected = " << std::setprecision(25) << refs[j]);
      CHECK(is_close(res_to_order[j], refs[j], 0.0, 1e-14));
    }
  }
}

TEMPLATE_TEST_CASE_SIG(
    "McMurchie-Davidson algorithm for the Boys function with large arguments",
    "[bf][mmd][large]", ((int32_t order), order), (0), (1), (2), (3), (4), (5),
    (6), (7), (8), (9), (10), (11), (12), (13), (14), (15), (16), (17), (18),
    (19), (20), (21), (22), (23), (24), (25), (26), (27), (28)) {
  auto args = large_args();
  // res contains the values of the Boys function for all orders
  // we split it up into by-order arrays
  const auto res = boys_mmd(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);
    INFO("Boys function of order " << i << " (highest order computed  " << order
                                   << ")");

    auto refs = ref_large_args(i);
    for (auto j = 0; j < args.size(); ++j) {
      INFO("Evaluation point " << j << " (" << args[j] << ")");
      INFO("computed = " << std::setprecision(25) << res_to_order[j]);
      INFO("expected = " << std::setprecision(25) << refs[j]);
      CHECK(is_close(res_to_order[j], refs[j], 0.0, 1e-14));
    }
  }
}

TEMPLATE_TEST_CASE_SIG(
    "Tian-Suo-Ma-Jin algorithm for the Boys function with small arguments",
    "[bf][tsmj][small]", ((int32_t order), order), (0), (1), (2), (3), (4), (5),
    (6), (7), (8), (9), (10), (11), (12), (13), (14), (15), (16), (17), (18),
    (19), (20), (21), (22), (23), (24), (25), (26), (27), (28)) {
  auto args = small_args();
  // res contains the values of the Boys function for all orders
  // we split it up into by-order arrays
  const auto res = boys_tsmj(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);
    INFO("Boys function of order " << i << " (highest order computed  " << order
                                   << ")");

    auto refs = ref_small_args(i);
    for (auto j = 0; j < args.size(); ++j) {
      INFO("Evaluation point " << j << " (" << args[j] << ")");
      INFO("computed = " << std::setprecision(25) << res_to_order[j]);
      INFO("expected = " << std::setprecision(25) << refs[j]);
      CHECK(is_close(res_to_order[j], refs[j], 0.0, 1e-14));
    }
  }
}

TEMPLATE_TEST_CASE_SIG(
    "Tian-Suo-Ma-Jin algorithm for the Boys function with medium arguments",
    "[bf][tsmj][medium]", ((int32_t order), order), (0), (1), (2), (3), (4),
    (5), (6), (7), (8), (9), (10), (11), (12), (13), (14), (15), (16), (17),
    (18), (19), (20), (21), (22), (23), (24), (25), (26), (27), (28)) {
  auto args = medium_args();
  // res contains the values of the Boys function for all orders
  // we split it up into by-order arrays
  const auto res = boys_tsmj(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);
    INFO("Boys function of order " << i << " (highest order computed  " << order
                                   << ")");

    auto refs = ref_medium_args(i);
    for (auto j = 0; j < args.size(); ++j) {
      INFO("Evaluation point " << j << " (" << args[j] << ")");
      INFO("computed = " << std::setprecision(25) << res_to_order[j]);
      INFO("expected = " << std::setprecision(25) << refs[j]);
      CHECK(is_close(res_to_order[j], refs[j], 0.0, 1e-14));
    }
  }
}

TEMPLATE_TEST_CASE_SIG(
    "Tian-Suo-Ma-Jin algorithm for the Boys function with large arguments",
    "[bf][tsmj][large]", ((int32_t order), order), (0), (1), (2), (3), (4), (5),
    (6), (7), (8), (9), (10), (11), (12), (13), (14), (15), (16), (17), (18),
    (19), (20), (21), (22), (23), (24), (25), (26), (27), (28)) {
  auto args = large_args();
  // res contains the values of the Boys function for all orders
  // we split it up into by-order arrays
  const auto res = boys_tsmj(order, args);

  for (auto i = 0; i <= order; ++i) {
    auto res_to_order = extract<order>(i, res);
    INFO("Boys function of order " << i << " (highest order computed  " << order
                                   << ")");

    auto refs = ref_large_args(i);
    for (auto j = 0; j < args.size(); ++j) {
      INFO("Evaluation point " << j << " (" << args[j] << ")");
      INFO("computed = " << std::setprecision(25) << res_to_order[j]);
      INFO("expected = " << std::setprecision(25) << refs[j]);
      CHECK(is_close(res_to_order[j], refs[j], 0.0, 1e-14));
    }
  }
}
