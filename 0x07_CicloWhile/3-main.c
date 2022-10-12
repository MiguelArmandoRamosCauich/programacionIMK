#include <stdio.h>

int main()
{
    float n=0;
    int contador=0;

    printf("Ingrese un numero:\n");
    scanf("%f",&n);
    while(n>=1)
    {
        n = n/10;
        contador++;
    }
    printf("El numero tiene %d digitos\n",contador);
    return (0);
}
