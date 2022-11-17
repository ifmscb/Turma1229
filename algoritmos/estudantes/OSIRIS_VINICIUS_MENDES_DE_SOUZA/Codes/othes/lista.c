#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <locale.h>

void main()
{
	void welcome(void);

	welcome();
}

void welcome(void)
{

	char op[1];
	system("cls");
	setlocale(LC_ALL, "Portuguese");

	do
	{
		printf("Digite um dos c�digos abaixo \n");
		printf("| L � limpeza \n");
		printf("| A � alimenta��o \n");
		printf("| H � higiene \n ");
		printf("Digite @ para sair. \n");
		printf("Op��o Selecionada: ");
		scanf("%s", &op);

		if (op == 'L' || op == 'l')
		{
		}
		else if (op == 'L' || op == 'l')
		{
		}
		else if (op == 'L' || op == 'l')
		{
		}
		else
		{
		}

	} while (op == '@');
}

void produtos()
{
}

void cadL()
{
}

void cadA()
{
}

void cadH()
{
}
