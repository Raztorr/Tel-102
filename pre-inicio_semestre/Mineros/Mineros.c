//
// Created by Raztor on 09/08/2022.
//
#include "stdio.h"
#include "stdlib.h"

int dias, metros, horas, tot_km;
int main()
{
    printf("Ingrese los dias: ");
    scanf("%d", &dias);
    horas = dias * 24;
    tot_km = horas * 5;
    metros = tot_km * 1000;
    printf("El total de kilometros recorridos es: %d\n", metros);
    return 0;
}