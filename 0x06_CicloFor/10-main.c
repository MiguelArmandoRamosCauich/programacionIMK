#include <stdio.h>
#include "main.h"

int main(void)
{
    int numero;
    int p;
    printf("Ingrese un numero\n");
    scanf("%d",&numero);
    primos(numero);
    return(0);
}
