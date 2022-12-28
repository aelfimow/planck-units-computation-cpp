#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

int main(int, char *[])
{
    fp32 const G = 6.67430E-11f;

    fp32 const c = 299792458.0f;

    fp32 const Pp = powf(c, 5.0f) / G;

    std::cout << std::setprecision(10) << "Planck power (fp32): " << Pp << std::endl;

    return EXIT_SUCCESS;
}
