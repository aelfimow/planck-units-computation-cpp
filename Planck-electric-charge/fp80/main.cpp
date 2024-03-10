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

    fp80 const c = 299792458.0L;

    fp80 const eps0 = 8.8541878128E-12L;

    fp80 const qp = sqrtl(4.0L * std::numbers::pi_v<fp80> * eps0 * h_reduced * c);

    std::cout << std::setprecision(10) << "Planck electric charge (fp80): " << qp << std::endl;

    return EXIT_SUCCESS;
}
