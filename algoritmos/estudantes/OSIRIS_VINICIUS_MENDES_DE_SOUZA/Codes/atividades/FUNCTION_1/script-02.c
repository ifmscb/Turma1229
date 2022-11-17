#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	void hello();

	hello();
}

void hello()
{
	system("cls");

	bool verificaMaiusculo(char l);
	char letra;

	printf("Digite uma letra: ");
	scanf("%c", &letra);

	verificaMaiusculo(letra);
}

bool verificaMaiusculo(char l)
{
	if (l >= 'a' && l <= 'z')
	{
		printf("Letra Inserida: minuscula \n");
	}
	else if (l >= 'A' && l <= 'Z')
	{
		printf("Letra Inserida: maiuscula \n");
	}
}