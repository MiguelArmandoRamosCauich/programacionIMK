#include <stdio.h>

int main()
{
    int element;
    int valor;
    int acumulado = 0;
    printf("Inserte el tamaño del arreglo:\n");
    scanf("%d",&element);
    int numeros[element];

    for(int i = 0; i<element; i++)
    {
        printf("Inserte el valor del indice número %d\n",i);
        scanf("%d",&valor);
        numeros[i]=valor;
    }
    
    for(int i = 0; i<element; i++)
    {
        acumulado = numeros[i] + acumulado;
        
    }
    printf("la suma de los valores del arreglo es: %d\n", acumulado);





    return 0;
}
