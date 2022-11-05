#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){
 int populacaoA = 50000, populacaoB = 70000;
 int crescimentoA = 0, crescimentoB = 0, age = 0;
 
 while(populacaoA < populacaoB){
 	crescimentoA = populacaoA * 0.03;
 	crescimentoB = populacaoB * 0.02;
 	
 	populacaoA += crescimentoA;
 	populacaoB += crescimentoB;
 	
 	age++;
 }  
 printf("Levou %i anos para ocorrer", age);
}
