#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

/*
  Crie um algoritmo que armazene 15 números inteiros em um vetor NUM e que imprima uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.
*/

int main()
{
  system("cls");
  printf("Hello World! \n");

  int NUM[14];

  for (int i = 0; i < 14; i++)
  {
    printf("Digite o valor do NUM[%i]: ", i);
    scanf("%i", &NUM[i]);

    if (NUM[i] % 2 == 0)
    {
      printf("O numero %i e par. \n", NUM[i]);
    }
    else
    {
      printf("O numero %i e impar. \n", NUM[i]);
    }
  }
}