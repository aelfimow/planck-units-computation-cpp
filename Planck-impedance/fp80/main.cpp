#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

int main(int, char *[])
{
    fp80 const c = 299792458.0L;

    fp80 const eps0 = 8.8541878128E-12L;

    fp80 const Zp = 1.0L / (4.0L * std::numbers::pi_v<fp80> * eps0 * c);

    std::cout << std::setprecision(10) << "Planck impedance (fp80): " << Zp << std::endl;

    return EXIT_SUCCESS;
}
