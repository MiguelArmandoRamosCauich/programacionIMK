#include <stdio.h>
#include "main.h"

int main(void)
{ 
    int numero = 0;
    int acumulado = 0;

    printf("Ingrese el limite superior: \n");
    scanf("%d", &numero);
    printf("Suma de los numeros naturales entre el 1 y el %d: ", numero);
    
    for( int i=1;i<=numero;i++)
    {
        acumulado = acumulado + i;
    }
    printf("%d \n", acumulado);
    return (0);
}


