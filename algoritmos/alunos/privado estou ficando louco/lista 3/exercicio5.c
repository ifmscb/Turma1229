#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float gramasCarne = 0.200;
    float quantidadeDeLanche , KilosNecessarios;

    printf("Digite a quantidade de hamburguer para domingo : ");
    scanf("%f" , &quantidadeDeLanche);

    KilosNecessarios = gramasCarne * quantidadeDeLanche;

    printf("A quantidade em quilos de carne necessária para a sua producao e : %.3f Kg" , KilosNecessarios);

}