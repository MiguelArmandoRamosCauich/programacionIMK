#include <stdio.h>

int main()
{
    int element;
    int valor;
    int indice=0;
    

  
    
    printf("Inserte el tamaño del arreglo:\n");
    scanf("%d",&element);
    int numeros[element];
   
    
    for(int i = 0; i<element; i++)
    {
      numeros[i]=i+1;
    }
    printf("los valores de los indices del arreglo son: ");
    for(int i = 0; i<element; i++)
    {
      printf("%d, ", numeros[i]);
    }
    printf("\n");
    
    printf("Inserte el numero del indice en el cual desee borrar un valor:\n");
    scanf("%d",&indice);
    

    for(int i=indice;i<element-1;i++)
    {
        
        numeros[i]= numeros[i+1];
    }
    
    printf("los nuevos valores de los indices del arreglo son: ");
    for(int i = 0; i<element-1; i++)
    {
      printf("%d, ", numeros[i]);
    }
    printf("\n");
    
    
}
    