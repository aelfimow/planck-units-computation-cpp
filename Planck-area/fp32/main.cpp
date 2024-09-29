#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

#include "fp32.h"
#include "Constants.h"

int main(int, char *[])
{
    fp32 const h_reduced = Reduced_Planck_constant();

    fp32 const G = Gravitational_constant();

    fp32 const c = Speed_of_light();

    fp32 const lp2 = (h_reduced * G) / powf(c, 3.0f);

    std::cout << std::setprecision(10) << "Planck area (fp32): " << lp2 << std::endl;

    return EXIT_SUCCESS;
}
