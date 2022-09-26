#include <stdio.h>
#include "main.h"


int main()
{
    float cm;
    float meter;
    float km;

    
    printf("Ingrese la distancia en centimetros: ");
    scanf("%f", &cm);

    meter = CMtoM(cm);
    km    = CMtoKM(cm);

    printf("Distancia en Metros = %f m \n", meter);
    printf("Distancia en Kilometros = %f km\n", km);

    return 0;
}
