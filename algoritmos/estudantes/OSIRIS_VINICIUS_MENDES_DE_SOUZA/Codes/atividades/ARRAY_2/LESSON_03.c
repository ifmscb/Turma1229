#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

// Crie um vetor char de 10 posições.
// Cada posição de seu vetor deve receber letras externamente e, ao final, apresentar a quantidade de vezes houve a ocorrência das letras “a”, “b” e “c” sequencialmente no vetor.

int main()
{

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  char letras[10];
  int quantidaA = 0, quantidaB = 0, quantidaC = 0, outraQuantidade = 0;

  for (int i = 0; i < 10; i++)
  {
    printf("Digite uma letra [%i]: ", i);
    scanf("%s", &letras[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    if (letras[i] == 'a')
    {
      quantidaA++;
    }
    else if (letras[i] == 'b')
    {
      quantidaB++;
    }
    else if (letras[i] == 'c')
    {
      quantidaC++;
    }
    else
    {
      outraQuantidade++;
    }
  }

  printf("Quantidade de letras A: %d \n", quantidaA);
  printf("Quantidade de letras B: %d \n", quantidaB);
  printf("Quantidade de letras C: %d \n", quantidaC);
  printf("Quantidade de outras letras: %d \n", outraQuantidade);
}