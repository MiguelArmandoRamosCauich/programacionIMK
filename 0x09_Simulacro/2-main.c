#include <math.h>
#include <stdio.h>

int main(void)
{


    float a;
    float b;
    float c;
    float s;
    float area;
    float peri;
    float speri;
    printf("Ingrese la longitud de un lado del triangulo:\n");
    scanf("%f",&a);
    
    printf("Ingrese la longitud de otro lado del trangulo:\n");
    scanf("%f",&b);

    printf("Ingrese la longitud de otro lado del trangulo:\n");
    scanf("%f",&c);

    if(a+b>c && a+c>b && b+c>a){
        peri = (a+b+c);
        speri = (peri/2);
        printf("El perimetro del triangulo es: %f\n", peri);
        area = (sqrt(speri*(speri-a)*(speri-b)*(speri-c)));
        printf("El area del triangulo es: %f\n",area);
    }else{
        printf("Las longitudes no son validas\n");
    }
  

    
    
}