#include <stdio.h> 
#include "main.h"

int main(void) 
{ 
  int numero;
  int numero2; 
  int suma;
  printf("Ingrese un numero: \n");
  scanf("%d", &numero);

  printf("Ingrese otro numero: \n");
  scanf("%d", &numero2);
  suma = add(numero,numero2);
  printf("Usted ha escrito el numero: %d\n", suma); 
  return 0; 
} 
