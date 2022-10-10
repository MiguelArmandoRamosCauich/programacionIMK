#include <stdio.h>
include "main.h"

int main(void)
{
    int cantidad = 0;
    int n1 = 0;
    int cubo = 0;
     

    printf("Ingrese un numero: \n");
    scanf("%d", &cantidad);

    for (int i = 1; i <= cantidad; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d", &n1);
        acumulado = n1 + acumulado;
        printf("El acumulado hasta ahora es: %0.2f \n", acumulado);
    }

    promedio = acumulado / cantidad;
    printf("El promedio es de:  %0.2f \n", promedio);
    return 0;
}
