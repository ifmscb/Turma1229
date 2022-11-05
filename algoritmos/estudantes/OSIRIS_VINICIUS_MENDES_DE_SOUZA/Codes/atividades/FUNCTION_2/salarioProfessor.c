#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
float const salarioMinimo = 1500.00;
float const valorPagoPorHora = salarioMinimo * 0.05;

float calculaSalarioBruto(int quantidadeHoras)
{
	float salarioBruto;
	salarioBruto = quantidadeHoras * valorPagoPorHora;
	return salarioBruto;
}

float calculaDescontoInss(float salarioBruto)
{
	float inss;
	inss = salarioBruto * 0.02;
	return inss;
}

float calculaSalarioLiquido(float salarioBruto, float descontoInss)
{
	float salarioLiquido;
	
	salarioLiquido = salarioBruto - descontoInss;
	
	return salarioLiquido;
}

void menu()
{
	int opcao, horas;
	float salarioBruto, descontoInss, salarioLiquido;
	
	printf("-----------Calcula Salario Professor-----------\n");
	printf("1. Para calcular seu salario\n");
	printf("2. Para sair \n");
	
	scanf("%i", &opcao);

	
	if(opcao ==1)
	{
		system("cls");
		printf("Digite a quantidade de horas trabalhadas\n");
		scanf("%i", &horas);
		
		salarioBruto = calculaSalarioBruto(horas);
		printf("Salario Bruto %.2f \n", salarioBruto);
		
		descontoInss = calculaDescontoInss(salarioBruto);
		printf("Desconto INSS: %.2f \n", descontoInss);
		
		salarioLiquido = calculaSalarioLiquido(salarioBruto, descontoInss);
		printf("Salario Liquido: %.2f \n", salarioLiquido);
		
	}
	else if(opcao == 2)
	{
		printf("saindo da aplicacao \n");	
	}	
}

int main()
{
	menu();
}