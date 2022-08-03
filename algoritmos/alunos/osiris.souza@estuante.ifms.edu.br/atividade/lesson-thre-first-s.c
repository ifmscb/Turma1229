#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Escreva um algoritmo que leia 4 variáveis reais e imprima a média ponderada entre os valores, sabendo-se que os pesos são respectivamente 1, 2, 3 e 4.

int main()
{

  float first, second, third, four, media;

  printf("Informe o primeiro numero: ");
  scanf("%f", &first);

  printf("Informe o segundo numero: ");
  scanf("%f", &second);

  printf("Informe o terceiro numero: ");
  scanf("%f", &third);

  printf("Informe o quarto numero: ");
  scanf("%f", &four);

  media = (first * 1 + second * 2, third * 3, four * 4) / 10;

  printf("A media ponderada foi de: %f", media);
}