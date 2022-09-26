#include <stdio.h>
#include "main.h"


int main()
{
    float length, width, result;
    
    printf("Ingrese la longitud del rectangulo:\n");
    scanf("%f", &length);
    printf("Ingrese el ancho del rectangulo:\n");
    scanf("%f", &width);

    
    result = area(length, width);

   
    printf("Area del rectangulo = %f unidades al cuadrado\n", result);

    return 0;
}
