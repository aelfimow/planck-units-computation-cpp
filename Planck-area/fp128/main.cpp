#include <cstdlib>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <quadmath.h>

#include "fp128.h"
#include "Constants.h"

int main(int, char *[])
{
    fp128 const h_reduced = Reduced_Planck_constant();

    fp128 const G = Gravitational_constant();

    fp128 const c = Speed_of_light();

    fp128 const lp2 = (h_reduced * G) / powq(c, 3.0Q);

    std::vector<char> buffer(256U);

    ::quadmath_snprintf(buffer.data(), buffer.size(), "%.36Qe", lp2);

    std::string const lp_str(buffer.data());

    std::cout << "Planck area (fp128): " << lp_str << std::endl;

    return EXIT_SUCCESS;
}
