#include <stdio.h>

int main()
{
    int numeros[2][2];
    int numeros2[2][2];
    int numeros3[2][2];
   

    
    for(int j=0;j<2;j++)
    {
    for(int i=0;i<2;i++)
    {
        printf("Ingrese un numero para la primera matriz\n");
        scanf("%d",&numeros[i][j]);
    
    }
    }
    for(int j=0;j<2;j++)
    {
    for(int i=0;i<2;i++)
    {
        printf("Ingrese un numero para la segunda matriz\n");
        scanf("%d",&numeros2[i][j]);
    
    }
    }

    for(int j=0;j<2;j++)
    {
    for(int i=0;i<2;i++)
    {
        numeros3[i][j]=(numeros[i][j]+numeros2[i][j]);
    
    }
    }


    for(int j=0;j<2;j++)
    {
    for(int i=0;i<2;i++)
    {
        printf("%d ",numeros3[i][j]);
    }
    printf("\n");
    }
    
}