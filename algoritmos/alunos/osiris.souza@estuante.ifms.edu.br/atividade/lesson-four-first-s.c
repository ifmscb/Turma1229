#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/*
  Escreva um algoritmo que receba um número real e imprima o “número”, o “quadrado” e a “raiz quadrada” desse número.
*/

int main()
{
  float firstNumber, thirdNumber;

  printf("Oi, digite um numero: ");
  scanf("%f", &firstNumber);

  int secondNumber = firstNumber * 2;
  thirdNumber = sqrt(firstNumber);

  printf("O Valor digitado foi: %.3f\nO Valor ao quardado foi: %i\nO vaor da raiz foi de: %.3f",
         firstNumber,
         secondNumber,
         thirdNumber);
}