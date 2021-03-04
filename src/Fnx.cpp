#include "Fnx.hpp"

#include <iostream>
#include <vector>

#include "utils.hpp"

#include "F_00.hpp"
//#include "F_01.hpp"

template <>
std::vector<double>
boys_function(int32_t order, const std::vector<double>& x)
{
    switch (order)
    {
        case 0:
            return detail::Fn<0>(x);
        // case 1:
        //    return detail::Fn<1>(x);
        default:
            std::abort();
    }
}
