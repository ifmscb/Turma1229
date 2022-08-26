#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  float altura, base, area, perimetro, diagonal;

  printf("digite uma base: \n");
  scanf("%f", &base);

  printf("digite uma altura: \n");
  scanf("%f", &altura);

  area = altura * base;

  perimetro = pow(altura, 2) + pow(base, 2);

  diagonal = sqrt(pow(altura, 2) + pow(base, 2));

  printf("Base %f\nAltura %f \nArea %f \nPerimetro %f \nDiagonal %f", base, altura, area, perimetro, diagonal);
}