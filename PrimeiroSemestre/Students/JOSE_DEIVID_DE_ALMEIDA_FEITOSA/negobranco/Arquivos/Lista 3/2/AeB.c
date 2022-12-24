#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    int A , B , Aux;
    printf("Digite o valor de A: ");
    scanf("%i" , &A);
    printf("Digite o valor de B: ");
    scanf("%i" , &B);

    Aux=A;
    A=B;
    B=Aux;

    printf ("Valor inverso de A : ----> %i\n", A);
    printf ("Valor inverso de B : ----> %i\n", Aux);
}