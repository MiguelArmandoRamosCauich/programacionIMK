#include <stdio.h>
#include "main.h"



int tarifa1D8(int consumo)
{     
    float consumo_basico = 0;
    float consumo_Ibajo = 0;
    float consumo_Ialto = 0;
    float consumo_Excedente = 0;

    if (consumo >= 0 && consumo <= 175)
    {
        consumo_basico = 0.786 * consumo;
        printf("Consumo basico \n");   
    }
     if (consumo >= 176 && consumo <= 400)
    {
        consumo_basico = 175 * .786;
        consumo_Ibajo = (consumo - 175) * 0.911;
        printf("Consumo I.bajo \n");           
    }
    if (consumo >= 401 && consumo <= 600)
    {
        consumo_basico = 175 * .786; // consumo basico
        consumo_Ibajo = (400-175) * .911; // consumo I. BAjo
        consumo_Ialto = (consumo - 400) * 1.177;
        printf("Consumo I.alto \n");      

    }
     if (consumo >= 601)
    {
        consumo_basico = 175 * .786; // consumo basico
        consumo_Ibajo = (400-175) * .911; // consumo I. BAjo
        consumo_Ialto = (600-400) * 1.177; // consumo I. Alto
        consumo_Excedente = (consumo - 600) * 3.134;

        printf("Consumo excedente \n");    
    }
    printf("Cobro por consumo basico: %.2f\n",consumo_basico);
    printf("Cobro por consumo I. bajo: %.2f\n",consumo_Ibajo);
    printf("Cobro por consumo I. alto: %.2f\n",consumo_Ialto);
    printf("Cobro por consumo excedente: %.2f\n",consumo_Excedente);
    return (consumo_Excedente + consumo_Ialto + consumo_Ibajo + consumo_basico);

}
