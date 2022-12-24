#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

bool verificaTamanho(char copiaPalavra[]);
bool verificaArroba(char copiaPalavra[]);

int main()
{
  // declarando
  char palavra[20];
  int i, tamanho = 0;
  bool arroba = false;

  do
  {
    // leitura
    printf("Digite seu nome: ");
    fgets(palavra, 20, stdin);

    // varrendo o array

    // encontrando caractere
  } while (verificaTamanho(palavra) == false &&
           verificaArroba(palavra) == false);
}

bool verificaTamanho(char copiaPalavra[]) // retorna true se o tamanho for maior ou igual a 8
{
  int tamanho = strlen(copiaPalavra) - 1; // -1 para tirar o \0

  printf("Tamanho da string: %i \n", tamanho);

  if (tamanho >= 8)
  {
    printf("Tamanho valido\n");
    return true;
  }
  else
  {
    printf("Tamanho invalido, digite novamente\n");
    return false;
  }
}

bool verificaArroba(char copiaPalavra[]) // retorna true se encontrar o arroba
{
  int tamanho = strlen(copiaPalavra);
  int i;

  for (i = 0; i < tamanho; i++)
  {
    if (copiaPalavra[i] == '@')
    {
      printf("Achei o arroba\n");
      return true;
    }
    else
    {
      printf("Nao eh o arroba\n");
    }
  }

  return false;
}