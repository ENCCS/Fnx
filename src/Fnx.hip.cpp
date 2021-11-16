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
  const auto blocks = dim3(std::ceil(npoints / 256) + 1);
  const auto threadsPerBlock = dim3(256);

  hipEvent_t start_d;
  HIP_CHECK(hipEventCreate(&start_d));
  HIP_CHECK(hipEventRecord(start_d, nullptr));

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
  HIP_CHECK(hipStreamSynchronize(0));

  hipEvent_t stop_d;
  HIP_CHECK(hipEventCreate(&stop_d));
  HIP_CHECK(hipEventRecord(stop_d, nullptr));

  HIP_CHECK(hipEventSynchronize(stop_d));

  // elapsed time on device in ms
  float elapsed_d = 0.0;
  HIP_CHECK(hipEventElapsedTime(&elapsed_d, start_d, stop_d));

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

template <>
__host__ std::vector<double> boys_tsmj_gpu(int32_t order,
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
  const auto blocks = dim3(std::ceil(npoints / 256) + 1);
  const auto threadsPerBlock = dim3(256);

  hipEvent_t start_d;
  HIP_CHECK(hipEventCreate(&start_d));
  HIP_CHECK(hipEventRecord(start_d, nullptr));

  // compute
  switch (order) {
  case 0:
    hipLaunchKernelGGL((tsmj::Fn<0, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 1:
    hipLaunchKernelGGL((tsmj::Fn<1, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 2:
    hipLaunchKernelGGL((tsmj::Fn<2, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 3:
    hipLaunchKernelGGL((tsmj::Fn<3, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 4:
    hipLaunchKernelGGL((tsmj::Fn<4, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 5:
    hipLaunchKernelGGL((tsmj::Fn<5, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 6:
    hipLaunchKernelGGL((tsmj::Fn<6, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 7:
    hipLaunchKernelGGL((tsmj::Fn<7, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 8:
    hipLaunchKernelGGL((tsmj::Fn<8, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 9:
    hipLaunchKernelGGL((tsmj::Fn<9, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 10:
    hipLaunchKernelGGL((tsmj::Fn<10, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 11:
    hipLaunchKernelGGL((tsmj::Fn<11, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 12:
    hipLaunchKernelGGL((tsmj::Fn<12, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 13:
    hipLaunchKernelGGL((tsmj::Fn<13, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 14:
    hipLaunchKernelGGL((tsmj::Fn<14, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 15:
    hipLaunchKernelGGL((tsmj::Fn<15, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 16:
    hipLaunchKernelGGL((tsmj::Fn<16, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 17:
    hipLaunchKernelGGL((tsmj::Fn<17, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 18:
    hipLaunchKernelGGL((tsmj::Fn<18, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 19:
    hipLaunchKernelGGL((tsmj::Fn<19, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 20:
    hipLaunchKernelGGL((tsmj::Fn<20, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 21:
    hipLaunchKernelGGL((tsmj::Fn<21, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 22:
    hipLaunchKernelGGL((tsmj::Fn<22, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 23:
    hipLaunchKernelGGL((tsmj::Fn<23, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 24:
    hipLaunchKernelGGL((tsmj::Fn<24, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 25:
    hipLaunchKernelGGL((tsmj::Fn<25, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 26:
    hipLaunchKernelGGL((tsmj::Fn<26, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 27:
    hipLaunchKernelGGL((tsmj::Fn<27, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 28:
    hipLaunchKernelGGL((tsmj::Fn<28, double>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  default:
    std::abort();
  }
  HIP_CHECK(hipStreamSynchronize(0));

  hipEvent_t stop_d;
  HIP_CHECK(hipEventCreate(&stop_d));
  HIP_CHECK(hipEventRecord(stop_d, nullptr));

  HIP_CHECK(hipEventSynchronize(stop_d));

  // elapsed time on device in ms
  float elapsed_d = 0.0;
  HIP_CHECK(hipEventElapsedTime(&elapsed_d, start_d, stop_d));

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

template <>
__host__ std::vector<double> boys_pgm_gpu(int32_t order,
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
  const auto blocks = dim3(std::ceil(npoints / 256) + 1);
  const auto threadsPerBlock = dim3(256);

  hipEvent_t start_d;
  HIP_CHECK(hipEventCreate(&start_d));
  HIP_CHECK(hipEventRecord(start_d, nullptr));

  // compute
  switch (order) {
  case 0:
    hipLaunchKernelGGL((pgm::Fn<double, 0>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 1:
    hipLaunchKernelGGL((pgm::Fn<double, 1>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 2:
    hipLaunchKernelGGL((pgm::Fn<double, 2>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 3:
    hipLaunchKernelGGL((pgm::Fn<double, 3>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 4:
    hipLaunchKernelGGL((pgm::Fn<double, 4>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 5:
    hipLaunchKernelGGL((pgm::Fn<double, 5>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 6:
    hipLaunchKernelGGL((pgm::Fn<double, 6>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 7:
    hipLaunchKernelGGL((pgm::Fn<double, 7>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 8:
    hipLaunchKernelGGL((pgm::Fn<double, 8>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 9:
    hipLaunchKernelGGL((pgm::Fn<double, 9>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 10:
    hipLaunchKernelGGL((pgm::Fn<double, 10>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 11:
    hipLaunchKernelGGL((pgm::Fn<double, 11>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 12:
    hipLaunchKernelGGL((pgm::Fn<double, 12>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 13:
    hipLaunchKernelGGL((pgm::Fn<double, 13>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 14:
    hipLaunchKernelGGL((pgm::Fn<double, 14>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 15:
    hipLaunchKernelGGL((pgm::Fn<double, 15>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 16:
    hipLaunchKernelGGL((pgm::Fn<double, 16>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 17:
    hipLaunchKernelGGL((pgm::Fn<double, 17>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 18:
    hipLaunchKernelGGL((pgm::Fn<double, 18>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 19:
    hipLaunchKernelGGL((pgm::Fn<double, 19>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 20:
    hipLaunchKernelGGL((pgm::Fn<double, 20>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 21:
    hipLaunchKernelGGL((pgm::Fn<double, 21>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 22:
    hipLaunchKernelGGL((pgm::Fn<double, 22>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 23:
    hipLaunchKernelGGL((pgm::Fn<double, 23>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 24:
    hipLaunchKernelGGL((pgm::Fn<double, 24>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 25:
    hipLaunchKernelGGL((pgm::Fn<double, 25>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 26:
    hipLaunchKernelGGL((pgm::Fn<double, 26>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 27:
    hipLaunchKernelGGL((pgm::Fn<double, 27>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  case 28:
    hipLaunchKernelGGL((pgm::Fn<double, 28>), blocks, threadsPerBlock, 0, 0,
                       npoints, xs_d, ys_d);
    break;
  default:
    std::abort();
  }
  HIP_CHECK(hipStreamSynchronize(0));

  hipEvent_t stop_d;
  HIP_CHECK(hipEventCreate(&stop_d));
  HIP_CHECK(hipEventRecord(stop_d, nullptr));

  HIP_CHECK(hipEventSynchronize(stop_d));

  // elapsed time on device in ms
  float elapsed_d = 0.0;
  HIP_CHECK(hipEventElapsedTime(&elapsed_d, start_d, stop_d));

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
