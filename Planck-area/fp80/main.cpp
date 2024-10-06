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

    fp80 const lp2 = (h_reduced * G) / powl(c, 3.0L);

    std::cout << std::setprecision(10) << "Planck area (fp80): " << lp2 << std::endl;

    return EXIT_SUCCESS;
}
