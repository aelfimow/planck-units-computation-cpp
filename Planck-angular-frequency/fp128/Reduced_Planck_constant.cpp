#include "fp128.h"
#include "Constants.h"

#include <quadmath.h>

fp128 Reduced_Planck_constant()
{
    fp128 const h = 6.62607015E-34Q;
    fp128 const h_reduced = h / (2.0Q * M_PIq);

    return h_reduced;
}
