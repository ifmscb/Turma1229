#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  float altura, peso, calcMulheres, calcHomens;
  int sexo;

  printf("digite sua altura: \n");
  scanf("%f", &altura);

  printf("digite seu peso: \n");
  scanf("%f", &peso);

  printf("selecione seu sexo: \n");
  printf("opcao: 1 feminino  \n");
  printf("opcao: 2 masculino \n");
  scanf("%i", &sexo);
  system("pause");

  switch (sexo)
  {
  case 1:

    calcMulheres = (62.1 * altura) - 44.7;
    printf("seu peso e de %.2f\n", peso);
    printf("o peso ideal feminino e %.2f\n", calcMulheres);

    break;

  case 2:

    calcHomens = (72.7 * altura) - 58;
    printf("seu peso e de %.2f\n", peso);
    printf("o peso ideal masculino e %.2f\n", calcHomens);

    break;

  default:
    printf("voce nao existe");
  }
}
