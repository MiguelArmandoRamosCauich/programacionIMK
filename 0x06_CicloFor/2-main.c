#include <stdio.h>
#include "main.h"

int main(void)
{ 
    int numero = 0;

    printf("Ingrese N:\n");
    scanf("%d", &numero);
    printf("Numeros naturales del %d al 1 en reversa: ", numero);
    
    for( int i=numero;i>=1;i--)
    {
        printf("%d, ",i);
    }
    printf(" \n");
    return (0);
}

