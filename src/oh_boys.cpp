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
  auto npoints = 1e4;
  auto lower = 0.0;
  auto upper = 125.0;
  bool show_help = false;

  auto cli = lyra::help(show_help) |
             lyra::arg(order, "order")
                 .required()("Evaluation order of the Boys function") |
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
  std::cout << "Evaluating the Boys function of order " << order << " on "
            << npoints << " random points in [" << lower << ", " << upper << "]"
            << std::endl;

  std::random_device rd;
  std::mt19937 mt(rd());
  std::uniform_real_distribution<double> dist(lower, upper);

  auto xs = std::vector<double>(npoints, 0.0);
  std::generate(xs.begin(), xs.end(), [&dist, &mt]() { return dist(mt); });

  auto xs_bytes = sizeof(double) * npoints;
  auto ys_bytes = xs_bytes * (order + 1);
  std::cout << ">>> Allocated ~" << xs_bytes / 1024.0 / 1024.0
            << " MiB of memory for the random points" << std::endl;
  std::cout << ">>> Calculation will require ~" << ys_bytes / 1024.0 / 1024.0
            << " MiB of memory for the Boys' function values" << std::endl;

  auto start_h = std::chrono::steady_clock::now();

  auto ys = boys_mmd(order, xs);

  auto stop_h = std::chrono::steady_clock::now();
  std::chrono::duration<double, std::milli> elapsed_h = stop_h - start_h;
  std::cout << ">>> Time elapsed evaluating the CPU version of Boys function = "
            << std::setw(9) << elapsed_h.count() << " ms\n";

#ifdef Fnx_HAS_HIP
  // allocate points vector on device
  // NOTE the data on the host would have to be allocated with hipMallocHost for
  // faster transfer
  double *xs_d;
  HIP_CHECK(hipMalloc(&xs_d, xs_bytes));
  HIP_CHECK(hipMemcpyHtoD(xs_d, xs.data(), xs_bytes));

  // allocate result vector on device
  double *ys_d;
  HIP_CHECK(hipMalloc(&ys_d, ys_bytes));

  // NOTE launch parameters cannot be constexpr
  const auto blocks = dim3(std::ceil(npoints / 256));
  const auto threadsPerBlock = dim3(256);

  hipEvent_t start_d;
  hipEventCreate(&start_d);
  hipEventRecord(start_d, nullptr);

  switch (order) {
  case 0:
    hipLaunchKernelGGL((mmd::Fn<double, 0>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 1:
    hipLaunchKernelGGL((mmd::Fn<double, 1>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 2:
    hipLaunchKernelGGL((mmd::Fn<double, 2>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 3:
    hipLaunchKernelGGL((mmd::Fn<double, 3>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 4:
    hipLaunchKernelGGL((mmd::Fn<double, 4>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 5:
    hipLaunchKernelGGL((mmd::Fn<double, 5>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 6:
    hipLaunchKernelGGL((mmd::Fn<double, 6>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 7:
    hipLaunchKernelGGL((mmd::Fn<double, 7>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 8:
    hipLaunchKernelGGL((mmd::Fn<double, 8>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 9:
    hipLaunchKernelGGL((mmd::Fn<double, 9>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 10:
    hipLaunchKernelGGL((mmd::Fn<double, 10>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 11:
    hipLaunchKernelGGL((mmd::Fn<double, 11>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 12:
    hipLaunchKernelGGL((mmd::Fn<double, 12>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 13:
    hipLaunchKernelGGL((mmd::Fn<double, 13>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 14:
    hipLaunchKernelGGL((mmd::Fn<double, 14>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 15:
    hipLaunchKernelGGL((mmd::Fn<double, 15>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 16:
    hipLaunchKernelGGL((mmd::Fn<double, 16>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 17:
    hipLaunchKernelGGL((mmd::Fn<double, 17>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 18:
    hipLaunchKernelGGL((mmd::Fn<double, 18>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 19:
    hipLaunchKernelGGL((mmd::Fn<double, 19>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 20:
    hipLaunchKernelGGL((mmd::Fn<double, 20>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 21:
    hipLaunchKernelGGL((mmd::Fn<double, 21>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 22:
    hipLaunchKernelGGL((mmd::Fn<double, 22>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 23:
    hipLaunchKernelGGL((mmd::Fn<double, 23>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 24:
    hipLaunchKernelGGL((mmd::Fn<double, 24>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 25:
    hipLaunchKernelGGL((mmd::Fn<double, 25>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 26:
    hipLaunchKernelGGL((mmd::Fn<double, 26>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 27:
    hipLaunchKernelGGL((mmd::Fn<double, 27>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 28:
    hipLaunchKernelGGL((mmd::Fn<double, 28>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  default:
    std::abort();
  }

  hipEvent_t  stop_d;
  hipEventCreate(&stop_d);
  hipEventRecord(stop_d, nullptr);

  hipEventSynchronize(stop_d);

  // elapsed time on device in ms
  float elapsed_d = 0.0;
  hipEventElapsedTime(&elapsed_d, start_d, stop_d);

  std::cout << ">>> Time elapsed evaluating the GPU version of Boys function = "
            << std::setw(9) << elapsed_d << " ms\n";

  // retrieve results
  auto ys_h = std::vector<double>(npoints * (order + 1), 0.0);
  HIP_CHECK(hipMemcpyDtoH(ys_h.data(), ys_d, ys_bytes));

  // clean up device memory
  HIP_CHECK(hipFree(xs_d));
  HIP_CHECK(hipFree(ys_d));

  // check that CPU and GPU numbers agree
  for (auto i = 0; i < (npoints * (order + 1)); ++i) {
    if (std::abs(ys_h[i] - ys[i]) > 1.0e-15)
      std::cout << "Something went wrong with elements " << i
                << " Delta = " << std::abs(ys_h[i] - ys[i]) << std::endl;
  }
  std::cout << "CPU and GPU versions agree!" << std::endl;
#endif /* Fnx_HAS_HIP */

  return EXIT_SUCCESS;
}
