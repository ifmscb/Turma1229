#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  float gramasCarne = 0.200;
  float lanche, quantidadeDeCarneNecessaria;

  printf("Digite a quantidade de hamburgeres para hoje: ");
  scanf("%f", &lanche);

  quantidadeDeCarneNecessaria = gramasCarne * lanche;

  if (quantidadeDeCarneNecessaria < 1.0)
  {
    printf("A quantidade em gramas de carne necessaria foi de: %.3fg",
           quantidadeDeCarneNecessaria);
  }
  else
  {
    printf("A quantidade em quilos de carne necessaria foi de: %.2f Kg",
           quantidadeDeCarneNecessaria);
  }
}
