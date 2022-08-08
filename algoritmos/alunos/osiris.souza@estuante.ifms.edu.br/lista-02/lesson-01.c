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

  printf("raio ");
  scanf("%f", &raio);

  diametro = raio * raio;

  area = pi * raio * 2;

  printf("retorno diametro %f\nvalor da area %f",
         diametro,
         area);
}