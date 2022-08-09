// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// função principal
int main()
{
  float valorDeC, valorDeF;

  printf("Digite o Celcu ");
  scanf("%f", &valorDeC);

  valorDeF = (9 * valorDeC + 160) / 5;

  printf("O valor de F foi: %f",
         valorDeF);
}
