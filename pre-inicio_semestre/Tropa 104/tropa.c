//
// Created by Raztor on 09/08/2022.
//
#include "stdio.h"
#include "stdlib.h"
int dist_total, titanes, integrantes, gas_pp, gas_tot;
int main()
{
    printf("Ingrese la distancia total al cuartel:\n");
    scanf("%d", &dist_total);
    printf("Ingrese la cantidad de titanes:\n");
    scanf("%d", &titanes);
    printf("Ingrese la cantidad de reclutas:\n");
    scanf("%d", &integrantes);
    gas_pp = dist_total*3 + 2*titanes;
    printf("la gasolina necesaria para cada recluta es de %d litros\n", gas_pp);
    printf("la gasolina necesaria para todos los integrantes es de %d litros\n", gas_pp*integrantes);
    return 0;
}

