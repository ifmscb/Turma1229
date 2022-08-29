#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	int p,r;
  printf("A primeira porta P , qual deseja fechar? \n (1) (0): ");
  scanf("%i",&p );
  printf("A segunda porta R , qual deseja fechar? \n (1) (0): ");
  scanf("%i",&r );
  
  if(p == 1 && r == 0)
  {
  	printf("Ira cair no B");
	}
	else if (p == 1 && r == 1 )
	{
		printf("Ira cair na  A");
	}
	else if (p == 0)
	{
		printf("Ira cair no C");
	}
	else
	{
		printf("valor invalido");
	}
	

  
 
  
}
