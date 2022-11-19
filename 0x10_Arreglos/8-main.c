#include <stdio.h>

int main()
{
    int element;
    int valor;
    int acumulado = 0;
    int negativo=0;
   
  
    
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
        if(numeros[i]<0)
        {
            negativo++;
        }
    }
    printf("La cantidad de numeros negativos es de: %d\n",negativo);
  
    
}
    
