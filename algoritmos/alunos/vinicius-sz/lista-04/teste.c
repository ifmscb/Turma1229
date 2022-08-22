#include <stdio.h>
// Curso C Progressivo: www.cprogessivo.net
// O melhor curso de C! Online e gratuito !
// Apostila online, tutorial completo sobre
// a linguagem de programação C !
 
int main(void)

{
    char nome[31], sobrenome[31], nascimento[11];
    int idade;
 
    printf("Nome: ");
    gets(nome);
 
    printf("Sobrenome: ");
    gets(sobrenome);
 
    printf("Idade: ");
    scanf("%d", &idade);
 
    fflush(stdin);
    system("clear");
    
 
    printf("Data de nascimento: ");
    gets(nascimento);
 
    printf("\nNome completo: %s %s\n", nome, sobrenome);
    printf("Idade: %d\n", idade);
    printf("Data de nascimento: "); puts(nascimento);
    return 0;
    system("cls");

}