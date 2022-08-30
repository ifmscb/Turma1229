#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  float largura = 0 , comprimento = 0  , dimensao = 0;
  float const valorMedio = 5000;
  float valorTerreno = 0;

  printf("Digite o valor da largura do terreno \n");
  scanf("%f" , &largura);

  printf("Digite o valor do comprimento do terreno \n");
  scanf("%f" , &comprimento);

  dimensao = largura * comprimento;
  valorTerreno = dimensao * valorMedio;

  printf("%.2f x %.2f = %.2f metros quadrados \n", largura , comprimento, dimensao);

  printf("Preco medio do terreno : %.2f" , valorTerreno);

}

