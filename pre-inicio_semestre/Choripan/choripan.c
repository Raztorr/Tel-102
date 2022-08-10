//
// Created by Raztor on 09/08/2022.
//

#include "stdio.h"
#include "stdlib.h"

int ahorro, vuelto, unidades, valor;
const int precio = 150;
int main()
{
    printf("Ingrese el dinero: ");
    scanf("%d", &ahorro);
    unidades = ahorro / precio;
    vuelto = ahorro % precio;
    valor = unidades * precio;
    printf("Con mi ahorro de %d, puedo comprar %d unidades por %d y me sobra %d", ahorro, unidades, valor, vuelto);
    return 0;
}
