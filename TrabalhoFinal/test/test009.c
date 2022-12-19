#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

// Em uma competição de salto em distância cada atleta tem direito a três saltos.
// No final da série de cada atleta o melhor e o pior resultado são eliminados.
// O resultado final para cada atleta é a média dos três valores restantes.
// Escreva um algoritmo que leia um número sequencial indicando o código do atleta e as distâncias de 10 atletas.
// Ao final seu algoritmo deverá apresentar a matrícula e a média dos três primeiros colocados da competição.

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  int atleta[10], melhor = 0, pior = 0, media = 0, distancia[10][3];

  // loop para ler os dados dos atletas
  for (int i = 0; i < 10; i++)
  {
    printf("Digite o codigo do atleta %d: ", i + 1);
    scanf("%i", &atleta[i]);

    printf("Cod digitado: %d", atleta[i]);
  }

  // loop para ler as distancias dos atletas
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("Digite a distancia do atleta %d no salto %d: ", atleta[i], j + 1);
      scanf("%i", &distancia[i][j]);
    }
  }

  // loop para calcular a melhor ou pior distancia de cada atleta
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (distancia[i][j] > melhor)
      {
        melhor = distancia[i][j];
      }
      if (distancia[i][j] < pior)
      {
        pior = distancia[i][j];
      }
    }
  }

  // loop para calcular a media dos atletas
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (distancia[i][j] != melhor &&
          distancia[i][j] != pior)
      {
        media += distancia[i][j];
      }
    }
  }

  printf("O codigo de matricula do atleta e: %d \n", atleta[0]);
  printf("A media dos tres primeiros colocados e: %d \n", media / 3);
}