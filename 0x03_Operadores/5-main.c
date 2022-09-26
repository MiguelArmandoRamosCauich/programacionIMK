#include <stdio.h>
#include <math.h> 

int main()
{
    double base; 
    double expo; 
    double power;

    
    printf("Ingresa la base: ");
    scanf("%lf", &base);
    printf("Ingresa el exponente: ");
    scanf("%lf", &expo);

    
    power = pow(base, expo);

    printf("%.2lf ^ %.2lf = %.2lf\n", base, expo, power);

    return 0;
}
