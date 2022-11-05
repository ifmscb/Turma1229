#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  system("cls");
  char name[30];
  int idade;

  printf("SISTEMA UNIPLANOS (INP)\n");

  printf("Digite seu nome: ");
  scanf("%s", &name);

  printf("Digite sua idade(ex: 16): ");
  scanf("%i", &idade);
  system("cls");

  if (idade > 0 && idade <= 10)
  {
    printf("Hey %s, Com base na sua idade o valor do seu plano foi de: R$30,00", name);
  }
  else if (idade > 10 && idade <= 29)
  {
    printf("Hey %s, Com base na sua idade o valor do seu plano foi de: R$60,00", name);
  }
  else if (idade > 29 && idade <= 45)
  {
    printf("Hey %s, Com base na sua idade o valor do seu plano foi de: R$120,00", name);
  }
  else if (idade > 45 && idade <= 59)
  {
    printf("Hey %s, Com base na sua idade o valor do seu plano foi de: R$150,00", name);
  }
  else if (idade > 59 && idade <= 65)
  {
    printf("Hey %s, Com base na sua idade o valor do seu plano foi de: R$250,00", name);
  }
  else if (idade > 65)
  {
    printf("Hey %s, Com base na sua idade o valor do seu plano foi de: R$400,00", name);
  }
  else
  {
    printf("Hey %s, Erro 404 ", name);
  }
}