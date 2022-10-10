#include <stdio.h>
#include "main.h"

int main(void)
{ 
    int numero = 0;

    printf("Ingrese el rango superior: \n");
    scanf("%d", &numero);
    printf("Numeros pares entre el 1 y el %d: ", numero);
    
    for( int i=2;i<=numero;i+=2)
    {
        printf("%d, ",i);
    }
    printf(" \n");
    return (0);
}

