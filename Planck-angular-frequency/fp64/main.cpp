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

    fp64 const omega = sqrt(pow(c, 5.0) / (h_reduced * G));

    std::cout << std::setprecision(10) << "Planck angular frequency (fp64): " << omega << std::endl;

    return EXIT_SUCCESS;
}
