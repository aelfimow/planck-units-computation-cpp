#include <cstdlib>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <quadmath.h>

using fp128 = __float128;
static_assert(sizeof(fp128) == 16U);

int main(int, char *[])
{
    fp128 const c = 299792458.0Q;

    fp128 const eps0 = 8.8541878128E-12Q;

    fp128 const Zp = 1.0Q / (4.0Q * M_PIq * eps0 * c);

    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", Zp);

    std::string const Up_str(buffer.data());

    std::cout << "Planck impedance (fp128): " << Up_str << std::endl;

    return EXIT_SUCCESS;
}
