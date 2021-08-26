#include <algorithm>
#include <chrono>
#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>

#include <lyra/lyra.hpp>

#include "Fnx.hpp"
#ifdef Fnx_HAS_HIP
#include "Fnx.hip.hpp"
#endif

int main(int argc, char *argv[]) {
  // CLI set up
  int32_t order;
  std::string algo = "mmd";
  auto npoints = 1e4;
  auto lower = 0.0;
  auto upper = 125.0;
  bool show_help = false;

  auto cli = lyra::help(show_help) |
             lyra::arg(order, "order")
                 .required()("Evaluation order of the Boys function") |
             lyra::opt(algo, "algo")["-a"]["--algo"].choices("mmd", "tsmj")(
                 "Algorithm to use (mmd or tsmj, default mmd)") |
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
  auto algostring = (algo == "mmd") ? "McMurchie-Davidson" : "Tian-Suo-Ma-Jin";
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

  auto start_h = std::chrono::steady_clock::now();

  auto ys = (algo == "mmd") ? boys_mmd(order, xs) : boys_tsmj(order, xs);

  auto stop_h = std::chrono::steady_clock::now();
  std::chrono::duration<double, std::milli> elapsed_h = stop_h - start_h;
  std::cout << ">>> Time elapsed evaluating the CPU version of Boys function = "
            << std::setw(9) << elapsed_h.count() << " ms\n";

#ifdef Fnx_HAS_HIP
  auto ys_h = boys_mmd_gpu(order, xs);

  auto agree = true;
  // check that CPU and GPU numbers agree
  for (auto i = 0; i < (npoints * (order + 1)); ++i) {
    if (std::abs(ys_h[i] - ys[i]) > 1.0e-13) {
      std::cout << "ys_tsmj[" << i << "] = " << std::setprecision(25) << ys[i] << std::endl;
      std::cout << "ys_mmd[" << i << "]  = " << std::setprecision(25) << ys_h[i] << std::endl;
      std::cout << "Something went wrong with elements " << i
                << " Delta = " << std::abs(ys_h[i] - ys[i]) << std::endl;
      agree &= false;
    }
  }
  if (agree)
    std::cout << "CPU and GPU versions agree!" << std::endl;
#endif /* Fnx_HAS_HIP */

  return EXIT_SUCCESS;
}
