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

    fp128 const eps0 = 8.8541878128E-12f;

    fp128 const G = 6.67430E-11Q;

    fp128 const Up = sqrtq(powq(c, 4.0Q) / (4.0Q * pi * eps0 * G));

    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", Up);

    std::string const Up_str(buffer.data());

    std::cout << "Planck voltage (fp128): " << Up_str << std::endl;

    return EXIT_SUCCESS;
}
