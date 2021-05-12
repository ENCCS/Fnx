#include "Fnx.hip.hpp"

#include <iomanip>
#include <iostream>
#include <vector>

#include <hip/hip_runtime.h>

template <>
__host__ std::vector<double> boys_mmd_gpu(int32_t order,
                                          const std::vector<double> &xs) {
  const auto npoints = xs.size();
  // allocate input vector on device
  auto xs_bytes = sizeof(double) * npoints;
  double *xs_d;
  HIP_CHECK(hipMalloc(&xs_d, xs_bytes));
  // copy input vector to device
  // NOTE the data on the host would have to be allocated with hipMallocHost for
  // faster transfer (that means writing a custom allocator for std::vector)
  // NOTE the const_cast is sadly necessary!
  HIP_CHECK(hipMemcpyHtoD(xs_d, const_cast<double *>(xs.data()), xs_bytes));

  // allocate result vector on device
  auto ys_bytes = xs_bytes * (order + 1);
  double *ys_d;
  HIP_CHECK(hipMalloc(&ys_d, ys_bytes));

  // NOTE launch parameters cannot be constexpr
  // TODO balance number of blocks and threads per block with number of points
  // this will also depend on the architecture of the GPU...
  const auto blocks = dim3(std::ceil(npoints) / 256 + 1);
  const auto threadsPerBlock = dim3(256);

  hipEvent_t start_d;
  hipEventCreate(&start_d);
  hipEventRecord(start_d, nullptr);

  // compute
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

  hipEvent_t stop_d;
  hipEventCreate(&stop_d);
  hipEventRecord(stop_d, nullptr);

  hipEventSynchronize(stop_d);

  // elapsed time on device in ms
  float elapsed_d = 0.0;
  hipEventElapsedTime(&elapsed_d, start_d, stop_d);

  std::cout << ">>> Time elapsed evaluating the GPU version of Boys function = "
            << std::setw(9) << elapsed_d << " ms\n";

  // retrieve results
  auto ys = std::vector<double>(npoints * (order + 1), 0.0);
  HIP_CHECK(hipMemcpyDtoH(ys.data(), ys_d, ys_bytes));

  // clean up device memory
  HIP_CHECK(hipFree(xs_d));
  HIP_CHECK(hipFree(ys_d));

  return ys;
}
