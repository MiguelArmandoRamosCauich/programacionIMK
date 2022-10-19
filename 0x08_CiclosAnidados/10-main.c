#include <stdio.h>

int main()
{
    int i, j, N;

    
    printf("Ingrese el valor de n : ");
    scanf("%d", &N);

    
    for(i=1; i<N; i++)
    {
        
        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        
        for(j=i; j<=N; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    
    for(i=1; i<=N; i++)
    {
      
        for(j=1; j<=(2*N - 2*i); j++)
        {
            printf(" ");
        }

        
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
