#include <stdio.h>
#include "main.h"

int main()
{
    int base;
    int altura; 
    int area;

    printf("Ingrese la base del triangulo:");
    scanf("%d", &base);

    printf("Ingrese la altura del triangulo:");
    scanf("%d", &altura);
    
    area = (base * altura) / 2;
    printf("El area del triangulo es = %d unidades cuadradas\n", area);
    return 0;
    
    

}
