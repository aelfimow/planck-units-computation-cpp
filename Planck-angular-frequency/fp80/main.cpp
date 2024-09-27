#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>

#include "fp80.h"
#include "Constants.h"

int main(int, char *[])
{
    fp80 const h_reduced = Reduced_Planck_constant();

    fp80 const G = Gravitational_constant();

    fp80 const c = Speed_of_light();

    fp80 const omega = sqrtl(powl(c, 5.0L) / (h_reduced * G));

    std::cout << std::setprecision(10) << "Planck angular frequency (fp80): " << omega << std::endl;

    return EXIT_SUCCESS;
}
