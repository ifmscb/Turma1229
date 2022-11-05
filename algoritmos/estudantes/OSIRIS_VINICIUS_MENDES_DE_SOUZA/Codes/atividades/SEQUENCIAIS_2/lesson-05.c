// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// função principal
int main()
{
  float valorDoProduto, valorComDinheiro, valorComCartao;
  float descontoDinheiro, descontoCartao;

  printf("insira o valor do produto: ");
  scanf("%f", &valorDoProduto); // input

  descontoDinheiro = valorDoProduto * 0.10;
  descontoCartao = valorDoProduto * 0.05;

  valorComCartao = valorDoProduto - descontoCartao;
  valorComDinheiro = valorDoProduto - descontoDinheiro;

  printf("Valor do produto: %f\nEm dinheiro: %f\nDisconto em dinheiro: %f",
         valorDoProduto,
         valorComDinheiro,
         descontoDinheiro);
}
