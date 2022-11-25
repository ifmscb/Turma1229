#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

/*
  [ x ] Faça um algoritmo que possua três vetores de 5 elementos inteiros cada.
  [ x ] Os valores de cada elemento do primeiro e segundo vetor serão inseridos pelo usuário.
  [ x ] Já o terceiro vetor irá receber a soma das respectivas posições dos vetores criados anteriormente.
*/

int main()
{
  system("cls");
  printf("Hello World! \n");

  int vetor1[5], vetor2[5], vetor3[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o valor do vetor1[%d]: ", i);
    scanf("%d", &vetor1[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o valor do vetor2[%d]: ", i);
    scanf("%d", &vetor2[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    vetor3[i] = vetor1[i] + vetor2[i];
  }

  for (int i = 0; i < 5; i++)
  {
    printf("vetor3[%d]: %d) \n", i, vetor3[i]);
  }
}