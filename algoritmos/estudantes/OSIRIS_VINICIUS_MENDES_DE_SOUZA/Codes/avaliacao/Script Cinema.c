#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	// delaracao variavel
	int i, ageSomaM = 0, ageSomaF = 0, somaOp;
	int controlM = 0, controlF, controlOpEx = 0, controlOpBom = 0, controlOpReg = 0;
	int age = 0, ageM, ageF, sex = 0, op;

	for (i = 0; i < 2; i++)
	{
		// interacao com usuario
		printf("Hello World: Sistema Senhor dos Aneis, %i\n", i);

		printf("Digite sua idade: ");
		scanf("%i", &age);

		printf("Selecione seu genero\n");
		printf("1 - Masculino\n");
		printf("2 - Femiminino\n");
		printf("3 - Outros\n");
		printf("Op: ");
		scanf("%i", &sex);

		printf("Opiniao: Com base no fime Senhor Dos Aneis, qual classificacao o colocaria\n");
		printf("1 - Exelente\n");
		printf("2 - Bom\n");
		printf("3 - Regular\n");
		printf("op: ");
		scanf("%i", &op);

		// quantidade para cada opiniao
		if (sex > 0 && op == 1)
		{
			controlOpEx++;
		}
		else if (sex > 0 && op == 2)
		{
			controlOpBom++;
		}
		else if (sex > 0 && op == 3)
		{
			controlOpReg++;
		}
		else
		{
			printf("hello\n");
		}

		// selecao de genero
		if (sex == 1)
		{
			// caso masculino
			controlM++;
			ageM += age;

			printf("Masculine, %i = \nEx:%i \nBom:%i \nReg:%i \n", controlM, controlOpEx, controlOpBom, controlOpReg);
		}
		else if (sex == 2)
		{
			// caso feminino
			controlF++;
			ageF += age;

			printf("Feminine, %i = \nEx:%i \nBom:%i \nReg:%i \n", controlF, controlOpEx, controlOpBom, controlOpReg);
		}
		if (op == 1 || op == 3)
		{
			somaOp = controlOpEx + controlOpBom;

			printf("A quantidade de mulheres que acharam exelente ou bom: %i \n", somaOp);
		}

		else
		{
			printf("Busque o juridico do Sr Freitas\n");
		}
	}

	// media das idades
	ageM = ageM / controlM;
	ageF = ageF / controlF;

	printf("Media das Idades \n");
	printf("Masculino: %i ", ageM);
	printf("Feminino: %i", ageF);
}
