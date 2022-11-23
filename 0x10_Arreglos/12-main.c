#include <stdio.h>

int main()
{
    int numeros[3][3];
   

    
    for(int j=0;j<3;j++)
    {
    for(int i=0;i<3;i++)
    {
        printf("Ingrese un numero\n");
        scanf("%d",&numeros[i][j]);
    
    }
    }
    for(int j=0;j<3;j++)
    {
    for(int i=0;i<3;i++)
    {
        printf("%d ",numeros[i][j]);
    }
    printf("\n");
    }
    
}