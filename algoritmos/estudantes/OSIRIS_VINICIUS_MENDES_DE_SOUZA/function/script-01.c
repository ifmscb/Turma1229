#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int divisor(int x, int y)
{
	int r, divisao, quantidade = 0;

	if(x > y && x % y == 0)
	{
		do
		{
			if(quantidade == 0)
			{
				divisao = x / y;
				r = x % y;
			
				if(r == 0)
				{
					quantidade++;	
				}
			}
			else
			{
				r = divisao % y;
				divisao = divisao / y;
			
				if(r == 0)
				{
					quantidade++;
				}
			}
		}while(r == 0);
		
		return quantidade;
	}
	else
	{
		return 0;
	}

}

int main()
{
	int num1, num2, quantidade;
	
	printf("Digite o 1 numero:\n");
	scanf("%i", &num1);
	
	printf("Digite o 2 numero:\n");
	scanf("%i", &num2);
	
	quantidade = divisor(num1, num2);
	
	printf("%i", quantidade);	
}