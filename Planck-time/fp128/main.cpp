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
    fp128 const pi = 3.1415926535897932384626433832795Q;
    fp128 const h = 6.62607015E-34Q;
    fp128 const h_reduced = h / (2.0Q * pi);

    fp128 const G = 6.67430E-11Q;

    fp128 const c = 299792458.0Q;

    fp128 const T = sqrtq((h_reduced * G) / powq(c, 5.0Q));

    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", T);

    std::string const lp_str(buffer.data());

    std::cout << "Planck time (fp128): " << lp_str << std::endl;

    return EXIT_SUCCESS;
}
