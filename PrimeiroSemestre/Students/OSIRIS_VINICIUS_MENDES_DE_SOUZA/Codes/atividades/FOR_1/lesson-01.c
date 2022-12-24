#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	float salario, totalArrecadado, inss = 0;
	int i;

	for (i = 0; i < 5; i++)
	{

		printf("%i - Digite seu salario: ", i);
		scanf("%f", &salario);

		if (salario > 0 && salario < 600)
		{
			printf("Isento \n");
		}
		else if (salario >= 600 && salario < 1500)
		{
			inss = salario * 10;
			printf("10 por cento \n");
		}
		else if (salario >= 1500)
		{
			inss = salario * 15;
			printf("15 por cento \n");
		}
		else
		{
			printf("Valor Invalido");
		}
	}
	totalArrecadado += inss;
	printf("Total Arrecadado: %.2f", totalArrecadado);
}
