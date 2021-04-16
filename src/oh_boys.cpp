#include <algorithm>
#include <cstdint>
#include <cstdlib>
#include <iostream>
#include <random>
#include <vector>

#include <lyra/lyra.hpp>

#include "Fnx.hpp"

int main(int argc, char *argv[]) {
  // CLI set up
  int32_t order;
  bool classify = false;
  auto npoints = 1e4;
  auto lower = 0.0;
  auto upper = 125.0;
  bool show_help = false;

  auto cli = lyra::help(show_help) |
             lyra::arg(order, "order")
                 .required()("Evaluation order of the Boys function") |
             lyra::opt(classify)["-c"]["--classify"](
                 "Classify points beforehand? (default false)") |
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

  std::cout << "Evaluating the Boys function of order " << order << " on "
            << npoints << " random points in [" << lower << ", " << upper << "]"
            << std::endl;
  if (classify) {
    std::cout << ">>> Input points will be classified/partitiones beforehand"
              << std::endl;
  }

  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_real_distribution<double> dist(lower, upper);

  auto xs = std::vector<double>(npoints, 0.0);
  std::generate(xs.begin(), xs.end(), [&dist, &mt]() { return dist(mt); });

  auto bytes = sizeof(decltype(xs.front())) * xs.capacity();
  std::cout << ">>> Allocated ~" << bytes / 1024 / 1024
            << " MiB of memory for the random points" << std::endl;
  std::cout << ">>> Calculation will require ~"
            << (bytes * (order + 1)) / 1024 / 1024
            << " MiB of memory for the Boys' function values" << std::endl;

  if (classify) {
    auto boys = boys_function_classify(order, xs);
  } else {
    auto boys = boys_function(order, xs);
  }

  return EXIT_SUCCESS;
}
