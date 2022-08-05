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
  // Declaração de variável
  float firstNumber;

  // Interação com usuário
  printf("Oi, digite um numero: ");
  scanf("%f", &firstNumber);

  // Calculo com declaração
  float secondNumber = firstNumber * 2;
  float thirdNumber = sqrt(firstNumber);

  // Retorno Final
  printf("O Valor digitado foi: %.3f\nO Valor ao quardado foi: %f\nO valor da raiz foi de: %.3f",
         firstNumber,
         secondNumber,
         thirdNumber);
}