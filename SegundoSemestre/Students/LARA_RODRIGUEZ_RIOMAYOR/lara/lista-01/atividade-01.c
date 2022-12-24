#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  int numero = 0;
  int primeiro, segundo;

  printf("digite um numero: ");
  scanf("%i", &numero);

  primeiro = numero - 1;
  segundo = numero + 1;

  // Retorno final
  printf("%i\n%i\n%i", numero, primeiro, segundo);
}