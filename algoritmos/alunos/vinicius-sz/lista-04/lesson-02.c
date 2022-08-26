#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");
  float min = 0.3, salarioBruto, jurus = 0.15;
  printf("Bem-Vindo(a) Sistema de Emprestimo\n");
  printf("Informe o Valor de Seu Salario Bruto: ");
  scanf("%f", &salarioBruto);

  float desc = salarioBruto * min; // isso é o max da parcela
  float max = desc * 36;
  float caljure = max * jurus;
  float empBrut = max - caljure;

  printf("%.2f\n%.2f\n%.2f\n%.2f", desc, max, caljure, empBrut);
}
