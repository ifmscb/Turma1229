#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
bool verificaTamanho(char copiaEmail[]);
bool verificaArroba(char copiaEmail[]);
bool verificaSubstring(char copiaEmail[]);
bool verificaTamanhoSenha(char copiaSenha[]);
bool verificaMinuscula(char copiaSenha[]);
bool verificaMaiuscula(char copiaSenha[]);
bool verificaNumero(char copiaSenha[]);
bool verificaCaractereEspecial(char copiaSenha[]);
int main()
{
	//declarando strings
	char email[100];
	char senha[50];
	
	//declarando variaveis que recebem resultado das funcoes de email
	bool tamanhoEmail, arrobaEmail, substringMail;
	
	//declarando variaveis que recebem resultado das funcoes de senha
	bool tamanhoSenha, senhaLetraMinuscula, senhaLetraMaiuscula, senhaNumero, senhaCaractere;
	
	//do while para email -> so sai da repeticao se atender todas as condiçoes
	do
	{
		printf("Digite seu email \n");
		fgets(email, 100, stdin);
		
		tamanhoEmail = verificaTamanho(email);
		arrobaEmail = verificaArroba(email);
		substringMail = verificaSubstring(email);
		
	}while(tamanhoEmail == false || arrobaEmail == false || substringMail == false);
	
	//do while para senha -> so sai da repeticao se atender todas as condiçoes
	do
	{
		printf("Digite sua senha: ");
		fgets(senha, 50, stdin);
		
		tamanhoSenha = verificaTamanhoSenha(senha);
		senhaLetraMinuscula = verificaMinuscula(senha);
		senhaLetraMaiuscula = verificaMaiuscula(senha);
		senhaNumero = verificaNumero(senha);
		senhaCaractere = verificaCaractereEspecial(senha);
		
	}while(tamanhoSenha == false || 
	senhaLetraMinuscula == false || 
	senhaLetraMaiuscula == false ||
	senhaNumero == false ||
	senhaCaractere == false
	);
	
	system("cls");
	printf("Email validado \n Email digitado: %s \n", email);
	printf("Senha valida \n Senha: %s \n", senha);
}

bool verificaTamanho(char copiaEmail[])
{
	int tamanho = strlen(copiaEmail) - 1;
	
	if(tamanho >= 5)
	{
		printf("Tamanho valido %i\n", tamanho);
		return true;
	}
	else
	{
		printf("Tamanho invalido %i\n", tamanho);
		return false;
	}
}

bool verificaArroba(char copiaEmail[])
{
	int i;
	int tamanho = strlen(copiaEmail) - 1;
	
	for(i = 0; i < tamanho; i++)
	{
		if(copiaEmail[i] == '@')
		{
			printf("Encontrei o arroba \n");
			return true;
		}
	}
	
	printf("Nao encontramos o arroba \n");
	return false;
}

bool verificaSubstring(char copiaEmail[])
{
	int i;
	int tamanho = strlen(copiaEmail) - 1;
	
	for(i = 0; i < tamanho; i++)
	{
		if(copiaEmail[i] == 'm' &&
		copiaEmail[i+1] == 'a' &&
		copiaEmail[i+2] == 'i' &&
		copiaEmail[i+3] == 'l')
		{
			printf("Encontrei a substring mail \n");
			return true;
		}
		else
		{
			printf("Nao encontrei a substring mail \n");
		}
	}
	
	return false;
}

bool verificaTamanhoSenha(char copiaSenha[])
{
	int tamanho = strlen(copiaSenha) - 1;
	
	if(tamanho >= 8)
	{
		printf("Tamanho valido %i \n", tamanho);
		return true;
	}
	else
	{
		printf("Tamanho invalido %i \n", tamanho);
		return false;
	}
}

bool verificaMinuscula(char copiaSenha[])
{
	int i;
	int tamanho = strlen(copiaSenha) - 1;
	
	for(i = 0; i < tamanho; i++)
	{
		if(copiaSenha[i] >= 97 && copiaSenha[i] <= 122)
		{
			printf("Encontrei uma letra minuscula\n");
			return true;
		}
	}
	
	printf("Nao encontrei uma letra minuscula\n");
	
	return false;
	
}

bool verificaMaiuscula(char copiaSenha[])
{
	int i;
	int tamanho = strlen(copiaSenha) - 1;
	
	for(i = 0; i < tamanho; i++)
	{
		if(copiaSenha[i] >= 65 && copiaSenha[i] <= 90)
		{
			printf("Encontrei uma letra maiuscula\n");
			return true;
		}
	}
	
	printf("Nao encontrei uma letra maiuscula\n");
	
	return false;
}

bool verificaNumero(char copiaSenha[])
{
	int i;
	int tamanho = strlen(copiaSenha) - 1;
	
	for(i = 0; i < tamanho; i++)
	{
		if(copiaSenha[i] >= 48 && copiaSenha[i] <= 57)
		{
			printf("Encontrei um numero\n");
			return true;
		}
	}
	
	printf("Nao encontrei um numero\n");
	
	return false;
}

bool verificaCaractereEspecial(char copiaSenha[])
{
		int i;
	int tamanho = strlen(copiaSenha) - 1;
	
	for(i = 0; i < tamanho; i++)
	{
		if(copiaSenha[i] == '@' || copiaSenha[i] == '!' || copiaSenha[i] == ';')
		{
			printf("Encontrei um caractere especial %c\n", copiaSenha[i]);
			return true;
		}
	}
	
	printf("Nao encontrei um caractere especial \n");
	
	return false;
}





