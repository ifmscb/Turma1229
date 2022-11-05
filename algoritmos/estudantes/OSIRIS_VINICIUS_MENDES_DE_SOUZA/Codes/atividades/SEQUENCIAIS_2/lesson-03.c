#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  int primeiroTermoPa, razao, decimoTermoPa;
  printf("Digite o primeiro termo da PA:");
  scanf("%i", &primeiroTermoPa);
  printf("Digite o valor da razao da PA:");
  scanf("%i", &razao);

  decimoTermoPa = primeiroTermoPa + (10 - 1) * razao;

  printf("O decimo termo da PA foi de: %i \n",
         decimoTermoPa);
}