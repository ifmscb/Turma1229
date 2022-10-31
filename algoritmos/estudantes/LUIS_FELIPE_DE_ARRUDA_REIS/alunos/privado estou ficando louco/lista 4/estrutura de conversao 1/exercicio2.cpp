#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  
 float const franco =2.75;
 float const libra = 3.15;
 float const dolar = 3.85;
 float const marco = 1.95;
 
 
 float valorReais, valorConvertido;
 int opcao;
 printf ("digite o valor em reais para conversao \n");
 scanf("%f", & valorReais);
 if(valorReais >=0)
 {
 	
 	printf("digite o numero da conversao \n");
 	printf("1. Franco suico \n");
 	printf("2. Libra esterlina \n");
 	printf("3. Dolar americano \n");
 	
 	if (opcao==1)
 	{
 		valorConvertido = valorReais / franco;
	 }
 	 else if(opcao == 2)
 	 {
 	 	valorConvertido = valorReais /libra;
	  }
 	
 	
 	
 	
 	
 }
 
 

}

    

