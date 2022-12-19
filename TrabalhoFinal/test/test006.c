#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  char name[255];
  char email[255];
  char password[255];

  int age = 0;

  do
  {
    printf("Digite seu nome: ");
    fgets(name, 255, stdin);

    if (strlen(name) < 5)
    {
      printf("O nome deve conter mais de 5 caracteres.\n");
      printf("Nome digitado: %s", name);
    }
  } while (strlen(name) < 5);

  do
  {
    printf("Digite sua idade: ");
    scanf("%d", &age);

    if (age < 0 || age > 100)
    {
      printf("A idade deve ser maior que zero e menor que 100.\n");
      printf("Idade digitada: %d", age);
    }
  } while (age < 0 || age > 100);

  do
  {
    printf("Digite seu e-mail: ");
    fgets(email, 255, stdin);

    if (strstr(email, "@") == NULL || strstr(email, "mail") == NULL)
    {
      printf("O e-mail deve conter \"@\" e \"mail\".\n");
    }
  } while (strstr(email, "@") == NULL || strstr(email, "mail") == NULL);

  do
  {
    printf("Digite sua senha: ");
    fgets(password, 255, stdin);

    if (strlen(password) < 5)
    {
      printf("A senha deve conter mais de 5 caracteres.\n");
    }
    else if (strstr(password, " ") != NULL)
    {
      printf("A senha não deve conter espaços.\n");
    }
    else if (strstr(password, "!") == NULL &&
             strstr(password, "@") == NULL &&
             strstr(password, "#") == NULL &&
             strstr(password, "$") == NULL &&
             strstr(password, "%") == NULL &&
             strstr(password, "&") == NULL &&
             strstr(password, "*") == NULL &&
             strstr(password, "(") == NULL &&
             strstr(password, ")") == NULL &&
             strstr(password, "-") == NULL &&
             strstr(password, "_") == NULL &&
             strstr(password, "+") == NULL &&
             strstr(password, "=") == NULL &&
             strstr(password, "[") == NULL &&
             strstr(password, "]") == NULL &&
             strstr(password, "{") == NULL &&
             strstr(password, "}") == NULL &&
             strstr(password, ";") == NULL &&
             strstr(password, ":") == NULL &&
             strstr(password, "'") == NULL &&
             strstr(password, "\"") == NULL &&
             strstr(password, ",") == NULL &&
             strstr(password, ".") == NULL &&
             strstr(password, "<") == NULL &&
             strstr(password, ">") == NULL &&
             strstr(password, "?") == NULL &&
             strstr(password, "/") == NULL &&
             strstr(password, "\\") == NULL)
    {
      printf("A senha deve conter pelo menos um caractere especial.\n");
    }
    else if (strstr(password, "0") == NULL && strstr(password, "1") == NULL && strstr(password, "2") == NULL && strstr(password, "3") == NULL && strstr(password, "4") == NULL && strstr(password, "5") == NULL && strstr(password, "6") == NULL && strstr(password, "7") == NULL && strstr(password, "8") == NULL && strstr(password, "9") == NULL)
    {
      printf("A senha deve conter pelo menos um número.\n");
    }
    else if (strstr(password, "a") == NULL && strstr(password, "b") == NULL && strstr(password, "c") == NULL && strstr(password, "d") == NULL && strstr(password, "e") == NULL && strstr(password, "f") == NULL && strstr(password, "g") == NULL && strstr(password, "h") == NULL && strstr(password, "i") == NULL && strstr(password, "j") == NULL && strstr(password, "k") == NULL && strstr(password, "l") == NULL && strstr(password, "m") == NULL && strstr(password, "n") == NULL && strstr(password, "o") == NULL && strstr(password, "p") == NULL && strstr(password, "q") == NULL && strstr(password, "r") == NULL && strstr(password, "s") == NULL && strstr(password, "t") == NULL && strstr(password, "u") == NULL && strstr(password, "v") == NULL && strstr(password, "w") == NULL && strstr(password, "x") == NULL && strstr(password, "y") == NULL && strstr(password, "z") == NULL)
    {
      printf("A senha deve conter pelo menos uma letra minúscula.\n");
    }
    else if (strstr(password, "A") == NULL && strstr(password, "B") == NULL && strstr(password, "C") == NULL && strstr(password, "D") == NULL && strstr(password, "E") == NULL && strstr(password, "F") == NULL && strstr(password, "G") == NULL && strstr(password, "H") == NULL && strstr(password, "I") == NULL && strstr(password, "J") == NULL && strstr(password, "K") == NULL && strstr(password, "L") == NULL && strstr(password, "M") == NULL && strstr(password, "N") == NULL && strstr(password, "O") == NULL && strstr(password, "P") == NULL && strstr(password, "Q") == NULL && strstr(password, "R") == NULL && strstr(password, "S") == NULL && strstr(password, "T") == NULL && strstr(password, "U") == NULL && strstr(password, "V") == NULL && strstr(password, "W") == NULL && strstr(password, "X") == NULL && strstr(password, "Y") == NULL && strstr(password, "Z") == NULL)
    {
      printf("A senha deve conter pelo menos uma letra maiúscula.\n");
    }

  } while (strlen(password) < 5 || strstr(password, " ") != NULL || strstr(password, "!") == NULL && strstr(password, "@") == NULL && strstr(password, "#") == NULL && strstr(password, "$") == NULL && strstr(password, "%") == NULL && strstr(password, "&") == NULL && strstr(password, "*") == NULL && strstr(password, "(") == NULL && strstr(password, ")") == NULL && strstr(password, "-") == NULL && strstr(password, "_") == NULL && strstr(password, "+") == NULL && strstr(password, "=") == NULL && strstr(password, "[") == NULL && strstr(password, "]") == NULL && strstr(password, "{") == NULL && strstr(password, "}") == NULL && strstr(password, ";") == NULL && strstr(password, ":") == NULL && strstr(password, "'") == NULL && strstr(password, "\"") == NULL && strstr(password, ",") == NULL && strstr(password, ".") == NULL && strstr(password, "<") == NULL && strstr(password, ">") == NULL && strstr(password, "?") == NULL && strstr(password, "/") == NULL && strstr(password, "\\") == NULL || strstr(password, "0") == NULL && strstr(password, "1") == NULL && strstr(password, "2") == NULL && strstr(password, "3") == NULL && strstr(password, "4") == NULL && strstr(password, "5") == NULL && strstr(password, "6") == NULL && strstr(password, "7") == NULL && strstr(password, "8") == NULL && strstr(password, "9") == NULL || strstr(password, "a") == NULL && strstr(password, "b") == NULL && strstr(password, "c") == NULL && strstr(password, "d") == NULL && strstr(password, "e") == NULL && strstr(password, "f") == NULL && strstr(password, "g") == NULL && strstr(password, "h") == NULL && strstr(password, "i") == NULL && strstr(password, "j") == NULL && strstr(password, "k") == NULL && strstr(password, "l") == NULL && strstr(password, "m") == NULL && strstr(password, "n") == NULL && strstr(password, "o") == NULL && strstr(password, "p") == NULL && strstr(password, "q") == NULL && strstr(password, "r") == NULL && strstr(password, " s") == NULL && strstr(password, "t") == NULL && strstr(password, "u") == NULL && strstr(password, "v") == NULL && strstr(password, "w") == NULL && strstr(password, "x") == NULL && strstr(password, "y") == NULL && strstr(password, "z") == NULL || strstr(password, "A") == NULL && strstr(password, "B") == NULL && strstr(password, "C") == NULL && strstr(password, "D") == NULL && strstr(password, "E") == NULL && strstr(password, "F") == NULL && strstr(password, "G") == NULL && strstr(password, "H") == NULL && strstr(password, "I") == NULL && strstr(password, "J") == NULL && strstr(password, "K") == NULL && strstr(password, "L") == NULL && strstr(password, "M") == NULL && strstr(password, "N") == NULL && strstr(password, "O") == NULL && strstr(password, "P") == NULL && strstr(password, "Q") == NULL && strstr(password, "R") == NULL && strstr(password, "S") == NULL && strstr(password, "T") == NULL && strstr(password, "U") == NULL && strstr(password, "V") == NULL && strstr(password, "W") == NULL && strstr(password, "X") == NULL && strstr(password, "Y") == NULL && strstr(password, "Z") == NULL);
  // Verifica se a senha é válida

  printf("Senha válida.\n");

  return 0;
}