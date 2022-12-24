#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

/*
  Crie um algoritmo que leia o preço de compra e o preço de venda de 10 produtos. Seu algoritmo deverá imprimir quantas mercadorias proporcionam:
  a)    Lucro abaixo de 10%;
  b)    Lucro acima de 10% e abaixo de 20%
  c)    Lucro acima de 20%
*/

int main()
{

  system("cls");
  setlocale(LC_ALL, "Portuguese");

  float precoCompra[10], precoVenda[10];
  int lucroAbaixoDe10 = 0, lucroEntre10e20 = 0, lucroAcimaDe20 = 0;

  for (int i = 0; i < 10; i++)
  {
    char nomeProduto[50];
    printf("Digite o nome do produto: ");
    scanf("%s", &nomeProduto[i]);
    printf("Digite o preco de compra do produto %d: ", i + 1);
    scanf("%f", &precoCompra[i]);
    printf("Digite o preco de venda do produto %d: ", i + 1);
    scanf("%f", &precoVenda[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    float lucro = precoVenda[i] - precoCompra[i];
    float porcentagemLucro = (lucro / precoCompra[i]) * 100;

    if (porcentagemLucro < 10)
    {
      lucroAbaixoDe10++;
    }
    else if (porcentagemLucro >= 10 && porcentagemLucro < 20)
    {
      lucroEntre10e20++;
    }
    else
    {
      lucroAcimaDe20++;
    }
  }

  printf("Quantidade de produtos com lucro abaixo de 10 porcento: %d \n", lucroAbaixoDe10);
  printf("Quantidade de produtos com lucro entre 10 e 20 porcento: %d \n", lucroEntre10e20);
  printf("Quantidade de produtos com lucro acima de 20 porcento: %d \n", lucroAcimaDe20);
}