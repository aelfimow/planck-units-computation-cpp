#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

int main(int, char *[])
{
    fp32 const c = 299792458.0f;

    fp32 const eps0 = 8.8541878128E-12f;

    fp32 const Zp = 1.0f / (4.0f * std::numbers::pi_v<fp32> * eps0 * c);

    std::cout << std::setprecision(10) << "Planck impedance (fp32): " << Zp << std::endl;

    return EXIT_SUCCESS;
}
