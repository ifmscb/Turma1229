#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    int valorA, valorB;

    printf("Digite o valor de A: ");
    scanf("%i", &valorA);

    printf("Digite o valor de B: ");
    scanf("%i", &valorB);

    int valorAux = valorA;

    valorA = valorB;
    valorB = valorAux;

    printf("Valor inverso de A foi de: %i\n", valorA);
    printf("Valor inverso de B foi de: %i\n", valorAux);
}