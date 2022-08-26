#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");

  char name[30];
  int op;
  float moneyInitial, calcS;
  printf("Bem-vindo(a) ao Sistema de Conversao\n");

  printf("Digite seu nome: ");
  scanf("%s", &name);

  printf("Selecione uma moeda\n");
  printf("1 - Franco Suico \n2 - Libra Esterlina \n3 - Dolar Americano \n4 - Marco Alemao\n");
  printf("Digite sua op(ex: 2): ");
  scanf("%i", &op);

  printf("Digite uma certa quantidade em R$:(ex 2000.00): ");
  scanf("%f", &moneyInitial);

  system("cls");
  printf("Bem-vindo(a) ao Sistema de Conversao\n");
  switch (op)
  {
  case 1:
    /* Franco Suico */
    calcS = moneyInitial / 2.75;
    printf("Hi %s Com base no valor inserido, o valor da conversao de BR => FS foi de: R$%.2f", name, calcS);
    break;
  case 2:
    /* Libra Esterlina */
    calcS = moneyInitial / 3.15;
    printf("Hi %s Com base no valor inserido, o valor da conversao de BR => LE foi de: R$%.2f", name, calcS);
    break;
  case 3:
    /* Dolar Americano */
    calcS = moneyInitial / 3.85;
    printf("Hi %s Com base no valor inserido, o valor da conversao de BR => DA foi de: R$%.2f", name, calcS);
    break;
  case 4:
    /* Marco Alemao */
    calcS = moneyInitial / 1.95;
    printf("Hi %s Com base no valor inserido, o valor da conversao de BR => MA foi de: R$%.2f", name, calcS);
    break;
  default:
    printf("err 500");
    break;
  }
}
