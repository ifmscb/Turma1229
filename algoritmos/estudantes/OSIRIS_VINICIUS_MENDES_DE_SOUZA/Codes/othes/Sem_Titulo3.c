#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main(){
 int age, sex;
 
 printf("Digite sua idade ");
 scanf("%i", &age);
 
 printf("Selecione seu genero: ");
 printf("\n1 - M ");
 printf("\n2 - F \n");
 scanf("%i", &sex);
 
 if(sex == 1){
	printf("M");
	
 } else if(sex == 2){
	printf("F");
	
 }else {
 	printf("erro 404");
 }
 
}
