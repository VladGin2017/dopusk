#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include "function.h"


float D(float a, float b, float c)
{
	return (b * b) - (4 * a * c);
}

float X(float d, float a, float b, int num)
{
  return (-b + (num * sqrtf(d))) / (2 * a);
}
float XX(float c, float b)
{
  return (-c/b);
}
float XX2(float a, float c)
{
  return (-c/a)
}
