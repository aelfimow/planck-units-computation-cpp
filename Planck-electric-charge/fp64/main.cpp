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

    fp64 const c = 299792458.0;

    fp64 const eps0 = 8.8541878128E-12;

    fp64 const qp = sqrt(4.0 * std::numbers::pi_v<fp64> * eps0 * h_reduced * c);

    std::cout << std::setprecision(10) << "Planck electric charge (fp64): " << qp << std::endl;

    return EXIT_SUCCESS;
}
