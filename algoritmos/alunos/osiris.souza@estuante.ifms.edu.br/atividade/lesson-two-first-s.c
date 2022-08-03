#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Escreva um algoritmo que leia dois números inteiros, dividendo e divisor, respectivamente, e retorne o valor do “dividendo = “, do “divisor = “, do “quociente = “ e do “resto = “ da divisão.

int main()
{
  // declaração de variáveis
  int firstNumber, secondNumber, thirdNumber;

  printf("Insira o divisor: ");
  scanf("%i", &firstNumber);

  printf("Insira o dividendo: ");
  scanf("%i", &secondNumber);

  float quociente = secondNumber / firstNumber;
  thirdNumber = secondNumber % firstNumber;

  printf("O dividendo foi: %i\nO divisor foi: %i\nO quociente (resultado) foi: %.1f\nO resto foi: %i",
         secondNumber,
         firstNumber,
         quociente,
         thirdNumber);
}