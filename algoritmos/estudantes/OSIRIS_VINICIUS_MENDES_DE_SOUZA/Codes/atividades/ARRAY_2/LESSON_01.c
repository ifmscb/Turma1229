#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

// Crie um algoritmo que leia 20 dados para um vetor de elementos inteiros.
// Seu algoritmo deve identificar o menor e o maior elemento, o percentual de números pares e a média dos elementos do vetor.

int main()
{

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int vetor[20], maior = 0, menor = 0, pares = 0;
  float media = 0;

  int tamanho = sizeof(vetor) / 2;

  for (int i = 0; i < tamanho; i++)
  {
    printf("Digite o valor do vetor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < 20; i++)
  {
    if (vetor[i] % 2 == 0)
    {
      pares++;
    }
    media += vetor[i];
  }

  maior = vetor[0];
  menor = vetor[0];

  for (int i = 0; i < 20; i++)
  {
    if (vetor[i] > maior)
    {
      maior = vetor[i];
    }
    if (vetor[i] < menor)
    {
      menor = vetor[i];
    }
  }

  printf("O maior valor do vetor e: %d \n", maior);
  printf("O menor valor do vetor e: %d \n", menor);
  printf("A média dos valores do vetor e: %.2f \n", media / 20);
  printf("O percentual de números pares e: %.2f \n", (pares * 100) / 20);
}