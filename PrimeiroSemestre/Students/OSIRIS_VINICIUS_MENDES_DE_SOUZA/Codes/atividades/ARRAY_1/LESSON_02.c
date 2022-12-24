#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

/*
  Crie um algoritmo que armazene cinco valores inteiros em um vetor e que depois possa ser digitado o índice correspondente ao valor apresentado na tela do computador.
*/

int main()
{
  system("cls");
  printf("Hello World! \n");

  int vetor[5], indice;

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o valor do vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }

  printf("Digite o indice do vetor: ");
  scanf("%d", &indice);

  printf("vetor[%d]: %d) \n", indice, vetor[indice]);
}