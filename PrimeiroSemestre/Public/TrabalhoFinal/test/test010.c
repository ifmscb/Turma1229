#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

void SetName();
void SetEmail();
void SetPassword();
void SetAge();

char password[50];

bool verifyPassword(char *password);

bool letraMinuscula(char *password);
bool letraMaiuscula(char *password);
bool contemNumero(char *password);
bool tamanhoValido(char *password);
bool contemCaracterEspecial(char *password);

void Impress();

int main()
{
  Impress();
}

// guardar um nome
void SetName()
{
  char name[30];

  printf("Digite seu nome: ");
  fgets(name, 30, stdin);

  printf("Nome digitado: %s", name);
  // verifica se o nome e valido
  if (strlen(name) < 5)
  {
    printf("Nome invalido, digite novamente.\n");
    SetName();
  }
}

// guardar um email
void SetEmail()
{
  char email[30];

  printf("Digite seu email: ");
  fgets(email, 30, stdin);

  printf("Seu e-mail: %s", email);

  // verifica se o email e valido
  if (strlen(email) < 10)
  {
    printf("Email invalido, tamanho insuficiente digite novamente.\n");
    SetEmail();
  }
  else if (strstr(email, "@") == NULL)
  {
    printf("Email invalido '@' nao encontrado, digite novamente.\n");
    SetEmail();
  }
  else if (strstr(email, "mail") == NULL)
  {
    printf("Email invalido, o final deve ser 'mail' digite novamente.\n");
    SetEmail();
  }
}

// guardar uma senha
void SetPassword()
{

  printf("Digite sua senha: ");
  fgets(password, 50, stdin);

  printf("Sua senha: %s", password);

  if (verifyPassword(password) == false)
  {
    printf("Senha invalida, digite novamente. B\n");
    SetPassword();
  }
  else
  {
    printf("Senha valida. B\n");
  }
}

// guardar uma idade
void SetAge()
{
  int age;

  printf("Digite sua idade: ");
  scanf("%i", &age);

  printf("Sua idade: %i", age);

  // verifica se a idade e valida
  if (age < 0 || age > 100)
  {
    printf("Idade invalida, digite novamente.\n");
    SetAge();
  }
}

bool tamanhoValido(char *password)
{
  printf("tamanho recebi %s", password);

  if (strlen(password) < 5)
  {
    printf("Senha invalida, tamanho insuficiente digite novamente.\n");
    // tamanhoValido = false;
    return false;
  }
  else
  {
    return true;
  }
}

bool letraMinuscula(char *password)
{
  printf("letra minusculas recebi %s ", password);

  // verifica se a senha possui letras minusculas
  if (strstr(password, "a") != NULL ||
      strstr(password, "b") != NULL ||
      strstr(password, "c") != NULL ||
      strstr(password, "d") != NULL ||
      strstr(password, "e") != NULL ||
      strstr(password, "f") != NULL ||
      strstr(password, "g") != NULL ||
      strstr(password, "h") != NULL ||
      strstr(password, "i") != NULL ||
      strstr(password, "j") != NULL ||
      strstr(password, "k") != NULL ||
      strstr(password, "l") != NULL ||
      strstr(password, "m") != NULL ||
      strstr(password, "n") != NULL ||
      strstr(password, "o") != NULL ||
      strstr(password, "p") != NULL ||
      strstr(password, "q") != NULL ||
      strstr(password, "r") != NULL ||
      strstr(password, "s") != NULL ||
      strstr(password, "t") != NULL ||
      strstr(password, "u") != NULL ||
      strstr(password, "v") != NULL ||
      strstr(password, "w") != NULL ||
      strstr(password, "x") != NULL ||
      strstr(password, "y") != NULL ||
      strstr(password, "z") != NULL)
  {
    printf("Senha invalida, nao contem letras minusculas digite novamente.\n");
    // letraMinuscula = false;
    return false;
  }
  else
  {
    return true;
  }
}

