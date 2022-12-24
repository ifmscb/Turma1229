#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int Numeros()
{
	int i, valor1;
	int valor[2];

	for (i = 0; i < 3; i++)
	{
		printf("Digite um numero\n");
		scanf("%i", &valor[i]);
	}

	if (valor[0] > valor[1] && valor[0] > valor[2])
	{
		printf("Maior e %i", valor[0]);
	}

	else if (valor[1] > valor[0] && valor[1] > valor[2])
	{
		printf("Maior e %i", valor[1]);
	}

	else if (valor[2] > valor[0] && valor[2] > valor[1])
	{
		printf("Maior e %i", valor[2]);
	}
}

int main()
{
	Numeros();
}
