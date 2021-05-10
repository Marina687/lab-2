#include "stdio.h"
#define _USE_MATH_DEFINES
#include "stdbool.h"

double f(double x)
{ 
   return (x <= 3 ? x * x + 3.0 * x + 9.0 : 1.0 / (x * x * x + 6));
}
