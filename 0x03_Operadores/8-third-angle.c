#include <stdio.h>
#include "main.h"

int main()
{
    int angulo1;
    int angulo2; 
    int angulo3;

    printf("Ingrese el primer angulo:");
    scanf("%d", &angulo1);

    printf("Ingrese el segundo angulo:");
    scanf("%d", &angulo2);
    
    angulo3 = 180 - (angulo1 + angulo2);
    printf("El tercer angulo es = %d\n", angulo3);
    return 0;
    
    

}
