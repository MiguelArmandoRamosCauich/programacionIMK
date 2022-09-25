#include "main.h"
#include <stdio.h>


int main(void)
{
    float resultado = 0;
    float n1 = 0;
    float n2 = 0;

    printf("ingrese el primer numero:\n");
    scanf("%f",&n1);

    printf("ingrese el segundo numero:\n");
    scanf("%f",&n2);

    resultado = div(n1,n2);
    printf("El resultado de la division es:\n%f\n",resultado);
    return 0;
}
