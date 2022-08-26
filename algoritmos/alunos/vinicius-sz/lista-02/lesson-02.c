// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// função principal
int main()
{

  int valueLado;

  printf("Digite o valor do lado: ");
  scanf("%i", &valueLado);

  int perimetro = 4 * valueLado;
  int area = valueLado * valueLado;
  int diagonal = sqrt(pow(valueLado, 2));

  printf("O valor do paerimetro foi: %i \nO Valor da area foi: %i \nO valor da diagonal foi: %i",
         perimetro,
         area,
         diagonal);
}
