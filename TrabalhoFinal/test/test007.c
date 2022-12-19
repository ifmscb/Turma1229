#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

/*
  Construa um algoritmo que armazene o nome, a idade, o email e uma senha
  para 10 pessoas. Você deverá:

  Solicitar ao usuário que informe os dados para popular as estruturas com os dados para pessoas. Validar os dados fornecidos de acordo com as seguintes regras:

  Nome deve conter no mínimo 5 caracteres;
  Idade deve ser valor positivo menor que 100;
  Email deve conter no mínimo 10 caracteres;
  Email deve possuir uma ocorrência de "@";
  Email deve possuir substring "mail";
  A Senha deve conter no mínimo 5 caracteres;
  A Senha deve obrigatoriamente possuir pelo menos uma letra minúscula, uma letra maiúscula, um número e um caractere especial;

  Imprimir uma lista com todas as pessoas;
  Imprimir uma lista para pessoas menores de idade;
  Imprimir uma lista para pessoas maiores de idade;
  Imprimir pessoa mais jovem;
  Imprimir pessoa mais velha;
  Imprimir média de idade das pessoas cadastradas;
*/

int setData();

// função principal
int main()
{
  int ageNormal;
  int age[10];
  // for (int i = 0; i < 10; i++)
  // {
  //   setData();
  // }

  scanf("%i", &ageNormal);
  scanf("%i[0]", &age[0]);
  printf("idade: %i", ageNormal);
  printf("idade: %i", age);

  setData();
}

// função para solicitar os dados
int setData()
{
  char name[10][50];
  char mail[10][50];
  char password[10][50];

  int age[10];

  // solicita o nome
  printf("Digite o nome: ");
  fgets(name, 50, stdin);

  printf("Nome: %s", name);

  // solicita a idade
  printf("Digite a idade: ");
  scanf("%i", &age);

  printf("Idade: %i", age);

  // solicita o email
  printf("Digite o email: ");
  fgets(mail, 50, stdin);

  printf("Email: %s", mail);

  // solicita a senha
  printf("Digite a senha: ");
  fgets(password, 50, stdin);

  printf("Senha: %s", password);
}