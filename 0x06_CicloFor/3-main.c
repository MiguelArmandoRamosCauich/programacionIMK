#include <stdio.h>
#include "main.h"

int main(void)
{ 
    
    printf("Alfabeto: ");
    
    for( char i= 'a';i<='z';i++)
    {
        printf("%c, ",i);
    }
    printf(" \n");
    return (0);
}

