#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

/*
	[] - receba o nome do usu�rio
	[] - receba a idade do usu�rio

	[] - receba o e-mail do usu�rio
	[] - receba a senha do usu�rio

	1. o nome deve ser maior que 5
	2. a idade deve ser maior que zero e menor que 100
	3. o email deve conter:
		 a. "@"
		 b. "mail"
	4. a senha deve conter caracter especial, ser maior que 5, conter letra maiuscula e minuscula.
*/

void data(void);

int main()
{
	setlocale(LC_ALL, "Portuguese");

	data();

	return 0;
}

void data(void)
{
	char name[255];
	char email[255];
	char password[255];

	int age = 0;

	do
	{
		printf("Digite seu nome: ");
		fgets(name, 255, stdin);

		if (strlen(name) < 5)
		{
			printf("O nome deve conter mais de 5 caracteres.\n");
		}
	} while (strlen(name) < 5);

	do
	{
		printf("Digite sua idade: ");
		scanf("%d", &age);

		if (age < 0 || age > 100)
		{
			printf("A idade deve ser maior que zero e menor que 100.\n");
		}
	} while (age < 0 || age > 100);

	do
	{
		printf("Digite seu email: ");
		fgets(email, 255, stdin);

		if (strstr(email, "@") == NULL || strstr(email, "mail") == NULL)
		{
			printf("O email deve conter \"@\" e \"mail\".\n");
		}
	} while (strstr(email, "@") == NULL || strstr(email, "mail") == NULL);

	do
	{
		printf("Digite sua senha: ");
		fgets(password, 255, stdin);

		if (strlen(password) < 5)
		{
			printf("A senha deve conter mais de 5 caracteres.\n");
		}
		else if (strpbrk(password, "!@#$%&*") == NULL)
		{
			printf("A senha deve conter caracter especial.\n");
		}
		else if (strpbrk(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == NULL)
		{
			printf("A senha deve conter letra maiuscula.\n");
		}
		else if (strpbrk(password, "abcdefghijklmnopqrstuvwxyz") == NULL)
		{
			printf("A senha deve conter letra minuscula.\n");
		}
	} while (strlen(password) < 5 || strpbrk(password, "!@#$%&*") == NULL || strpbrk(password, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") == NULL || strpbrk(password, "abcdefghijklmnopqrstuvwxyz") == NULL);
}
