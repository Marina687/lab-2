#include "stdio.h"
#define _USE_MATH_DEFINES
#include "stdbool.h"

_Bool isInArea(double x, double y)
{
    return (x <= 1) && (x >= -1) && (y <= 1) && (y >= -1) && !(x <= 0 && y > 0);
}

