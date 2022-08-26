#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  int a1, razao, a7;
  printf("Digite o primeiro termo da PG:");
  scanf("%i", &a1);
  printf("Digite o valor da razao da PG:");
  scanf("%i", &razao);

  a7 = a1 * pow(razao, (7 - 1));

  printf("O Setimo termo da PG foi de: %i \n",
         a7);
}