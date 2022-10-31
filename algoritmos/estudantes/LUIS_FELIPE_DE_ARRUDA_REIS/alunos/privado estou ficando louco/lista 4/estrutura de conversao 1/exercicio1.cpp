#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
   float salario, parcela, valorEmprestimo, juros, valorLiberado;
   float const texaJuros = 0.15;
   
   

   	printf("digite seu salario \n");
   	scanf("%f", &salario);
   	
   	parcela=salario*0.30;
   	
   	
   	if(parcela >=100){
	
	
    
    
     printf("seja bem-vindo,vamos fazer seu emprestimo\n");
     printf("salario:%.2f \n",salario);
     printf("valor da parcela:%.2f \n",parcela);
     
    valorEmprestimo =parcela * 36;
    juros = valorEmprestimo * 0.15;
    valorLiberado = valorEmprestimo - juros;
    
    printf("valor do contrato: %.2f \n",valorEmprestimo);
    printf("juros do contrato: %.2f \n",juros);
    printf("valor liberado:%.2f \n",valorLiberado);
    }
    
	if (parcela >= 0 && parcela <100) 
	{
	printf("voce nao pode fazer o emprestimo \n");
	}
	
	   
}

    

