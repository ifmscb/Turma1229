#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int Numeros()
{
	int i, valor , valor1 , valor2;
	
		printf("Digite numeros inteiros:\n");
		scanf("%i", &valor);
		
		printf("Digite numeros inteiros:\n");
		scanf("%i", &valor1);
		
		printf("Digite numeros inteiros:\n");
		scanf("%i", &valor2);
	
	if(valor > valor1 && valor > valor2)
	{
		printf("O maior valor e %i", valor);
	}
	
	else if (valor1 > valor && valor1 > valor2)
	{
		printf("O maior valor e %i", valor1);
		
	}
	else if (valor2 > valor && valor2 > valor1)
	
	{
		printf("O maior valor e %i", valor2);
	}
	
}

int main()
{
	Numeros();
}	
	

