#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");
  void data();

  data();
}

void data()
{
  // funções para receber os dados
  void reciveName();
  void reciveAge();
  void reciveMail();
  void recivePassword();
}

void verifyData()
{
  // funções para verificar os dados
  int setUserName(char *name);
  int setAge(int *age);
  int setUserMail(char *mail);
  int setPassword(char *password);
}

void reciveName()
{
  char name[100];

  printf("Digite o nome: ");
  fgets(name, 100, stdin);

  setUserName(name);
}

int seUserName(char *name)
{
  // verifica se o nome é válido
  if (setUserName(name) == 0)
  {
    printf("Nome inválido!\n");
    return 0;
  }
  else
  {
    return 1;
  }
}