#include "fp80.h"
#include "Constants.h"

#include <numbers>

fp80 Reduced_Planck_constant()
{
    fp80 const h = 6.62607015E-34L;
    fp80 const h_reduced = h / (2.0L * std::numbers::pi_v<fp80>);

    return h_reduced;
}
