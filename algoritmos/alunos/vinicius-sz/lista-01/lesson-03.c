#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Escreva um algoritmo que leia 4 variáveis reais e imprima a média ponderada entre os valores, sabendo-se que os pesos são respectivamente 1, 2, 3 e 4.

int main()
{

  // declaração de variavel
  float first, second, third, four, media;

  // interação com usuário
  printf("Informe o primeiro numero: ");
  scanf("%f", &first);

  // interação com usuário
  printf("Informe o segundo numero: ");
  scanf("%f", &second);

  // interação com usuário
  printf("Informe o terceiro numero: ");
  scanf("%f", &third);

  // interação com usuário
  printf("Informe o quarto numero: ");
  scanf("%f", &four);

  // calculo
  media = ((first * 1) + (second * 2) + (third * 3) + (four * 4)) / (1 + 2 + 3 + 4);

  // retorno final
  printf("A media ponderada foi de: %f", media);
}