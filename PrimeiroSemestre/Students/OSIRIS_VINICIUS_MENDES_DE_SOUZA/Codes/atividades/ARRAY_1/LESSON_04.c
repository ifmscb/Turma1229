#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

/*
  Crie um algoritmo que armazene o salário de 10 pessoas.
  Seu algoritmo deve calcular e armazenar o novo salário sabendo-se que o reajuste foi de 8%.
  Ao final, imprima uma listagem numerada com os novos salários.
*/

int main()
{
  system("cls");
  setlocale(LC_ALL, "Portuguese");

  float salario[10], novoSalario[10];

  for (int i = 0; i < 10; i++)
  {
    printf("Digite o salario da pessoa %d: ", i + 1); // i + 1 para começar a contagem do 1.
    scanf("%f", &salario[i]);
    novoSalario[i] = salario[i] + (salario[i] * 0.08);
  }

  for (int i = 0; i < 10; i++)
  {
    printf("O novo salario da pessoa %d é: %.2f \n", i + 1, novoSalario[i]);
  }
}