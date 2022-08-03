#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

//  Faça um algoritmo que leia o valor digitatdo e o retorne com os seus anteriores e posteriores.

int main()
{

  // declaração de variáveis
  int numberRecived = 0;
  int calcOne, calcTwo, returnCalc;

  // Inputs
  printf("Oi, digite um numero: ");
  scanf("%i", &numberRecived);

  // Calculos
  calcOne = numberRecived - 1;
  calcTwo = numberRecived + 1;

  // Retorno final
  printf("Oi, o valor digitado foi: %i\nO seu antecessor: %i\nE seu posterior: %i",
         numberRecived,
         calcOne,
         calcTwo);
}