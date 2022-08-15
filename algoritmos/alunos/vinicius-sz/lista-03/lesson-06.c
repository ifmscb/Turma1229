#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  float moeda25 = 0.25, moeda50 = 0.5, moeda01 = 1.0;
  float recebe25, recebe50, recebe01;
  float calcOne, calcTwo, calcTree;
  float final;

  printf("moeda 0.25: ");
  scanf("%f", &recebe25);

  printf("moeda 0.50: ");
  scanf("%f", &recebe50);

  printf("moeda 1.00: ");
  scanf("%f", &recebe01);

  calcOne = moeda25 * recebe25;
  calcTwo = moeda50 * recebe50;
  calcTree = moeda01 * recebe01;
  final = calcOne + calcTwo + calcTree;
  float anual = final * 365;

  printf("A quantidade de moeda de 0.25 foi de: %.0f\n", recebe25);
  printf("A quantidade de moeda de 0.50 foi de: %.0f\n", recebe50);
  printf("A quantidade de moeda de 1.00 foi de: %.0f\n", recebe01);
  
  printf("A quantidade total de moeda de 0.25 foi de: %.2f\n", calcOne);
  printf("A quantidade total de moeda de 0.50 foi de: %.2f\n", calcTwo);
  printf("A quantidade total de moeda de 1.00 foi de: %.2f\n", calcTree);
  
  printf("Soma total: %.2f\n", final);
  printf("Soma total anual: %.2f\n", anual );
 
}
