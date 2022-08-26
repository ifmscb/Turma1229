// importaÃ§Ã£o de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// funÃ§Ã£o principal
int main()
{
  float valor = 22.50, imposto = 0.10;
  float dimensao, valorLimpeza, largura, comprimento;

  printf("Digite o valor da largura do terreno :");
  scanf("%f", &largura);
  printf("Digite o valor do comprimento :");
  scanf("%f", &comprimento);

  dimensao = largura * comprimento;
  valorLimpeza = valor * dimensao;
  imposto = valorLimpeza * 0.10;

  printf("O valor da limpeza foi :R$ %.2f\n", valorLimpeza);
  printf("O valor da dimensao foi :R$ %.2f\n", dimensao);
  printf("O valor do imposto foi :R$ %.2f", imposto);
}