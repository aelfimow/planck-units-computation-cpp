#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

int main(int, char *[])
{
    fp80 const pi = 3.1415926535897932384626433832795L;

    fp80 const c = 299792458.0L;

    fp80 const eps0 = 8.8541878128E-12L;

    fp80 const G = 6.67430E-11L;

    fp80 const Ip = sqrtl((4.0L * pi * eps0 * powl(c, 6.0)) / G);

    std::cout << std::setprecision(10) << "Planck electric current (fp80): " << Ip << std::endl;

    return EXIT_SUCCESS;
}
