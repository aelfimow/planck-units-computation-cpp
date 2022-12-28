#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

int main(int, char *[])
{
    fp80 const G = 6.67430E-11L;

    fp80 const c = 299792458.0L;

    fp80 const Fp = powl(c, 4.0L) / G;

    std::cout << std::setprecision(10) << "Planck force (fp80): " << Fp << std::endl;

    return EXIT_SUCCESS;
}
