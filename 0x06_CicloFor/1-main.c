#include <stdio.h>
#include "main.h"

int main(void)
{ 
    int numero = 0;

    printf("Ingrese el limite superior:\n");
    scanf("%d", &numero);
    printf("Numeros naturales del 1 al %d: ", numero);
    
    for( int i=1;i<=numero;i++)
    {
        printf("%d, ",i);
    }
    printf(" \n");
    return (0);
}

