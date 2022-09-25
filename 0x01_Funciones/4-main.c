#include "main.h"
#include <stdio.h>

int a;
int b;

int main(void)
{
    printf("Ingrese los numeros a multiplicar:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int resultado = (mul( a, b));

    printf("Su resultado es de:\n%d\n", resultado);
    return 0;


}
