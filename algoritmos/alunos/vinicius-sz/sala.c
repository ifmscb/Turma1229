#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  float const cotacao = 5.31;
  float valorEmDolar, valorEmReais;
  float licota30, licota60;

  printf("valor em dolar: ");
  scanf("%f", &valorEmDolar);

  valorEmReais = valorEmDolar * cotacao;

  licota60 = valorEmReais * 0.6;

  licota30 = valorEmReais * 0.3;

  printf("o valor em dolar inserido foi %.2f \nconvertido foi %.2f \ncom alicota de 30 %.2f \ncom alicota de 60 %.2f",
         valorEmDolar,
         valorEmReais,
         licota30,
         licota60);
}
