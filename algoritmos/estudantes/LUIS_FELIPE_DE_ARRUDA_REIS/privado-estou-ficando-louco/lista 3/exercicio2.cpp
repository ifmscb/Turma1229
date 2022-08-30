#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	int VarA , VarB , Aux;
	printf("Digite o valor de A:");
	scanf("%i", &VarA);
	printf("Digite o valor de B:");
	scanf("%i" ,&VarB);
	
	Aux=VarA;
	VarA=VarB;
	VarB=Aux;
	
	printf("O troca de valores de A para B e : %i \n" , VarA);
	printf("O troca de valores de B para A e : %i\n" , Aux);
  
  
  } 
