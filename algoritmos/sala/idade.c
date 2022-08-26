#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  //******************************************************//
  // tentativa de atribuir acentuação em c
  setlocale(LC_ALL, "");

  printf("localidade: %s", setlocale(LC_ALL, NULL));

  system("pause");
  //******************************************************//

  int idade, ensinoMedio;

  printf("digite sua idade:\n");
  scanf("%i", &idade);

  if (idade >= 14 && idade <= 24)
  {

    printf("Está cursando o ensino médio?)\n");
    printf("1 . Sim ");
    printf("2 . Não: ");
    scanf("%i", &ensinoMedio);

    if (ensinoMedio == 1)
    {
      printf("você pode participar do programa");
    }
    else
    {
      printf("você não pode participar do programa");
    }
  }
  else if (idade >= 0 && idade <= 14 || idade > 24 && idade < 100)
  {
    printf("idade fora do intervalo valido\n");
  }
  else
  {
    printf("valor inválido");
  }
}
