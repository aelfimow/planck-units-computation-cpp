#include "fp64.h"
#include "Constants.h"

#include <numbers>

fp64 Reduced_Planck_constant()
{
    fp64 const h = 6.62607015E-34;
    fp64 const h_reduced = h / (2.0 * std::numbers::pi_v<fp64>);

    return h_reduced;
}
