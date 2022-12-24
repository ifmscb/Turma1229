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
	int verifica(char n);
	char l;

	printf("Digite algo: \n");
	scanf("%s", &l);

	verifica(l);
}

int verifica(char n)
{
	if (n >= 'a' && n <= 'z' || n >= 'A' && n <= 'Z')
	{
		printf("letra");
	}
	else if (n >= 48 && n <= 57)
	{
		printf("numero");
	}
	else
	{
		printf("other");
	}
}
