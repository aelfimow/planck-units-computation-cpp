#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <numbers>
#include "fp32.h"


extern fp32 Reduced_Planck_constant();
extern fp32 Gravitational_constant();

int main(int, char *[])
{
    fp32 const h_reduced = Reduced_Planck_constant();

    fp32 const G = Gravitational_constant();

    fp32 const c = 299792458.0f;

    fp32 const omega = sqrtf(powf(c, 5.0f) / (h_reduced * G));

    std::cout << std::setprecision(10) << "Planck angular frequency (fp32): " << omega << std::endl;

    return EXIT_SUCCESS;
}
