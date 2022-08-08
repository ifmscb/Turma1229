#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
 
  float largura, comprimento, dimensao;
  
  float const valorMedio = 5000;
  float precoTerreno = 0;
  
  printf("tamanho da largura do terreno \n");
  scanf("%f",&largura);
  
  printf("tamanho do comprimento do terreno \n");
  scanf("%f", &comprimento);
  
  dimensao = largura * comprimento;
  precoTerreno = dimensao * valorMedio;
  
  printf("%.3f x %f = %.2f metros quadrados \n", largura, comprimento, dimensao);
  
  printf("o preco medio desse terreno em corumba = %.2f", precoTerreno);
}
