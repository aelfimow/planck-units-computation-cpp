#include <cstdlib>
#include <cmath>
#include <iostream>

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

int main(int, char *[])
{
    fp32 const pi = 3.1415926535897932384626433832795f;
    fp32 const h = 6.62607015E-34;
    fp32 const h_reduced = h / (2.0 * pi);

    fp32 const G = 6.67430E-11;

    fp32 const c = 299792458.0f;

    fp32 const lp = sqrt((h_reduced * G) / pow(c, 3.0f));

    std::cout << "Planck length (fp32): " << lp << std::endl;

    return EXIT_SUCCESS;
}
