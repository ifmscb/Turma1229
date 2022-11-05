#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");
  char name[30];
  int idade;

  printf("SISTEMA ELEITORAL DO INSITUTO NACIONAL DOS PREGUISOS (INP)\n");

  printf("Digite seu nome: ");
  scanf("%s", &name);

  printf("Digite sua idade(ex: 16): ");
  scanf("%i", &idade);
  system("cls");

  if (idade > 0 && idade < 16)
  {
    printf("SISTEMA ELEITORAL DO INSITUTO NACIONAL DOS PREGUISOS (INP)\n");
    printf("==> Ainda nao consta como cidadao");
  }
  else if (idade >= 16 && idade < 18 || idade >= 65)
  {
    printf("SISTEMA ELEITORAL DO INSITUTO NACIONAL DOS PREGUISOS (INP)\n");
    printf("==> facultativo");
  }
  else if (idade >= 18 && idade < 65)
  {
    printf("SISTEMA ELEITORAL DO INSITUTO NACIONAL DOS PREGUISOS (INP)\n");
    printf("==> eleitor obrigatorio");
  }
  else
  {
    printf("Operacion Invadidad");
  }
}