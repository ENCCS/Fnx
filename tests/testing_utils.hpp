#pragma once

#include <cstdint>
#include <vector>

namespace detail {
inline std::vector<double> generate_arguments(size_t nargs, double base,
                                              double increment,
                                              size_t start = 1) {
  auto args = std::vector<double>(15, base);

  std::generate(std::next(args.begin(), start), args.end(),
                [&base, increment]() { return base += increment; });

  return args;
}
} // namespace detail

inline std::vector<double> small_args() {
  return detail::generate_arguments(15, 0.0, 0.59);
}

inline std::vector<double> medium_args() {
  return detail::generate_arguments(15, 9.2, 0.2);
}

inline std::vector<double> large_args() {
  return detail::generate_arguments(15, 5.27, 7.0, 0);
}

inline std::vector<double> ref00_small() {
  return {1.000000000000000e+00, 8.337643826556670e-01, 7.142807113640670e-01,
          6.262241865622670e-01, 5.596855024991541e-01, 5.081688518561950e-01,
          4.673527088040290e-01, 4.343163954040780e-01, 4.070529803295650e-01,
          3.841594831321780e-01, 3.646377456929750e-01, 3.477649743144210e-01,
          3.330085519272120e-01, 3.199692619171010e-01, 3.083429405237970e-01};
}

inline std::vector<double> ref00_medium() {
  return {2.921751330979280e-01, 2.890511551509060e-01, 2.860251433313420e-01,
          2.830921042884270e-01, 2.802473905066430e-01, 2.774866706120870e-01,
          2.748059026617780e-01, 2.722013100791120e-01, 2.696693599402060e-01,
          2.672067433518620e-01, 2.648103576932870e-01, 2.624772905209140e-01,
          2.602048049594860e-01, 2.579903264232660e-01, 2.558314305293830e-01};
}

inline std::vector<double> ref00_large() {
  return {2.530010614452080e-01, 2.018850143830020e-01, 1.729079270949040e-01,
          1.536450383766990e-01, 1.396542400511970e-01, 1.288997691402010e-01,
          1.202998345068450e-01, 1.132194394910130e-01, 1.072580727778950e-01,
          1.021489678366730e-01, 9.770666548820869e-02, 9.379769655720870e-02,
          9.032322896254140e-02, 8.720830633426380e-02, 8.439490980885930e-02};
}

inline std::vector<double> ref01_small() {
  return {3.333333333333330e-01, 2.368110999331860e-01, 1.724584630351420e-01,
          1.287828242194510e-01, 9.857315239467210e-02, 7.725917727250210e-02,
          6.191234205110620e-02, 5.063359764909080e-02, 4.217561459545820e-02,
          3.570786783564010e-02, 3.066934753171250e-02, 2.667537945349410e-02,
          2.345810584596280e-02, 2.082807327857870e-02, 1.864916958429630e-02};
}

inline std::vector<double> ref01_medium() {
  return {1.587359204870060e-02, 1.537066122794410e-02, 1.489361534348180e-02,
          1.444064554535690e-02, 1.401009952884400e-02, 1.360046570065700e-02,
          1.321035914321010e-02, 1.283850915421610e-02, 1.248374816837010e-02,
          1.214500189323060e-02, 1.182128051326880e-02, 1.151167083491540e-02,
          1.121532926171330e-02, 1.093147550276910e-02, 1.065938692987630e-02};
}

inline std::vector<double> ref01_large() {
  return {1.030955057373630e-02, 5.238324081627980e-03, 3.290976914560420e-03,
          2.309062794960850e-03, 1.733973678311360e-03, 1.363441602921520e-03,
          1.108345628402840e-03, 9.239386281296980e-04, 7.855432311256420e-04,
          6.785503376954490e-04, 5.938170991139460e-04, 5.253595640036330e-04,
          4.691141007714830e-04, 4.222344646764010e-04, 3.826739358341310e-04};
}

template <int32_t max_order>
inline std::vector<double> extract(int32_t order,
                                   const std::vector<double> &results) {
  auto sz = static_cast<int32_t>(results.size() / (max_order + 1));
  auto retval = std::vector<double>(sz, 0.0);

  auto n = -1; // in C++14 I could do n = -1 in the capture list...
  std::generate(retval.begin(), retval.end(), [n, &results, order]() mutable {
    n++;
    return results[order + n * (max_order + 1)];
  });

  return retval;
}
