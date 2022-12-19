#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

// main function
int main()
{
  setlocale(LC_ALL, "Portuguese");

  // variáveis
  char name[10][100];
  int age[100];
  char mail[10][100];
  char password[10][100];

  // funções para receber os dados
  int reciveName();
  int reciveAge();
  int reciveMail();
  int recivePassword();

  // funções para verificar os dados
  int setUserName(char *name);
  int setAge(int *age);
  int setUserMail(char *mail);
  int setPassword(char *password);

  // função para calcular a média de idade
  int ageMedia(int *age);

  // função para retornar os dados
  int returnData(char *name, int *age, char *mail, char *password);

  printf(" Cadastro de Usuario ");
  reciveName(name);
  reciveMail(mail);
  recivePassword(password);
  reciveAge(age);
  // for (int j = 0; j < 100; j++)
  // {
  // }

  returnData(name, age, mail, password);
}

// função para receber o nome
int reciveName(char *name)
{
  printf("Digite o nome: ");
  fgets(name, 100, stdin);

  printf("Nome digitado: %s", name);

  // verifica se o nome é válido
  if (setUserName(name) == 0)
  {
    reciveName(name);
    return 0;
  }

  return 1;
}

// função para receber a idade
int reciveAge(int *age)
{
  printf("Digite a idade: ");
  scanf("%d", &age);

  printf("Idade digitada: %d", age);

  // verifica se a idade é válida
  if (setAge(age) == 0)
  {
    reciveAge(age);
    return 0;
  }

  return 1;
}

// função para receber o email
int reciveMail(char *mail)
{
  printf("Digite o email: ");
  scanf("%s", mail);

  printf("Email digitado: %s", mail);

  // verifica se o email é válido
  if (setUserMail(mail) == 0)
  {
    reciveMail(mail);
    return 0;
  }

  return 1;
}

// função para receber a senha
int recivePassword(char *password)
{
  printf("Digite a senha: ");
  fgets(password, 100, stdin);

  printf("Senha digitada: %s", password);
  // verifica se a senha é válida
  if (setPassword(password) == 0)
  {
    recivePassword(password);
    return 0;
  }

  return 1;
}

// função para verificar o nome
int setUserName(char *name)
{
  // verifica se o nome é válido
  if (strlen(name) < 5)
  {
    printf("Nome invalido, digite novamente.\n");
    return 0;
  }

  return 1;
}

// função para verificar a idade
int setAge(int *age)
{
  // verifica se a idade é válida
  if (age < 0 || age > 100)
  {
    printf("Idade inválida, digite novamente.\n");
    return 0;
  }

  return 1;
}

// função para verificar o email
int setUserMail(char *mail)
{
  //   o Email deve conter no mínimo 10 caracteres;
  //   o Email deve possuir uma ocorrência de "@";
  //   o Email deve possuir substring "mail";

  // verifica se o email é válido
  if (strlen(mail) < 10 && strstr(mail, "@") == NULL && strstr(mail, "mail") == NULL)
  {
    printf("Email invalido, digite novamente.\n");
    return 0;
  }

  return 1;
}

// função para verificar a senha
int setPassword(char *password)
{
  // o Senha deve conter no mínimo 5 caracteres;
  // o Senha deve obrigatoriamente possuir pelo menos uma letra minúscula,
  // uma letra maiúscula, um número e um caractere especial;

  // verifica se a senha é válida
  if (strlen(password) < 5 && strstr(password, 'a-z') == NULL && strstr(password, 'A-Z') == NULL && strstr(password, '0-9') == NULL && strstr(password, '!@#$%&*'))
  {
    printf("Senha invalida, digite novamente.\n");
    return 0;
  }

  return 1;
}

// função para calcular a média de idade
int ageMedia(int *age)
{
  int media = 0;

  for (int i = 0; i < 10; i++)
  {
    media += age[i];
  }

  media = media / 10;

  return media;
}

// função para retornar os dados
/*
  Seu algoritmo deve retornar:
  * uma lista com todas as pessoas;
  * uma lista para pessoas menores de idade;
  * uma lista para pessoas maiores de idade;
  * pessoa mais jovem;
  * pessoa mais velha;
  * média de idade das pessoas cadastradas;
*/
int returnData(char *name, int *age, char *mail, char *password)
{
  // variáveis
  int menorIdade = 0;
  int maiorIdade = 0;
  int mediaIdade = 0;

  // lista com todas as pessoas
  printf("Lista com todas as pessoas:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Nome: %s", name[i]);
    printf("Idade: %d", age[i]);
    printf("Email: %s", mail[i]);
    printf("Senha: %s", password[i]);
  }

  // lista para pessoas menores de idade
  printf("Lista para pessoas menores de idade:\n");
  for (int i = 0; i < 10; i++)
  {
    if (age[i] < 18)
    {
      printf("Nome: %s", name[i]);
      printf("Idade: %d", age[i]);
      printf("Email: %s", mail[i]);
      printf("Senha: %s", password[i]);
    }
  }

  // lista para pessoas maiores de idade
  printf("Lista para pessoas maiores de idade:\n");
  for (int i = 0; i < 10; i++)
  {
    if (age[i] >= 18)
    {
      printf("Nome: %s", name[i]);
      printf("Idade: %d", age[i]);
      printf("Email: %s", mail[i]);
      printf("Senha: %s", password[i]);
    }
  }

  // pessoa mais jovem
  menorIdade = age[0];
  for (int i = 0; i < 10; i++)
  {
    if (age[i] < menorIdade)
    {
      menorIdade = age[i];
    }
  }

  printf("Pessoa mais jovem:\n");
  for (int i = 0; i < 10; i++)
  {
    if (age[i] == menorIdade)
    {
      printf("Nome: %s", name[i]);
      printf("Idade: %d", age[i]);
      printf("Email: %s", mail[i]);
      printf("Senha: %s", password[i]);
    }
  }

  // pessoa mais velha
  maiorIdade = age[0];
  for (int i = 0; i < 10; i++)
  {
    if (age[i] > maiorIdade)
    {
      maiorIdade = age[i];
    }
  }

  printf("Pessoa mais velha:\n");
  for (int i = 0; i < 10; i++)
  {
    if (age[i] == maiorIdade)
    {
      printf("Nome: %s", name[i]);
      printf("Idade: %d", age[i]);
      printf("Email: %s", mail[i]);
      printf("Senha: %s", password[i]);
    }
  }

  // média de idade das pessoas cadastradas
  mediaIdade = ageMedia(age);

  printf("Média de idade das pessoas cadastradas: %d", mediaIdade);

  return 1;
}
