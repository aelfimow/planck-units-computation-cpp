#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>

using fp32 = float;
static_assert(sizeof(fp32) == 4U);

extern fp32 Reduced_Planck_constant();

int main(int, char *[])
{
    fp32 const h_reduced = Reduced_Planck_constant();

    fp32 const G = 6.67430E-11f;

    fp32 const c = 299792458.0f;

    fp32 const omega = sqrtf(powf(c, 5.0f) / (h_reduced * G));

    std::cout << std::setprecision(10) << "Planck angular frequency (fp32): " << omega << std::endl;

    return EXIT_SUCCESS;
}
