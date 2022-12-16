#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <time.h>
bool verificaTamanho(char copiaPalavra[]);
bool verificaArroba(char copiaPalavra[]);

int main()
{
	//declarandoed
	char palavra[20];
	int i, tamanho = 0;
	bool arroba = false;
	
	do
	{
		printf("Digite seu nome\n");
		//leitura
		fgets(palavra, 20, stdin);
		
		//varrendo o array
		
		//encontrando caractere	
	}while(verificaTamanho(palavra) == false && 
	verificaArroba(palavra) == false);
	
}

bool verificaTamanho(char copiaPalavra[])
{
	int tamanho = strlen(copiaPalavra) - 1;

		printf("Tamanho da string: %i \n", tamanho);		
		
		if(tamanho >= 8)
		{
			printf("Tamanho valido\n");
			return true;
		}
		else
		{
			printf("Tamanho invalido, digite novamente\n");
			return false;
		}
}

bool verificaArroba(char copiaPalavra[])
{
	int tamanho = strlen(copiaPalavra);
	int i;
	
	for(i = 0; i < tamanho; i++)
	{
		if(copiaPalavra[i] == '@')
		{
			printf("Achei o arroba\n");
			return true;
		}
		else
		{
			printf("Nao eh o arroba\n");
		}
	}
	
	return false;	
}
