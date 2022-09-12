#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, sexo, contadorFem = 0, contadorMas = 0, idade;
	float altura, maiorAltura = 0, mediaIdade = 0;

	for (i = 0; i < 5; i++)
	{
		printf("Digite seu sexo: 1. Masculino 2. Feminino\n");
		scanf("%i", &sexo);

		float altura, maiorAltura = 0, mediaIdade = 0;
		printf("Digite sua altura\n");
		scanf("%f", &altura);

		printf("Digite sua idade \n");
		scanf("%i", &idade);

		// quantidade de pessoas de cada sexo
		if (sexo == 1)
		{
			contadorMas++;
		}
		else if (sexo == 2)
		{
			contadorFem++;

			// m�dia de idade dos usu�rios de sexo feminino
			mediaIdade += idade;
		}

		// pessoa mais alta (independente do sexo)
		if (altura > maiorAltura)
		{
			maiorAltura = altura;
		}
	}

	printf("Masculino: %i\n", contadorMas);
	printf("Feminino: %i\n", contadorFem);
	mediaIdade = mediaIdade / contadorFem;
	printf("media idade fem: %f", mediaIdade);
	printf("mais alto: %f", maiorAltura);
}