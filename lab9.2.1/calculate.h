#pragma once
#include "math_macros.h"

double calculate_w(double x, double y, double z) {
    double w;
    if (z > 0 && z < 5) {
        w = MIN(SQUARE(x) + y + z, x * y * z);
    }
    else if (z <= 0 || z >= 5) {
        w = MAX(SQUARE(x) + SQUARE(y + z), x * y);
    }
    return w;
}

