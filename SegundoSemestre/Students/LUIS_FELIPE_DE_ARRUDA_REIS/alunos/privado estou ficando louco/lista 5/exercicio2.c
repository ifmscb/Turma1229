#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

/*
 A Fundação de Esporte da cidade de Cafundó irá promover um campeonato de futebol 
 para as mais diversas idades de competidores. 
 Escreva um algoritmo que receba a idade de um jogador e imprima a sua categoria 
 segundo a tabela a seguir:
*/

int main()
{
    int idade;
    printf("digite sua idade: ");
    scanf("%f", & idade);

    if (idade <=5 || idade ==7)
    
    { 
      printf("categoria infantil A");
    }
    
    else if(idade >= 8 || idade == 10)
    
    {
      printf("categoria infantil B");
    }
    
    else if(idade == 11 || idade <= 13)
    
    {
      printf("categoria Juvenil A");
    }

    else if(idade == 14 || idade == 17)
    
    {
      printf("categoria juvenil B");
    }
    else if(idade == 18)
    
    {
      printf("adulto");
    }

    else {
        printf("invalido");
    }
}
