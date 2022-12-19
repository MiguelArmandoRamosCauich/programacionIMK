#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char numeros[12][12];

    for(int j=0;j<12;j++)
    {
    for(int i=0;i<12;i++)
    {
        numeros[i][j]=' ';
    }
    }

    for(int j=1;j<11;j++)
    {
    for(int i=1;i<11;i++)
    {
        int num = rand () % 11;
        if(num%2==0)
        {
            numeros[i][j]='*';
        }else{
            numeros[i][j]=' ';
        }
        printf(" %c ",numeros[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    int indefinido=1;
    char numeros2[12][12];
    
    //MARC//
    while(indefinido<20)
    {
        int vivo=0;
        int muerto=0;
        for(int j=1;j<11;j++)
        {
        for(int i=1;i<11;i++)
        {
        numeros2[i][j]=numeros[i][j];
        if(numeros[i][j]=='*')
        {
            if(numeros[i-1][j-1]=='*')
            {
                vivo++;
            }
            if(numeros[i][j-1]=='*')
            {
                vivo++;
            }
            if(numeros[i+1][j-1]=='*')
            {
                vivo++;
            }
            if(numeros[i-1][j]=='*')
            {
                vivo++;
            }
            if(numeros[i+1][j]=='*')
            {
                vivo++;
            }
            if(numeros[i-1][j+1]=='*')
            {
                vivo++;
            }
            if(numeros[i][j+1]=='*')
            {
                vivo++;
            }
            if(numeros[i+1][j+1]=='*')
            {
                vivo++;
            }
            if(vivo==2 || vivo==3)
            {
                numeros2[i][j]='*';
            }
            if(vivo<2 || vivo>3)
            {
                numeros2[i][j]=' ';
            }
            vivo=0;
            
        }else if(numeros[i][j]==' '){
            if(numeros[i-1][j-1]=='*')
            {
                vivo++;
            }
            if(numeros[i][j-1]=='*')
            {
                vivo++;
            }
            if(numeros[i+1][j-1]=='*')
            {
                vivo++;
            }
            if(numeros[i-1][j]=='*')
            {
                vivo++;
            }
            if(numeros[i+1][j]=='*')
            {
                vivo++;
            }
            if(numeros[i-1][j+1]=='*')
            {
                vivo++;
            }
            if(numeros[i][j+1]=='*')
            {
                vivo++;
            }
            if(numeros[i+1][j+1]=='*')
            {
                vivo++;
            }
            if(vivo==3)
            {
                numeros2[i][j]='*';
            }
            vivo=0;
        }
        
    }
    
    }
    printf("\n");
    printf("-----------------------------------\n\n\n");

    for(int j=1;j<11;j++)
    {
    for(int i=1;i<11;i++)
    {
        printf(" %c ",numeros2[i][j]);
    }
    printf("\n");
    }

    for(int j=1;j<11;j++)
    {
    for(int i=1;i<11;i++)
    {
        numeros[i][j]=numeros2[i][j];
    }
    }
    indefinido++;
    printf("\n");
    }
    

    
}
