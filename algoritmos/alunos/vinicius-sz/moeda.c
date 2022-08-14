#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  float total, moeda25 = 0.25, moeda50 = 0.5, moeda01 = 1.0;
  float final;

  printf("moeda 0.25: ");
  scanf("%f", &final);

  total += moeda25 * final;

  printf("valor final foi: %.2f", total);
}
