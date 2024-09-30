#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

#include "fp64.h"
#include "Constants.h"

int main(int, char *[])
{
    fp64 const h_reduced = Reduced_Planck_constant();

    fp64 const G = Gravitational_constant();

    fp64 const c = Speed_of_light();

    fp64 const lp2 = (h_reduced * G) / pow(c, 3.0);

    std::cout << std::setprecision(10) << "Planck area (fp64): " << lp2 << std::endl;

    return EXIT_SUCCESS;
}
