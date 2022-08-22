#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  float Reais, Franco = 2.75, libra = 3.15, dolar = 3.85, alemao = 1.95;
  float CalcFranco, CalcLibra, CalcDolar, CalcAlemao;
  int valorDigitado;

  printf("Digite a quantia em reais: ");
  scanf("%f", &Reais);

  CalcFranco = (Reais / Franco);

  CalcLibra = (Reais / libra);

  CalcDolar = (Reais / dolar);

  CalcAlemao = (Reais / alemao);

  printf("Qual moeda deseja converter? 1.Franco\n");
  printf("Qual moeda deseja converter? 2.libra\n");
  printf("Qual moeda deseja converter? 3.Dolar\n");
  printf("Qual moeda deseja converter? 4.Alemao\n");
  scanf("%i", &valorDigitado);

  switch (valorDigitado)
  {

  case 1:
    printf("O valor convertido em moedas: %.3f", CalcFranco);
    break;

  case 2:
    printf("O valor convertido em moedas: %.3f", CalcLibra);
    break;

  case 3:
    printf("O valor convertido em moedas : %.3f", CalcDolar);
    break;

  case 4:
    printf("O valor convertido em moedas : %.3f", CalcAlemao);
    break;

  default:
    printf("Valor invalido");
  }
}
