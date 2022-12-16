#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

int main(int, char *[])
{
    fp64 const pi = 3.1415926535897932384626433832795;
    fp64 const h = 6.62607015E-34;
    fp64 const h_reduced = h / (2.0 * pi);

    fp64 const G = 6.67430E-11;

    fp64 const c = 299792458.0;

    fp64 const mp = sqrt((h_reduced * c) / G);

    std::cout << std::setprecision(10) << "Planck mass (fp64): " << mp << std::endl;

    return EXIT_SUCCESS;
}
