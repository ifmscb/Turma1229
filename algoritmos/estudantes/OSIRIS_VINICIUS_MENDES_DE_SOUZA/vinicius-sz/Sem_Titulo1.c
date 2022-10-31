#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>



int main(){
	void hello();
	
	hello();
	
}

void hello(){
	bool verificaMaiusculo(char l);
	char letra;
	
	printf("Digite uma letra\n");
	scanf("%c", &letra);
	
	printf("resultado da funcao: %i", verificaMaiusculo(letra));
}

bool verificaMaiusculo(char l){
	if(l >= 'a' && l <= 'z'){
		printf("Letra minuscula \n");
		return false;
	}
	else if(l >= 'A' && l <= 'Z'){
		printf("Letra maiuscula \n");
		return true;
	}
}