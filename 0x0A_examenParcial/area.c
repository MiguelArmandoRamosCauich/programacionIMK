#include <math.h>
#include "main.h"

float area(float radio, float ancho)
{
    float pi;

    pi = 3.1426;
    return (((2 * pi) * (radio * radio))  + ((2 * pi) * (radio * ancho)));
}
