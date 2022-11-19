#include <stdio.h>

int main()
{
    int element;
    int valor;
    int indice=0;
    int ag=0;
   int s;
  
    
    printf("Inserte el tamaño del arreglo:\n");
    scanf("%d",&element);
    int numeros[element+1];
   
    
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
    
    printf("Inserte el numero del indice en el cual desee agregar un valor:\n");
    scanf("%d",&indice);
    printf("Ingrese el valor que desee agragar:\n");
    scanf("%d",&ag);

    for(int i=element-1;i>=indice;i--)
    {
        
        numeros[i+1]= numeros[i];
    }
    numeros[indice]=ag;
    printf("los nuevos valores de los indices del arreglo son: ");
    for(int i = 0; i<element+1; i++)
    {
      printf("%d, ", numeros[i]);
    }
    printf("\n");
    
    
}
    

   