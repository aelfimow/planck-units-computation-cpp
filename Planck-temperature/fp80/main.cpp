#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

int main(int, char *[])
{
    fp80 const h = 6.62607015E-34L;
    fp80 const h_reduced = h / (2.0L * std::numbers::pi_v<fp80>);

    fp80 const G = 6.67430E-11L;

    fp80 const c = 299792458.0L;

    fp80 const kb = 1.380649E-23L;

    fp80 const Tp = (sqrtl((h_reduced * c) / G) * powl(c, 2.0)) / kb;

    std::cout << std::setprecision(10) << "Planck temperature (fp80): " << Tp << std::endl;

    return EXIT_SUCCESS;
}
