#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

int main(int, char *[])
{
    fp64 const G = 6.67430E-11;

    fp64 const c = 299792458.0;

    fp64 const Pp = pow(c, 5.0) / G;

    std::cout << std::setprecision(10) << "Planck power (fp64): " << Pp << std::endl;

    return EXIT_SUCCESS;
}
