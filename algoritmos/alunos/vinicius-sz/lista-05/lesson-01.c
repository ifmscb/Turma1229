#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  char name[30];
  float altura, peso, calcM, calcF, calcDifM, calcDifF;
  int op;

  printf("Bem-vindo(a) a calculadora de peso ideal\n");
  printf("Como gostaria de ser chamado?: ");
  gets(name);

  printf("digite sua altura (ex: 1.70): ");
  scanf("%f", &altura);
  printf("digite seu peso atual (ex: 65.75): ");
  scanf("%f", &peso);
  system("cls");

  printf("selecione seu genero: \n");
  printf("1 - masculino\n");
  printf("2 - feminino\n");
  printf("3 - outros\n");
  printf("digite uma opcao: ");
  scanf("%i", &op);

  system("cls");
  switch (op)
  {
  case 1:
    // calculo masculino
    calcM = (72.7 * altura) - 58;
    calcDifM = calcM - peso;

    printf("Hi %s,\nSeu peso atual: %.2f\nCom base nele o peso ideal foi de: %.2f\n",
           name,
           peso,
           calcM);

    // se a direfenca do peso for menor que 1kg retorne em gramas
    if (calcDifM < 1.00)
    {
      printf("Uma diferenca de: %.2fg para seu peso atual.", calcDifM);
    }
    else
    {
      printf("Uma diferenca de: %.2fkg para seu peso atual.", calcDifM);
    }
    break;
  case 2:
    // calculo feminino
    calcF = (62.1 * altura) - 44.7;
    calcDifF = calcF - peso;

    printf("Hi %s,\nSeu peso atual: %.2f\nCom base nele o peso ideal foi de: %.2f\n",
           name,
           peso,
           calcF);
    // se a direfenca do peso for menor que 1kg retorne em gramas
    if (calcDifF < 1.00)
    {
      printf("Uma diferenca de: %.2fg para seu peso atual.", calcDifF);
    }
    else
    {
      printf("Uma diferenca de: %.2fkg para seu peso atual.", calcDifF);
    }
    break;
  case 3:

    // procure um advogado.

    printf("Hi %s,\nSeu peso atual: %.2f.\nInfelizmente nao possuimos essa formula, em caso de duvida entre em contato com o juridico do professor.", name, peso);
    break;

  default:
    printf("operacao invalida");
    break;
  }
}
