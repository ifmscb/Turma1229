#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  system("cls");
  char name[30], cpf[14];
  float sal, maxP = 0.30, maxEmp, juros = 0.15;
  printf("BEM-VINDE AO SISTEMA DE EMPRESTIMO \n");
  printf("Digite seu nome: ");
  scanf("%s", &name);
  printf("Digite seu CPF (000.000.000-00): ");
  scanf("%s", &cpf);
  printf("Digite seu salario bruto(ex: 3000.00): \n");
  scanf("%f", &sal);

  float parcelaMin = sal * maxP;

  if(parcelaMin < 100){
    printf("%s Infelizmente nao possumimos propostas para voce", name);
  } else if(parcelaMin > 100){
    
    maxEmp = (parcelaMin * 36) * juros;
    printf("max: %.2f", maxEmp);
  }
  else{
    printf("operation invalidad");
  }
}
