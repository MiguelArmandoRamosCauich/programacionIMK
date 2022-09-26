#include <stdio.h>
#include "main.h"

int main()
{
    float c1;
    float c2; 
    float c3;
    float c4;
    float c5;
    float ctotal;
    float cpro;
    float cpor;

    printf("Ingrese sus caluficaciones:\n");
    scanf("%f%f%f%f%f", &c1, &c2, &c3, &c4, &c5);

    
    
    ctotal = (c1 + c2 + c3 + c4 + c5);
    cpro = (ctotal / 5);
    cpor = (ctotal / 500) * 100;

    printf("Calificacion total = %.2f\n", ctotal);
    printf("Calificacion promedio = %.2f\n", cpro);
    printf("Porcentaje = %.2f\n", cpor);
    return 0;
    
    

}