bool letraMaiuscula(char *password)
{
  printf("letra maiusculas recebi %s ", password);

  // verifica se a senha possui letras maiusculas
  if (strstr(password, "A") != NULL ||
      strstr(password, "B") != NULL ||
      strstr(password, "C") != NULL ||
      strstr(password, "D") != NULL ||
      strstr(password, "E") != NULL ||
      strstr(password, "F") != NULL ||
      strstr(password, "G") != NULL ||
      strstr(password, "H") != NULL ||
      strstr(password, "I") != NULL ||
      strstr(password, "J") != NULL ||
      strstr(password, "K") != NULL ||
      strstr(password, "L") != NULL ||
      strstr(password, "M") != NULL ||
      strstr(password, "N") != NULL ||
      strstr(password, "O") != NULL ||
      strstr(password, "P") != NULL ||
      strstr(password, "Q") != NULL ||
      strstr(password, "R") != NULL ||
      strstr(password, "S") != NULL ||
      strstr(password, "T") != NULL ||
      strstr(password, "U") != NULL ||
      strstr(password, "V") != NULL ||
      strstr(password, "W") != NULL ||
      strstr(password, "X") != NULL ||
      strstr(password, "Y") != NULL ||
      strstr(password, "Z") != NULL)
  {
    return false;
    printf("Senha invalida, nao contem letras maiusculas digite novamente.\n");
  }
  else
  {
    return true;
  }
}

bool contemNumero(char *password)
{
  printf("contem numero recebi %s ", password);
  // verifica se a senha possui numeros
  if (strstr(password, 0) != NULL ||
      strstr(password, 1) != NULL ||
      strstr(password, 2) != NULL ||
      strstr(password, 3) != NULL ||
      strstr(password, 4) != NULL ||
      strstr(password, 5) != NULL ||
      strstr(password, 6) != NULL ||
      strstr(password, 7) != NULL ||
      strstr(password, 8) != NULL ||
      strstr(password, 9) != NULL)
  {
    printf("Senha invalida, nao contem numeros digite novamente.\n");
    // contemNumero = false;
    return false;
  }
  else
  {
    return true;
  }
}

bool contemCaracterEspecial(char *password)
{
  printf("contem caracter especial recebi %s ", password);

  // verifica se a senha possui caracteres especiais
  if (strstr(password, "!") != NULL ||
      strstr(password, "@") != NULL ||
      strstr(password, "#") != NULL ||
      strstr(password, "$") != NULL ||
      strstr(password, "%") != NULL ||
      strstr(password, "^") != NULL ||
      strstr(password, "&") != NULL ||
      strstr(password, "*") != NULL ||
      strstr(password, "(") != NULL ||
      strstr(password, ")") != NULL ||
      strstr(password, "-") != NULL ||
      strstr(password, "_") != NULL ||
      strstr(password, "+") != NULL ||
      strstr(password, "=") != NULL ||
      strstr(password, "[") != NULL ||
      strstr(password, "]") != NULL ||
      strstr(password, "{") != NULL ||
      strstr(password, "}") != NULL ||
      strstr(password, ";") != NULL ||
      strstr(password, ":") != NULL ||
      strstr(password, "'") != NULL ||
      strstr(password, "\"") != NULL ||
      strstr(password, ",") != NULL ||
      strstr(password, ".") != NULL ||
      strstr(password, "<") != NULL ||
      strstr(password, ">") != NULL ||
      strstr(password, "/") != NULL ||
      strstr(password, "?") != NULL ||
      strstr(password, "|") != NULL ||
      strstr(password, "\\") != NULL)
  {
    printf("Senha invalida, nao contem caracteres especiais digite novamente.\n");
    // contemCaracterEspecial = false;
    return false;
  }
}

bool verifyPassword(char *password)
{
  printf("verify password recebi %s \n", password);

  bool a = tamanhoValido(password);
  bool b = letraMaiuscula(password);
  bool c = letraMinuscula(password);
  bool d = contemNumero(password);
  bool e = contemCaracterEspecial(password);

  printf("a %d \t b %d \t c %d \t d %d \t e %d \t", a, b, c, d, e);

  // if (tamanhoValido(password) == true &&
  //     letraMaiuscula(password) == true &&
  //     letraMinuscula(password) == true &&
  //     contemNumero(password) == true &&
  //     contemCaracterEspecial(password) == true)
  // {
  //   printf("Senha valida. A\n");
  //   return true;
  // }
  // else if (tamanhoValido(password) == false &&
  //          letraMaiuscula(password) == false &&
  //          letraMinuscula(password) == false &&
  //          contemNumero(password) == false &&
  //          contemCaracterEspecial(password) == false)
  // {
  //   printf("Senha invalida. A \n");
  //   return false;
  // }
}

void Impress()
{
  SetName();
  SetEmail();
  SetPassword();
  SetAge();
}