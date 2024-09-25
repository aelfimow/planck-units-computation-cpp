#include "fp32.h"

fp32 Reduced_Planck_constant()
{
    fp32 const h = 6.62607015E-34f;
    fp32 const h_reduced = h / (2.0f * std::numbers::pi_v<fp32>);

    return h_reduced;
}
