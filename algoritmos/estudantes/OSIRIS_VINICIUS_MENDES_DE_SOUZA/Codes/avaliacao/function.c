// importacao de bliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

// variavel global, nome de usuário.
char UserName[30];

// =========== Declaracao de Funcoes ======== //
void text();

void cabecalho();
char user();
void menu();

float dashboard();
float bread(int qnt);
float broa(int qnt);

float custo(float total);
float lucro(float y);

void date();

// função principal;
void main()
{
  setlocale(LC_ALL, "Portuguese");
  text();      // corrigir acentuacao, nao funciona no windows
  cabecalho(); // cabecalho
  user();      // cria usuario
  menu();      // inicia o programa.
}

void text()
{
  // corrigi acentuação no terminal;
  // system("chcp 65001");
  system("cls");
  // setlocale(LC_ALL, "Portuguese");
}

void cabecalho()
{
  // cabeçalho
  printf("| | ==== Bem-vindo a Padaria Padoca ===== | |  \n");
}

char user()
{
  // Define nome ao usuario do sistema
  printf("Digite o nome do usuario: ");
  scanf("%s", &UserName);

  return UserName;
}

void menu()
{
  // verifica o que o user quer fazer, caso insira opção inválida o menu é mostrado novamente.
  int op;

  printf("Ola, %s\n", UserName);

  printf("Digite uma opcao abaixo: \n");
  printf(" 1 - Entrar no Painel. \n");
  printf(" 0 - Sair \n");
  printf("=> ");

  scanf("%i", &op);

  if (op == 1)
  {
    printf("Entrando ... \n");
    dashboard();
  }
  else if (op == 0)
  {
    printf("Saindo ...");
    system("stop");
  }
  else
  {
    printf("Operacao Invalida \n");
    menu();
  }
}

float dashboard()
{
  /*
    Defini quantidade de vendas e o seu total individual,
    total final,
    chama função custo e lucro.
  */

  // variaveis globais da função dashboard
  int qntBroa = 0;
  int qntBread = 0;
  int cntBroa = 0;
  int cntBread = 0;
  float tBroa = 0;
  float tBread = 0;
  float all = 0;
  char op = 'a';

  do
  {
    printf("Insira a quandidade de Broas Vendidas: ");
    scanf("%i", &qntBroa);
    cntBroa += qntBroa;

    printf("Insira a quandidade de Pão Vendidos: ");
    scanf("%i", &qntBread);
    cntBread += qntBread;

    printf(" * Broas Vendidas: %i \n", cntBroa);
    printf(" * Pães Vendidos: %i \n", cntBread);

    tBroa = broa(cntBroa);
    tBread = bread(cntBread);

    all = tBread + tBroa;

    printf(" * Total de Vendas: %.2f \n", all);

    printf("Deseja finalizar: ");
    printf(" S - Sim |");
    printf(" N - Não \n");
    printf("=> ");
    scanf("%s", &op);

  } while (op != 's' || op != 'S');

  system("cls");

  cabecalho();

  printf("| | =========== + Relatorio + =========== | | \n");
  printf("   Broas Vendidas: %i \n", cntBroa);
  printf("   Pães Vendidos: %i \n", cntBread);
  printf("| | ===================================== | | \n");

  printf(" * Total de Vendas: %.2f \n", all);
  custo(all);
  lucro(all);

  printf("| | ===================================== | | \n");
  date();
  printf("| | ===================================== | | ");
}

float broa(int qnt)
{
  // realiza o calculo total do produto vendido: produto x valor;
  const float value = 0.35;
  float calc = value * qnt;

  printf(" * Total de Broas Vendidas: %.2f \n", calc);
  return calc;
}

float bread(int qnt)
{
  // realiza o calculo total do produto vendido: produto x valor;
  const float value = 0.25;
  float calc = value * qnt;

  printf(" * Total de Paes Vendidos: %.2f \n", calc);
  return calc;
}

float custo(float total)
{
  // realiza o calculo total do custo do produto vendido: total x taxa de custo;
  const float cost = 0.75;
  float calc = (cost * total);

  printf(" * Total de Custo: %.2f \n", calc);
  return calc;
}

float lucro(float y)
{
  // realiza o calculo total do custo do produto vendido: total x taxa de lucro;
  const float lu = 0.25;
  float calc;

  calc = (lu * y);

  printf(" * Total de Lucro: %.2f \n", calc);
  return calc;
}

void date()
{
  // Funcao que detecta data e hora do sistema no final.
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);

  printf("   User: %s \n", UserName);
  printf("   Date: %02d/%02d/%02d   ===", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
  printf("   Hour: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
}
