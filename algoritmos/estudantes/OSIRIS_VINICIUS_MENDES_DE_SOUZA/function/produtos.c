#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

float totalVendasDia = 0;
float totalLimpeza = 0;
float totalAlimentos = 0;
float totalHigiene = 0;
int quantidadeTotal = 0, quantidadeLimpeza = 0, quantidadeAlimentos = 0;
int quantidadeHigiene = 0;


float lerPreco()
{
	float preco;
	printf("Digite o preco do produto\n");
	scanf("%f", &preco);
	
	return preco;
}

float lerQuantidade(){
	int quantidade;
	
	printf("Digite a quantidade\n");
	scanf("%i", &quantidade);
	
	return quantidade;
}

void produtoLimpeza(){
	system("cls");
	int quantidade;
	
	quantidade = lerQuantidade();
	quantidadeLimpeza += quantidade;
	totalLimpeza += lerPreco() * quantidade;
}

produtoAlimentacao(){
	system("cls");
	int quantidade;
	
	quantidade = lerQuantidade();
	quantidadeAlimentos+= quantidade;
	totalAlimentos+= lerPreco() * quantidade;
}

produtoHigiene(){
	system("cls");
	int quantidade;
	
	quantidade = lerQuantidade();
	quantidadeHigiene += quantidade;
	totalHigiene += lerPreco() * quantidade;
}

void MenuPrincipal(){
	char letra1 = 'A';

	do {
		printf("---------------Menu Principal---------------\n");
		printf("Digite a opcao desejada\n");
		printf("L - Produto de Limpeza\n");
		printf("A - Produto de Alimentacao\n");
		printf("H - Produto de Higiene\n");
		scanf("%c", &letra1);
		
		if(letra1 == 'L' || letra1 == 'l') {
			printf("Produto de limpeza\n");
			produtoLimpeza();
		} else if(letra1 == 'A' || letra1 == 'a') {
			printf("Produto de Alimentacao \n");
			//produtoAlimentacao();
		} else if(letra1 == 'H' || letra1 == 'h') {
			printf("Produto de higiene\n");
			//produtoHigiene();
		} else if(letra1 == '@') {
			
		}
	} while(letra1 != '@');
	
}

int main() {
	MenuPrincipal();
}
