#include <algorithm>
#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <random>
#include <tuple>
#include <vector>

#include <lyra/lyra.hpp>

#include "Fnx.hpp"
#ifdef Fnx_HAS_HIP
#include "Fnx.hip.hpp"
#endif

using delta_type = std::tuple<int, double, double>;

void report_deltas(const std::string &header,
                   const std::vector<delta_type> &deltas) {
  std::cout << header << " " << deltas.size() << " cases." << std::endl;
  const auto [max_o, max_p, max_d] =
      *std::max_element(deltas.cbegin(), deltas.cend(),
                        [](const delta_type &x, const delta_type &y) {
                          return std::get<2>(x) < std::get<2>(y);
                        });
  std::cout << "Maximum discrepancy = " << max_d << " at order " << max_o
            << " and point " << max_p << std::endl;
  const auto [min_o, min_p, min_d] =
      *std::min_element(deltas.cbegin(), deltas.cend(),
                        [](const delta_type &x, const delta_type &y) {
                          return std::get<0>(x) < std::get<0>(y);
                        });
  std::cout << "Lowest order at which differences arise is " << min_o
            << " at point " << min_p << " with discrepancy " << min_d
            << std::endl;
}

int main(int argc, char *argv[]) {
  // CLI set up
  int32_t order;
  std::string algo = "mmd";
  auto npoints = 1e4;
  auto lower = 0.0;
  auto upper = 125.0;
  bool show_help = false;

  auto cli =
      lyra::help(show_help) |
      lyra::arg(order, "order")
          .required()("Evaluation order of the Boys function") |
      lyra::opt(algo, "algo")["-a"]["--algo"].choices("mmd", "tsmj", "pgm")(
          "Algorithm to use (mmd, tsmj, pgm, default mmd)") |
      lyra::opt(npoints, "npoints")["-n"]["--npoints"](
          "How many evaluation points (default 1e4)") |
      lyra::opt(lower, "lower")["-l"]["--lower"](
          "Lower bound of evaluation interval (default 0.0)") |
      lyra::opt(upper, "upper")["-u"]["--upper"](
          "Upper bound of evaluation interval (default 125.0)");

  // Parse the program arguments:
  auto result = cli.parse({argc, argv});

  // Check that the arguments where valid:
  if (!result) {
    std::cerr << "Error in command line: " << result.errorMessage()
              << std::endl;
    std::cerr << cli << "\n";
    return EXIT_FAILURE;
  }

  // Show the help when asked for.
  if (show_help) {
    std::cout << cli << "\n";
    return EXIT_SUCCESS;
  }

  // convert number of points to int32_t
  npoints = static_cast<int32_t>(npoints);
  const auto algostring = [algo] {
    if (algo == "mmd") {
      return "McMurchie-Davidson";
    } else if (algo == "tsmj") {
      return "Tian-Suo-Ma-Jin";
    } else if (algo == "pgm") {
      return "Padé-Guseinov-Mamedov";
    } else {
      return "McMurchie-Davidson";
    }
  }();
  std::cout << "Evaluating the Boys function (" << algostring
            << " algorithm) of order " << order << " on " << npoints
            << " random points in [" << lower << ", " << upper << "]"
            << std::endl;

  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_real_distribution<double> dist(lower, upper);

  auto xs = std::vector<double>(npoints, 0.0);
  std::generate(xs.begin(), xs.end(), [&dist, &mt]() { return dist(mt); });
  // make sure lower and upper bounds are in xs
  xs.front() = lower;
  xs.back() = upper;

  auto xs_bytes = sizeof(double) * npoints;
  auto ys_bytes = xs_bytes * (order + 1);
  std::cout << ">>> Allocated ~" << xs_bytes / 1024.0 / 1024.0
            << " MiB of memory for the random points" << std::endl;
  std::cout << ">>> Calculation will require ~" << ys_bytes / 1024.0 / 1024.0
            << " MiB of memory for the Boys' function values" << std::endl;

  // the reference result is computed with McMurchie-Davidson
  const auto gold = boys_mmd(order, xs);

  auto start_h = std::chrono::steady_clock::now();

  const auto ys_h = [algo, order, &xs] {
    if (algo == "mmd") {
      return boys_mmd(order, xs);
    } else if (algo == "tsmj") {
      return boys_tsmj(order, xs);
    } else if (algo == "pgm") {
      return boys_pgm(order, xs);
    } else {
      return boys_mmd(order, xs);
    }
  }();

  auto stop_h = std::chrono::steady_clock::now();
  std::chrono::duration<double, std::milli> elapsed_h = stop_h - start_h;
  std::cout << ">>> Time elapsed evaluating the CPU version of Boys function = "
            << std::setw(9) << elapsed_h.count() << " ms\n";

#ifdef Fnx_HAS_HIP
  const auto ys_d = [algo, order, &xs] {
    if (algo == "mmd") {
      return boys_mmd_gpu(order, xs);
    } else if (algo == "tsmj") {
      return boys_tsmj_gpu(order, xs);
    } else if (algo == "pgm") {
      return boys_pgm_gpu(order, xs);
    } else {
      return boys_mmd_gpu(order, xs);
    }
  }();

  std::vector<delta_type> deltas;
  // check agreement between reference and GPU numbers
  auto agree = true;
  for (auto i = 0; i < npoints; ++i) {
    for (auto j = 0; j <= order; ++j) {
      auto idx = j + i * (order + 1);
      if (std::abs(gold[idx] - ys_d[idx]) > 1.0e-13) {
        std::cout << "Order " << j << " and point " << i + 1 << " ("
                  << std::setprecision(12) << xs[i] << ") " << std::endl;
        std::cout << "gold[" << idx << "] = " << std::setprecision(25)
                  << gold[idx] << std::endl;
        std::cout << "ys_d[" << idx << "]  = " << std::setprecision(25)
                  << ys_d[idx] << std::endl;
        std::cout << "Something went wrong! "
                  << " Delta = " << std::abs(gold[idx] - ys_d[idx])
                  << std::endl;
        deltas.push_back(
            std::make_tuple(j, xs[i], std::abs(gold[idx] - ys_d[idx])));
        agree &= false;
      }
    }
  }
  if (!agree) {
    report_deltas("Discrepancies between reference and GPU results observed in",
                  deltas);
  } else {
    std::cout << "Reference and GPU versions agree!" << std::endl;
  }

  // check agreement between CPU and GPU numbers
  deltas.clear();
  agree = true;
  for (auto i = 0; i < npoints; ++i) {
    for (auto j = 0; j <= order; ++j) {
      auto idx = j + i * (order + 1);
      if (std::abs(ys_h[idx] - ys_d[idx]) > 1.0e-13) {
        std::cout << "Order " << j << " and point " << i + 1 << " ("
                  << std::setprecision(12) << xs[i] << ") " << std::endl;
        std::cout << "ys_h[" << idx << "] = " << std::setprecision(25)
                  << ys_h[idx] << std::endl;
        std::cout << "ys_d[" << idx << "]  = " << std::setprecision(25)
                  << ys_d[idx] << std::endl;
        std::cout << "Something went wrong! "
                  << " Delta = " << std::abs(ys_h[idx] - ys_d[idx])
                  << std::endl;
        deltas.push_back(
            std::make_tuple(j, xs[i], std::abs(ys_h[idx] - ys_d[idx])));
        agree &= false;
      }
    }
  }
  if (!agree) {
    report_deltas("Discrepancies between CPU and GPU results observed in",
                  deltas);
  } else {
    std::cout << "CPU and GPU versions agree!" << std::endl;
  }
#endif /* Fnx_HAS_HIP */

  return EXIT_SUCCESS;
}
