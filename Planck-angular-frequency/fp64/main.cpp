#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>

using fp64 = double;
static_assert(sizeof(fp64) == 8U);

int main(int, char *[])
{
    fp64 const h = 6.62607015E-34;
    fp64 const h_reduced = h / (2.0 * std::numbers::pi_v<fp64>);

    fp64 const G = 6.67430E-11;

    fp64 const c = 299792458.0;

    fp64 const omega = sqrt(pow(c, 5.0) / (h_reduced * G));

    std::cout << std::setprecision(10) << "Planck angular frequency (fp64): " << omega << std::endl;

    return EXIT_SUCCESS;
}
