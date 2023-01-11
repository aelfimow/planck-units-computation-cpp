#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

int main(int, char *[])
{
    fp32 const pi = 3.1415926535897932384626433832795f;
    fp32 const h = 6.62607015E-34f;
    fp32 const h_reduced = h / (2.0f * pi);

    fp32 const G = 6.67430E-11f;

    fp32 const c = 299792458.0f;

    fp32 const lp2 = (h_reduced * G) / powf(c, 3.0f);

    std::cout << std::setprecision(10) << "Planck area (fp32): " << lp2 << std::endl;

    return EXIT_SUCCESS;
}