#include <stdio.h>

int main()
{
    int element;
    int valor;
    int acumulado = 0;
  
    int max=1;
    int max2=0;
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
    
    for(int i = 0; i<element; i++)
    {
        
        if(numeros[i]>max){
            max = numeros[i];
        }
        
    }
    for(int i = 0; i<element; i++)
    {
        if(numeros[i]>max2 && numeros[i]!=max)
        {
            max2=numeros[i];
        }
    }
    printf("El segundo mayor es de: %d\n",max2);
  
    
    }
    

   

