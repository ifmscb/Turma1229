#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  int divisor, dividendo, modulo;
  float quociente;

  printf("Divisor ");
  scanf("%i", &divisor);

  printf("Dividendo ");
  scanf("%i", &dividendo);

  quociente = dividendo / divisor;
  modulo = dividendo % divisor;

  printf("dividendo: %i\ndivisor: %i\nquociente: %f\nresto: %i", dividendo, divisor, quociente, modulo);
}