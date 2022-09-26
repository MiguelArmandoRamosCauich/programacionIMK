#include <stdio.h>
#include "main.h"



int main(void)
{
    int seleccion;
    

    printf("Seleccione lo que quiera hacer:\n");
    printf("Sumar: 1\nRestar: 2\nMultiplicar: 3\nDividir: 4\nModulo: 5\n");
    scanf("%d", &seleccion);
    if(seleccion == 1)
    {
        int a;
        int b;
        printf("Ingrese los numeros a sumar:\n");
        scanf("%d",&a);
        scanf("%d",&b);
        int resultado = (add( a, b));

        printf("Su resultado es de:\n%d\n", resultado);
        return 0;
    }
      else
     {
        if(seleccion == 2)
         {
            int a;
            int b;
            printf("Ingrese los numeros a restar:\n");
            scanf("%d",&a);
            scanf("%d",&b);
            int resultado = (resta( a, b));

            printf("Su resultado es de:\n%d\n", resultado);
            return 0;
         }
         else
         {
            if(seleccion == 3)
             {
                int a;
                int b;
                printf("Ingrese los numeros a multiplicar:\n");
                scanf("%d",&a);
                scanf("%d",&b);
                int resultado = (mul( a, b));

                printf("Su resultado es de:\n%d\n", resultado);
                return 0;
             }
             else
             {
                if(seleccion == 4)
                 {
                    float a;
                    float b;
                    printf("Ingrese los numeros a dividir:\n");
                    scanf("%f",&a);
                    scanf("%f",&b);
                    float resultado = (div( a, b));

                    printf("Su resultado es de:\n%f\n", resultado);
                    return 0;
                 }
                 else
                 {
                    if(seleccion == 5)
                     {
                        float a;
                        float b;
                        printf("Ingrese los numeros a sacar modulo:\n");
                        scanf("%f",&a);
                        scanf("%f",&b);
                        float resultado = (mod( a, b));

                        printf("Su resultado es de:\n%f\n", resultado);
                        return 0;
                      }
                      else
                      {
                        printf("Numero no valido\n");
                        return 0;
                      }
                 }
             }
         }
     }
    
}
