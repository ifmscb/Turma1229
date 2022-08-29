#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char name[30];
  int idade, ensinoMedio;

  printf("SISTEMA DE VERIFICACAO 'JOVEM APRENDIZ'\n");

  printf("Qual seu nome: ");
  scanf("%s", &name);

  printf("Qual a sua idade: ");
  scanf("%i", &idade);

  system("cls");

  printf("SISTEMA DE VERIFICACAO 'JOVEM APRENDIZ'\n");
  if (idade >= 14 && idade <= 24)
  {
    printf("está cursando ensino médio? Caso Sim Digite 01: ");
    scanf("%i", &ensinoMedio);

    if (ensinoMedio == 1)
    {
      printf("Hey %s Congratulations, tu esta apto para o programa jovem escravo legal.", name);
    }
    else
    {
      printf("Infelizmente você não pode participar");
    }
  }
  else if (idade >= 0 && idade <= 14 || idade > 24 && idade < 100)
  {
    printf("Hey %s infelizmente voce esta na idade fora do escopo aceitavel", name);
  }
  else
  {
    printf("Idade invalidada");
  }
}
