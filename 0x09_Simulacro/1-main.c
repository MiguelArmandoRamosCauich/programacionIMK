#include <stdio.h>

int main()
{
    int t=1;

    while(t=1){
    float N;
    float prc;
    printf("Ingrese el numero de litros consumidos:\n");
    scanf("%f",&N);
    float M;
    printf("Ingrese el numero de millas recorridas:\n");
    scanf("%f",&M);
    float galon;
    galon = (N * .264179);
    prc = M/galon;
    printf("El numero de millas por galon es de %f\n", prc);

    }

    
    return (0);
}
