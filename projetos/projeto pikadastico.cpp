#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	// creditos by luizinho q me ajudou com essa poha 
	char nome [30];
	int numero;
	printf(" DIAS DA SEMANA :\n");
	printf("  DOMINGO -> 1 \n");
	printf("  SEGUND-FEIRA -> 2 \n ");
	printf(" TERCA-FEIRA -> 3 \n ");
	printf(" QUARTA-FEIRA -> 4 \n ");
	printf(" QUINTA-FEIRA -> 5 \n ");
	printf(" SEXTA-FEIRA -> 6 \n ");
	printf(" SABADO -> 7 \n ");
	
	
	printf(" me diga seu  mome: \n ");
	scanf("%s", &nome);

	printf(" digite o o numero do dia da semana:\n ");
	scanf("%i", &numero);
	
	printf (" aqui esta sr(a) %s \n \n", nome);
	if ( numero == 1 )
	{
		printf(" dia do descanso.");
	}
	else if ( numero == 2 )
	{
		printf(" Seu Cronograma do dia: \n * 7:00-9:15 --> Construcao de algoritmos - (Laboratorio C)\n\n * 9:15-9:30 --> Intervalo\n\n * 9:30-11:00 --> Administracao e Estrutura organizacional - (Laboratorio C) \n \n Boa aula ;) ");
	}
	else if ( numero == 3 )
	{
		printf(" Seu Cronograma do dia: \n * 7:00-8:30 --> Matematica aplicada - (Sala 14)\n\n * 8:30-9:15 --> Sistemas de informacao - (Laboratorio C)\n\n * 9:15-9:30 --> Intervalo\n\n * 9:30-10:15 --> Sistemas de informacao - (Laboratorio C) \n \n Boa aula ;) ");
	}
	else if ( numero == 4 )
	{
		printf(" Seu Cronograma do dia: \n * 7:00-8:30 --> Administracao e Estrutura organizacional - (Laboratorio C)\n\n * 8:30-9:15 --> Introducao a tecnologia da computacao - (Sala 14)\n\n * 9:15-9:30 -->intervalo\n\n * 9:30-10:15 --> Introducao a tecnologia da computacao - (Sala 14) \n \n Boa aula ;) ");
	}
	else if ( numero == 5 )
	{
		printf(" Seu Cronograma do dia: \n * 7:00-8:30 --> Matematica aplicada - (Sala 14)\n\n * 8:30-9:15 Introducao a tecnologia da computacao - (Sala 14) \n\n * 9:15-9:30 Inteveralo\n\n * 9:30-10:15 --> Introducao a tecnologia da computacao - (Sala 14) \n \n Boa aula ;) ");
	}
	else if ( numero == 6 )
	{
		printf(" Seu Cronograma do dia: \n * 7:00-9:15 --> Construcao de algoritmos - (Laboratorio C)\n\n * 9:15-9:30 --> Intervalo\n\n * 9:30-11:00 --> Ingles tecnico - (Laboratorio C) \n \n Boa aula ;) ");
	}
	else if ( numero == 7 )
	{
		printf("Dia de role baby");
	}
	else 
	{
		printf("\n digitou errado, VOLTE PARA O ENSINO MEDIO ja que nao sabe ler ");
	}
	
}	

