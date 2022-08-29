#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	int m, f1,f2,f3;

	printf("Idade mae 1: ");
  scanf("%i",&m );
  
	printf("Idade Filho 1: ");
  scanf("%i",&f1 );

  printf("Idade Filho 2: ");
  scanf("%i",&f2 );
  
  if(m > 0  && f1 > 0 && f2 > 0){
	
	int calc = m - (f1 + f2);
	
	printf("Idade Filho 3: %i\n", calc);
	
	if(f1 > f2 && calc < f1){
		printf(" Filho 1 e o mais velho \n");
	}
	else if (f2 >f1 && calc < f2)
	{
		printf("Filho 2 e o mais velho \n");
	}
	else if(calc > f1 && f2)
	{
		printf("Filho 3 e o mais velho \n");
	}
	
 }
 else{
 	printf("ERROR @*!");
 }
  	
	


}
