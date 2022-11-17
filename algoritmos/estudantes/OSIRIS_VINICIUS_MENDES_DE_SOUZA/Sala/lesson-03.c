#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	int i, final;
	float convertido;
	float const cm = 2.54;

	printf("Digite o valor maximo de conversao\n");
	scanf("%i", &final);

	if (i < final)
	{
		for (i = 1; i <= final; i++)
		{
			convertido = i * cm;
			printf("%i polegadas = %.2f centimetros \n",
						 i,
						 convertido);
		}
	}

	else
	{
		printf("Valor invalido\n");
	}
}
