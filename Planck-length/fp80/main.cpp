#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp80 = long double;
static_assert(sizeof(fp80) >= 10U);

int main(int, char *[])
{
    fp80 const pi = 3.1415926535897932384626433832795L;
    fp80 const h = 6.62607015E-34L;
    fp80 const h_reduced = h / (2.0L * pi);

    fp80 const G = 6.67430E-11L;

    fp80 const c = 299792458.0L;

    fp80 const lp = sqrtl((h_reduced * G) / pow(c, 3.0L));

    std::cout << std::setprecision(10) << "Planck length (fp80): " << lp << std::endl;

    return EXIT_SUCCESS;
}
