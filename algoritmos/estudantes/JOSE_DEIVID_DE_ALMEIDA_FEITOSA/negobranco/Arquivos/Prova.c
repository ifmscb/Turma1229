#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	int NumeroMoedas , CapitaoAmerica , Marinheiro , Festa = 6; 
	int calcManu , calcCapitao;
	printf("O numero de moedas na arca e :");
	scanf("%i", &NumeroMoedas);
	printf("O numero de marinheiros na arca e :");
	scanf("%i", &Marinheiro);
	
     int calcArca= NumeroMoedas/(Marinheiro+2) ;
	printf("Cada marinheiro recebe %i moedas\n ",calcArca );
	
	 calcCapitao = calcArca*2;
	printf("O capitao deveria receber %i moedas\n", calcCapitao);
	 
	 if(calcArca > 20 )
	 {
	  printf("Sera possivel realizar a festa no navio\n");
	  
	 }
	 else if (calcArca < 20)
	 {
	 	printf("Nao sera possivel realizar a festa no navio\n");
	 }
	 if(calcCapitao < 6)
	 {
	 	printf("Nao sera possivel realizar a manutencao no navio\n");
	 }
	
	  if(calcCapitao>=6)
	 {
	 	printf("O capitao ira realizar a manutencao no navio \n");
	 	
	 }
	 if(calcCapitao>=6)
	 {
	 	calcManu= calcCapitao - 6;
	 	printf("O saldo final do capitao com a manutencao sera de: %i\n" , calcManu);
	 }
	 
	 
	 
	
	
	
		

	
	

}

