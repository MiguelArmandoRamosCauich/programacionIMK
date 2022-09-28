#include <stdio.h>
#include <math.h>
#include "main.h"

int main()
{
    int volumen;
    float areaf;
    float arean;
    float costo;
    float costoant;
    float ahorro;
    float radio;
    float ancho;
    float pi = 3.1416;
    float masa;
    

    int opcion;

    printf("Elija el tipo de producto: \n");
    printf("1 - Aceite \n");
    printf("2 - Alcohol \n");
    printf("3 - Gasolina \n");
    printf("4 - Acetona \n");
    scanf("%d",&opcion);

    printf("\nIngrese el Volumen a envasar: \n");
    scanf("%d",&volumen);
     

    radio = cbrt((2 * volumen)/(4 * pi));
    
    ancho = (volumen/(pi * pow(radio, 2)));
    arean = area(radio, ancho);
    costo = ((arean * 2.45) / 1000);


    if(volumen == 500)
    {
        costoant = 1.006;
    }
    else if(volumen == 1000)
    {
        costoant = 1.6816;
    }
    else if(volumen == 1500)
    {
        costoant = 1.9610;
    }
    else if(volumen == 3000)
    {
        costoant = 3.1038;
    }
    else
    {
         costoant = 3.2038;
    }
    ahorro = (costoant - costo);
    
    if(opcion == 1)
    {
        masa = (.9 * volumen);

    }
    else if(opcion == 2)
    {
        masa = (.8 * volumen);
    }
    else if(opcion == 3)
    {
        masa = (.68 * volumen);
    }
    else if(opcion == 4)
    {
        masa = (.79 * volumen);
    }

    printf("Radio de la tapa: %f cm\n",radio);
    printf("Area total de la lata: %f cm2\n", arean);
    printf("Costo de fabricacion: $ %f\n", costo);
    printf("Costo anterior para la lata: $ %f\n", costoant);
    printf("Ahorro: %f\n", ahorro);
    printf("%d ml en gramos = %f gramos\n", volumen, masa);

    return 0;



}
