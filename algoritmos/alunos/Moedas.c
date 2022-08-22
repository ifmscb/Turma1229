#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  float Reais , Franco = 2.75 , libra = 3.15 , dolar = 3.85 , alemao = 1.95;
  int valorDigitado;
  char name[30];

  printf("Digite seu nome: ");
  gets(name);

  printf("Digite a quantia em reais: ");
  scanf("%f", &Reais);
  
  float CalcFranco , CalcLibra , CalcDolar , CalcAlemao;
  
  CalcFranco =   Franco / Reais; 
  CalcLibra = libra / Reais;
  CalcDolar = dolar / Reais;
  CalcAlemao = alemao / Reais;
  
  printf("Qual moeda deseja converter? 1.Franco\n");
  printf("Qual moeda deseja converter? 2.libra\n");
  printf("Qual moeda deseja converter? 3.Dolar\n");
  printf("Qual moeda deseja converter? 4.Alemao\n");
  scanf("%i" , &valorDigitado );
  
  printf("%s \n", name);

  switch(valorDigitado){
  
  case 1 :
  printf("O valor convertido em moedas: %.2f" , CalcFranco); 
  break;
  
  case 2 :
  printf("O valor convertido em moedas: %.2f" , CalcLibra);
  break;
  
  case 3 :
  printf("O valor convertido em moedas : %.2f", CalcDolar);
  break;
  
  case 4 :
  printf("O valor convertido em moedas : %.2f", CalcAlemao);
  break;
  
  default :
  printf("Valor invalido");
  }
}

