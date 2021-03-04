#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>

#include "Fnx.hpp"

int
main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cout << "usage:\n  " << argv[0] << " <order> <npoints>" << std::endl;
        std::cout << "<order> (integer) order of the Boys function" << std::endl;
        std::cout << "<npoints> (integer) number of points at which to evaluate the Boys function" << std::endl;
    }
    else
    {
        auto order   = std::stoi(argv[1]);
        auto npoints = std::stoi(argv[2]);

        auto lower = 0.0;
        auto upper = 125.0;

        std::cout << "Evaluating the Boys function of order " << order << " on " << npoints << " random points in [" << lower << ", " << upper << "]" << std::endl;

        std::random_device                     rd;
        std::mt19937                           mt(rd());
        std::uniform_real_distribution<double> dist(lower, upper);

        auto v = std::vector<double>(npoints, 0.0);
        std::generate(v.begin(), v.end(), [&dist, &mt]() { return dist(mt); });

        auto start = std::chrono::steady_clock::now();
        auto boys  = boys_function(order, v);
        auto end   = std::chrono::steady_clock::now();

        std::chrono::duration<double, std::milli> diff = end - start;
        std::cout << "Elapsed time = " << std::setw(9) << diff.count() << " ms\n";
    }

    return EXIT_SUCCESS;
}
