#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

int main(int, char *[])
{
    fp32 const h = 6.62607015E-34f;
    fp32 const h_reduced = h / (2.0f * std::numbers::pi_v<fp32>);

    fp32 const G = 6.67430E-11f;

    fp32 const c = 299792458.0f;

    fp32 const lp3 = powf(sqrtf((h_reduced * G) / powf(c, 3.0f)), 3.0f);

    std::cout << std::setprecision(10) << "Planck volume (fp32): " << lp3 << std::endl;

    return EXIT_SUCCESS;
}
