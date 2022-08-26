#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  float primeiro, segundo, terceiro, quarto, media;

  printf("primeiro numero ");
  scanf("%f", &primeiro);

  printf("segundo numero ");
  scanf("%f", &segundo);

  printf("terceiro numero ");
  scanf("%f", &terceiro);

  printf("quarto numero ");
  scanf("%f", &quarto);

  media = ((primeiro * 1) + (segundo * 2) + (terceiro * 3) + (quarto * 4)) / (1 + 2 + 3 + 4);

  printf("media foi %f", media);
}