 #include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  int portP, portR;
   
   while(true)
   {
   
   printf("digite o valor da porta P \n");
   scanf("%i", & portP);
   
   printf("digite o valor da porta R \n");
   scanf("%i", &portR);
   
   	
   
     if((portP !=0 && portR!=0) && (portP !=1 || portR !=1))
     {
     		
      if(portP==0)
	{
    printf("porta C \n");	
	}

	
	}
		else if (portP== 1 && portR==0)
		{
		printf("porta B \n"); 
		} 
		
        else if(portP==1 && portR==1)
		{
			printf("porta A \n");	
		}
		else
		{
		}
	}
}
		
