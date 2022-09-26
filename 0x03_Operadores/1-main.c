#include <stdio.h>
#include "main.h"

int main(void)
{
    float length = 0;
    float width = 0; 
    float result = 0;
    
    printf("Ingrese la longitud del rectangulo:\n");
    scanf("%f",&length);


    printf("Ingrese el ancho del rectangulo:\n");
    scanf("%f",&width);

    
    result = perimeter(length, width);

    
    printf("Perimetro del rectangulo = %f unidades \n", result);

    return 0;
}
