#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void welcome();
void createUser();
void userName(int i);

void main()
{
  welcome();
}

void welcome()
{
  int op;

  setlocale(LC_ALL, "Portuguese");

  printf("Seja Bem-Vind3 ao Sistema de Cadastro\n");
  printf(" 1 - Cadastrar novo usuário\n");
  printf(" 2 - Visualizção de Teste\n");
  printf("Digite aqui: ");
  scanf("%d", &op);

  switch (op)
  {
  case 1:
    printf("Op 1\n");
    createUser();
    break;
  case 2:
    printf("Op 2");
    break;
  default:
    printf("Algo deu errado, tente novamente");
    system("pause");
    system("cls");
    welcome();
    break;
  }
}

void createUser()
{
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      return i;
      printf("cadastro - id: %d\n", i);
      userName(i);
    }
  }

  int age[11][10];
  char email[255][10];
  char password[255][10];
}

void userName(int i)
{

  char userName[255][10];

  printf("Digite seu nome: ");
  fgets(userName[i], 255, stdin);
  system("pause");
  verifyUserName(userName, i);
}

int verifyUserName(char *name, int i)
{

  if (name[i] < 0 && name[i] < 5)
  {
    printf("Nome curto, tente novamente\n");
    system("pause");
    system("cls");
    userName(i);
  }
}
