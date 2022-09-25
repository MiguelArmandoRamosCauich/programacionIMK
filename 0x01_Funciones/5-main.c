#include "main.h"
#include <stdio.h>

float a;
float b;

int main(void)
{
    printf("Ingrese los numeros a dividir:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    float resultado = (div( a, b));

    printf("Su resultado es de:\n%f\n", resultado);
    return 0;


}
