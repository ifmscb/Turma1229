#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{  
  int idade , ensinoMedio;
  
  printf("digite sua idade \n");
  scanf("%i" , &idade);
  
  if(idade >= 14 && idade <= 24)
  { 

  	printf("Esta cursando o ensino medio ? 1.Sim \n");
  	scanf("%i" , &ensinoMedio);
  	
  	if(ensinoMedio == 1)
	  {
	  printf("voce pode participar do programa");
	  }
  	else
  {
  		printf("voce não pode participar do programa");
  	}
	  
	  
  }
  else if (idade >= 0 && idade <= 14 || idade > 24 && idade < 100)
  {
  	printf("idade fora do intervalo valido\n");
  	
  }
  else
  {
  	printf("valor invalido");
  	
  }
  
}
