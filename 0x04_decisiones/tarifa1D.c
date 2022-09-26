#include <stdio.h>
#include "main.h"

int consumo;
float consumototal;
float consumototal1;
float consumototal2;
float consumototal3;
float consumototal4;
float consumototal5;
float consumototal6;

int main()

{
printf("Ingrese su consumo en Kwh:\n");
scanf("%d", &consumo);

if (consumo <= 175)
{
    
   
    consumototal= mul(.786, consumo);
    printf("Su costo de consumo básico es de:\n%f", consumototal);
    printf("\nSu total a pagar es de:\n%f\n", consumototal);
    
    return 0;
}
else 
{
    if(consumo >= 176, consumo <= 400)
    {
        consumototal1 = mul(.911, resta(consumo, 175));
        consumototal2 = add(consumototal1, 137.55);
        //maximo de consumo i. bajo es de 204.975//

        printf("Su costo de consumo básico es de:\n137.55");
        printf("\nSu costo de consumo I. bajo es de:\n%f", consumototal1);
        printf("\nSu total a pagar es de:\n%f\n", consumototal2);

        return 0;
    }
    else
    {
        if(consumo >= 401, consumo <= 600)
        {
            consumototal3 = mul(1.177, resta(consumo, 400));
            consumototal4 = add(consumototal3, 342.525);
            //maximo de consumo i. alto es de 235.4//

            printf("Su costo de consumo básico es de:\n137.55");
            printf("\nSu costo de consumo I. bajo es de:\n204.975");
            printf("\nSu costo de consumo I. alto es de:\n%f", consumototal3);
            printf("\nSu total a pagar es de:\n%f\n", consumototal4);
            
            return 0;

        }
        else
        {
            if(consumo >= 601)
            {
                consumototal5 = mul(3.134, resta(consumo, 600));
                consumototal6 = add(consumototal5, 577.925);

                printf("Su costo de consumo básico es de:\n137.55");
                printf("\nSu costo de consumo I. bajo es de:\n204.975");
                printf("\nSu costo de consumo I. alto es de:\n235.4");
                printf("\nSu costo de consumo Exedente es de:\n%f", consumototal5);
                printf("\nSu total a pagar es de:\n%f\n", consumototal6);

                return 0;
                


            }

        }

    }
}
}
