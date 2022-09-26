#include <stdio.h>
#include "main.h"

int main()
{
    float radius, diameter, circumference, area;
    
    
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radius);

    
    diameter = diameterC(radius);
    circumference = circumferenceC(radius);
    area = areaC(radius);

    printf("Diametro del circulo = %.2f unidades \n", diameter);
    printf("Circunferencia del circulo = %.2f unidades \n", circumference);
    printf("Area del circulo = %.2f unidades al cuadrado \n", area);

    return 0;
}
