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
    fp128 const G = 6.67430E-11Q;

    fp128 const c = 299792458.0Q;

    fp128 const Pp = powq(c, 5.0Q) / G;

    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", Pp);

    std::string const lp_str(buffer.data());

    std::cout << "Planck power (fp128): " << lp_str << std::endl;

    return EXIT_SUCCESS;
}
