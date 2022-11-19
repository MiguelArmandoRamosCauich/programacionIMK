#include <stdio.h>

int main()
{
    int element;
    int valor;
    printf("Inserte el tamaño del arreglo:\n");
    scanf("%d",&element);
    int numeros[element];

    for(int i = 0; i<element; i++)
    {
        printf("Inserte el valor del indice número %d\n",i);
        scanf("%d",&valor);
        numeros[i]=valor;
    }
    printf("Los valores negativos del arreglo son: ");
    
    for(int i = 0; i<element; i++)
    {
        if(numeros[i]<0){
        printf(" %d,",numeros[i]);
        }
    }
    printf("\n");




    return 0;
}
