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
    fp128 const h = 6.62607015E-34Q;
    fp128 const h_reduced = h / (2.0Q * M_PIq);

    fp128 const c = 299792458.0Q;

    fp128 const eps0 = 8.8541878128E-12f;

    fp128 const qp = sqrtq(4.0Q * M_PIq * eps0 * h_reduced * c);

    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", qp);

    std::string const lp_str(buffer.data());

    std::cout << "Planck electric charge (fp128): " << lp_str << std::endl;

    return EXIT_SUCCESS;
}
