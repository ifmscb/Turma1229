#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	int i, quantidade = 0, totalQuantidade = 0;
	float calcMediaMasc, calcMediaFemi;
	int genero, opcao, idade, mediaIdadeMasculine = 0, mediaIdadeFeminine = 0;
	int contadorMasculine = 0, contadorFeminine = 0;
	int contadorExelente = 0, contadorBom = 0, contadorRegular = 0;
	int somaExelente = 0, somaBom = 0, somaRegular = 0, somaIdade = 0;
	int somaMasculine = 0, somaFeminine = 0;

	for (i = 0; i < 2; i++)
	{
		printf("Digite sua idade: ");
		scanf("%i", &idade);

		printf("Selecione seu genero\n");
		printf("1 - Masculine\n");
		printf("2 - Feminine \n");
		scanf("%i", &genero);

		printf("Selecione uma opcao\n");
		printf("1 - Exelente\n");
		printf("2 - Bom \n");
		printf("3 - Regular \n");
		scanf("%i", &opcao);

		// SOMA DAS IDADES
		somaIdade += idade;

		// FILTRO OPCAO DE AVALIACAO
		if (opcao == 1)
		{
			contadorExelente++;
			somaExelente += contadorExelente;
		}
		else if (opcao == 2)
		{
			contadorBom++;
			somaBom += contadorBom;
		}
		else if (opcao == 3)
		{
			contadorRegular++;
			somaRegular += contadorRegular;
		}
		else
		{
			printf("erro");
		}

		// FILTRO GENERO
		if (genero == 1)
		{
			contadorMasculine++;
			somaMasculine += contadorMasculine;
		}
		else if (genero == 2)
		{
			contadorFeminine++;
			somaFeminine += contadorFeminine;

			if (opcao == 1 || opcao == 2)
			{
				quantidade++;
				totalQuantidade += quantidade;

				printf("A quantidade de pessoas do sexo feminino que responderam Excelente ou Bom: %i \n", totalQuantidade);
			}
		}
		else
		{
			printf("erro");
		}
	}
	// calc media
	calcMediaMasc = idade / somaMasculine;
	printf("Media Masculina: %.2f \n", calcMediaMasc);
}
