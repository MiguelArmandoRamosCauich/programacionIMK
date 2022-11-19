#include <stdio.h>

int main()
{
    int element;
    int valor;
    int acumulado = 0;
    int par=0;
    int impar=0;
  
    
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
        if(numeros[i]%2==0)
        {
            par++;
        }else{
            impar++;
        }
    }
    printf("La cantidad de numeros pares es de: %d\nLa cantidad de numeros impares es de: %d\n",par,impar);
  
    
}
    
