#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float gramasCarne = 0.200;
    float quantidadeLanche , KilosNecessarios;

    printf("Digite a quantidade de hamburguer para sexta-feira : ");
    scanf("%f" , &quantidadeLanche);

    KilosNecessarios = gramasCarne * quantidadeLanche;

    printf("A quantidade em quilos de carne necessária para a sua producao e : %.2f Kg" , KilosNecessarios);


    



}

