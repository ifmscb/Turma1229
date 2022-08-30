#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <conio.h> 

int main()
{
int primeiroValor,segundoValor;
printf("digite o primeiro valor\n");
scanf("%i",& primeiroValor);

printf("digite o segundo valor\n");
scanf("%i",& segundoValor);

if(12-7>primeiroValor && 13-segundoValor>=27){
    if(primeiroValor*segundoValor>0){
        printf("jogo1");

    } else{
        printf("jogo 2");
    }

}   else if(primeiroValor*segundoValor>0){
    printf("jogo3");
    }
    else{
         printf("jogo 4");
    } 
   
        
         
}



  
