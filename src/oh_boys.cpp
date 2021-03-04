#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>

#ifdef _OPENMP
#include <omp.h>
#endif

#include <lyra/lyra.hpp>

#include "Fnx.hpp"

int main(int argc, char *argv[]) {
  // CLI set up
  int32_t order;
  auto npoints = 1e7;
  auto lower = 0.0;
  auto upper = 125.0;
  bool show_help = false;

  auto cli = lyra::help(show_help) |
             lyra::arg(order, "order")
                 .required()("Evaluation order of the Boys function") |
             lyra::opt(npoints, "npoints")["-n"]["--npoints"](
                 "How many evaluation points (default 1e7)") |
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

  std::cout << "Evaluating the Boys function of order " << order << " on "
            << npoints << " random points in [" << lower << ", " << upper << "]"
            << std::endl;

#ifdef _OPENMP
  std::cout << omp_get_num_procs() << " processors and "
            << omp_get_max_threads() << " threads available" << std::endl;
#endif

  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_real_distribution<double> dist(lower, upper);

  auto v = std::vector<double>(npoints, 0.0);
  std::generate(v.begin(), v.end(), [&dist, &mt]() { return dist(mt); });

  auto start = std::chrono::steady_clock::now();
  auto boys = boys_function(order, v);
  auto end = std::chrono::steady_clock::now();

  std::chrono::duration<double, std::milli> diff = end - start;
  std::cout << "Elapsed time = " << std::setw(9) << diff.count() << " ms\n ";

  return EXIT_SUCCESS;
}
