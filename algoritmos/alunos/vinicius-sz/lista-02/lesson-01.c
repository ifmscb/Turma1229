// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// função principal
int main()
{

  float perimetro, area, diametro, raio;
  float const pi = 3.14;

  printf("digite o valor raio: ");
  scanf("%f", &raio);

  area = (pi * pow(raio, 2));
  diametro = raio * 2;
  perimetro = 2 * pi * raio;

  printf("Valor do diametro: %f\nValor da perimetro: %f\nValor da Area: %f",
         diametro,
         perimetro,
         area);
}