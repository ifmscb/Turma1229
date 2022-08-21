#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  int idade, ensinoMedio;

  printf("Qual a sua idade: ");
  scanf("%i", &idade);

  if (idade >= 14 && idade <= 24)
  {
    printf("está cursando ensino médio? Caso Sim Digite 01: ");
    scanf("%i", &ensinoMedio);

    if (ensinoMedio == 1)
    {
      printf("ok, some daqui.");
    }
    else
    {
      printf("Infelizmente você não pode participar");
    }
  }
  else if (idade >= 0 && idade <= 14 || idade > 24 && idade < 100)
  {
    printf("Idade fora do escopo aceitavel");
  }
  else
  {
    printf("Idade invalidada");
  }
}
