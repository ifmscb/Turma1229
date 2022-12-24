#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void main(void)
{
  void welcome();
  welcome();
}

void welcome()
{
  void script();

  printf("Sistema de Detecção de Caractéris\n");
  script();
}

void script()
{
  char letra;
  printf("Digite qualquer tecla: ");
  scanf("%s", &letra);

  // void minusculo(char letra);
  // void maiusculo(char letra);

  // minusculo(letra);
  // maiusculo(letra);
}

int maiusculo(char letra)
{
  if (letra >= 'A' || letra <= 'Z')
  {
    system("cls");
    printf("Letra Maiuscula");
  }
  else
  {
  }
}

int maiusculo(char letra)
{
  if (letra >= 'a' || letra <= 'z')
  {
    system("cls");
    printf("Letra Maiuscula");
  }
  else
  {
  }
}
