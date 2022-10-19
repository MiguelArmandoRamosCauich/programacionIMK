#include <stdio.h>

int main()
{
    int i;
    int j;
    int N;

    printf("Ingrese el valor de n : ");
    scanf("%d", &N);

    for(i=N/2; i<=N; i+=2)
    {
        for(j=1; j<N-i; j+=2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=N; i>=1; i--)
    {
        for(j=i; j<N; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}