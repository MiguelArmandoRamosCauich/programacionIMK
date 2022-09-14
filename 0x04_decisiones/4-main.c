#include <stdio.h>

int main()
{
    int num;

    printf("Escriba un numero\n");
    scanf("%d",&num);

    if (num%5 == 0)
    {
        printf("El numero es divisevle entre 5\n");
    }
    else
    {
        printf("El numero no es divisible entre 5\n");
    }
    if (num%11 == 0)
    {
        printf("El numero es divisevle entre 11\n");
    }
    else
    {
        printf("El numero no es divisible entre 11\n");
    }
    return 0;
}
