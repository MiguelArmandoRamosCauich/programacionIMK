#include <stdio.h>

int main()
{
    int numeros[3][3];
    int numeros2[3][3];
    
   

    
    for(int j=0;j<3;j++)
    {
    for(int i=0;i<3;i++)
    {
        printf("Ingrese un numero para la primera matriz\n");
        scanf("%d",&numeros[i][j]);
    
    }
    }
    

    for(int j=0;j<3;j++)
    {
    for(int i=0;i<3;i++)
    {
        numeros2[j][i]=(numeros[i][j]);
    
    }
    }


    for(int j=0;j<3;j++)
    {
    for(int i=0;i<3;i++)
    {
        printf("%d ",numeros2[i][j]);
    }
    printf("\n");
    }
    
}