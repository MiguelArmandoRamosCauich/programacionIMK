#include "main.h"
#include <stdio.h>

float a;
float b;

int main(void)
{
    printf("Ingrese dos numeros:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    float resultado = (mod( a, b));

    printf("El modulo es:\n%f\n", resultado);
    return 0;


}
