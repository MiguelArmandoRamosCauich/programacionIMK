#include <stdio.h>

int main()
{
    int element;
    int valor;
    int acumulado = 0;
    int min=0;
    int max=1;
    printf("Inserte el tamaño del arreglo:\n");
    scanf("%d",&element);
    int numeros[element];

    for(int i = 0; i<element; i++)
    {
        printf("Inserte el valor del indice número %d\n",i);
        scanf("%d",&valor);
        numeros[i]=valor;
    }
    
    max=numeros[0];
    min=numeros[1];
    for(int i = 0; i<element; i++)
    {
        if(numeros[i]<min) {
            min = numeros[i];
        }
        if(numeros[i]>max){
            max = numeros[i];
        }
        
    }
    printf("El maximo es de: %d\n",max);
    printf("El minimo es de: %d\n",min);
    
    }
    

   

