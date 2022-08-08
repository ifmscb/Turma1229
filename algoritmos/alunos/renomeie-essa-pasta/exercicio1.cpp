// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  float salario, salarioFixo = 1212.00, horasTrabalhadas, salarioBruto, salarioLiquido, inss = 0.2;
  
  printf("quantas horas voce trabalhou ?");
  scanf("%f", & horasTrabalhadas); 
  
  salario = (salarioFixo*0.05)*horasTrabalhadas;
  
  printf("salario %.2f\n", salario);
  
  salarioBruto = horasTrabalhadas * salarioFixo;
  salarioLiquido = salarioBruto*00.2;
  
  printf("Valor pago por hora ----> %.2f\n", salarioFixo);
  printf("Salario Bruto ----> %.2f\n", salarioBruto);
  printf("Salario Liquido --- > %.2f\n ", salarioLiquido);
  
  } 
