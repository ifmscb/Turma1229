// função de bbliotecas
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// funçaõ principal
int main()
{
  float const valorPao = 0.25, valorBroa = 0.35;
  float quantidadePao, quantidadeBroa;

  printf("Quantos paes voce deseja ? : \n ");
  scanf("%f", &quantidadePao);

  printf("Quantos broas voce deseja ? : \n ");
  scanf("%f", &quantidadeBroa);

  float calcuPao = quantidadePao * valorPao;
  float calcuBroa = quantidadeBroa * valorBroa;

  float totalcusto = calcuPao + calcuBroa;

  float custoProducao45 = 0.45, contaPoupanca30 = 0.30, lucro = 0.25;

  float totalproducao = totalcusto * custoProducao45;
  float totalPoupanca = totalcusto * contaPoupanca30;
  float totallucro = totalcusto * lucro;

  printf("A soma do pao foi de : %.2f\n", calcuPao);
  printf("A soma do broa foi de : %.2f\n", calcuBroa);
  printf("A soma de pao com broa foi de : %.2f\n", totalcusto);
  printf("O total de producao foi : %.2f\n", totalproducao);
  printf("O total da poupanca foi : %.2f\n", totalPoupanca);
  printf("o total do lucro obtido foi : %.2f\n", totallucro);
}