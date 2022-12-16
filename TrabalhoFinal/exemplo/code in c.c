#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

/*
	[] - receba o nome do usuário
	[] - receba a idade do usuário
	
	[] - receba o e-mail do usuário
	[] - receba a senha do usuário
	
	1. o nome deve ser maior que 5 
	2. a idade deve ser maior que zero e menor que 100
	3. o email deve conter: 
		 a. "@"
		 b. "mail"
  4. a senha deve conter caracter especial, ser maior que 5, conter letra maiuscula e minuscula.
*/

void reciveName();
void reciveAge();
void reciveEmail();
void recivePassword();

// main function
int main()
{
	reciveName();
	reciveAge();
}

void reciveName()
{
	char name[100];
	
	printf("Digite seu nome: ");
	fgets(name, 100, stdin);
	
	printf("nome inserido: %s", name);
}

void reciveAge()
{
	int age[100], i;
	
	printf("Digite sua idade: ");
	scanf("%d", &age[i]);
	
	printf("idade inserido: %i", age);
//}

