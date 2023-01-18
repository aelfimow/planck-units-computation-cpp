#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

int main(int, char *[])
{
    fp32 const pi = 3.1415926535897932384626433832795f;

    fp32 const c = 299792458.0f;

    fp32 const eps0 = 8.8541878128E-12f;

    fp32 const G = 6.67430E-11f;

    fp32 const Ip = sqrtf((4.0f * pi * eps0 * powf(c, 6.0f)) / G);

    std::cout << std::setprecision(10) << "Planck electric current (fp32): " << Ip << std::endl;

    return EXIT_SUCCESS;
}
