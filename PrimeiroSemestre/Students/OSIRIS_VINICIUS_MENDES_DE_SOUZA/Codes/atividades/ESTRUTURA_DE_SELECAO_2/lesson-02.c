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

  printf("BEM VINDO(A) AO CAMPEONATO DE FUTEBOL DA CIDADE DE CAFUNDÓ\n");
  printf("Antes de comecarmos, vamos descobir em qual categoria tu se encaixa.\n");
  system("pause");
  system("cls");

  printf("Digite seu nome: ");
  fgets(name, 30, stdin);

  printf("Digite a tua idade(ex: 16): ");
  scanf("%i", &idade);
  system("cls");

  if (idade > 5 && idade <= 7)
  {

    printf("Hi %s\nCom base na sua idade tu pertence a categoria:\n==>Infantil A ", name);
  }
  else if (idade >= 8 && idade <= 10)
  {

    printf("Hi %s\nCom base na sua idade tu pertence a categoria:\n==>Infantil B ", name);
  }
  else if (idade >= 11 && idade <= 13)
  {

    printf("Hi %s\nCom base na sua idade tu pertence a categoria:\n==>Juvenil A ", name);
  }
  else if (idade >= 14 && idade <= 17)
  {

    printf("Hi %s\nCom base na sua idade tu pertence a categoria:\n==>Juvenil B ", name);
  }
  else if (idade > 18)
  {

    printf("Hi %s\nCom base na sua idade tu pertence a categoria:\n==>Adulta", name);
  }
  else
  {
    printf("Operacion Invadidad");
  }
}