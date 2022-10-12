#include <stdio.h>

int main()
{
    int N;
    printf("Ingrese el numero de filas:\n");
    scanf("%d",&N);
    

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if (i==1)
            {
                printf("*");
            }
            else if(i==N){
                printf("*");
            }
            else if (j==1)
            {
                printf("*");
            }
            else if(j==N){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    } 
   
    return (0);
}
