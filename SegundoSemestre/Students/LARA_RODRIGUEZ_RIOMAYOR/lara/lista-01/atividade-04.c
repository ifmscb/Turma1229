#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  int quadrado;
  float numero, raiz;

  printf("digite um numero ");
  scanf("%f", &numero);

  quadrado = numero * 2;
  raiz = sqrt(numero);

  printf("O Valor digitado %f\nNumero ao quardado %i\nA raiz foi %f", numero, quadrado, raiz);
}