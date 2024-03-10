#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

int main(int, char *[])
{
    fp64 const c = 299792458.0;

    fp64 const eps0 = 8.8541878128E-12;

    fp64 const Zp = 1.0 / (4.0 * std::numbers::pi_v<fp64> * eps0 * c);

    std::cout << std::setprecision(10) << "Planck impedance (fp64): " << Zp << std::endl;

    return EXIT_SUCCESS;
}
