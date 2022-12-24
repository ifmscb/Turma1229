#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	int const dinheiroEmConta = 5600;
	float const poupanca = 0.09, FI = 0.099, BV = 0.11;
	int valorCarro = 0;
	float v1, v2, v3;

	int mesesPop = 0, mesesFI = 0, mesesBV = 0;

	v1 = dinheiroEmConta;
	v2 = dinheiroEmConta;
	v3 = dinheiroEmConta;

	printf("Digite o valor do carro: ");
	scanf("%i", &valorCarro);

	while (v1 < valorCarro)
	{
		v1 += v1 * poupanca;
		mesesPop++;

		//	 printf("Pop: %f \n", v1);
	}

	while (v2 < valorCarro)
	{
		v2 += (v2 * FI);
		mesesFI++;

		//	 printf("FI: %f \n", v2);
	}

	while (v3 < valorCarro)
	{
		v3 += (v3 * BV);
		mesesBV++;

		//		 printf("BV: %f \n", v3);
	}

	printf("\n");

	printf("risco baixo ==> pop: %.2f \n", v1);
	printf("risco medio ==> fi: %.2f \n", v2);
	printf("risco alto ==> PV: %.2f \n", v3);

	printf("\n");

	printf("meses poupanca: %i \n", mesesPop);
	printf("meses fundos imobiliario: %i \n", mesesFI);
	printf("meses bolsa de valores: %i \n", mesesBV);
}
