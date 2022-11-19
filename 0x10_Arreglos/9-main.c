#include <stdio.h>

int main()
{
    int element;
    int valor;
    int acumulado = 0;
  
    
    printf("Inserte el tamaño del arreglo:\n");
    scanf("%d",&element);
    int numeros[element];
    int numeros2[element];

    for(int i = 0; i<element; i++)
    {
        printf("Inserte el valor del indice número %d\n",i);
        scanf("%d",&valor);
        numeros[i]=valor;
    }

    for(int i = 0; i<element; i++)
    {
      
      printf("el valor del indice %d del primer arreglo es: %d\n", i, numeros[i]);
    }
    
    for(int i = 0; i<element; i++)
    {
      numeros2[i]=numeros[i];
      printf("el valor del indice %d del segundo arreglo es: %d\n", i, numeros2[i]);
    }
}
    

   

