#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
  char name[30];
  float money, inss;

  printf("Hello, welcome to the INSS discount calculation algorithm.\n");
  printf("before we start enter your name: ");
  gets(name);

  printf("Digite seu salário (ex: 1000.00): ");
  scanf("%f", &money);

  printf("Hi %s your money is %.2f\n", name, money);

  if (money <= 600.00)
  {
    printf("Hi %s you are: Isento", name);
  }

  else if (money > 600.00 && money <= 1200.00)
  {
    inss = money * 0.2;

    float Fmoney = money - inss;

    printf("Hi %s your inss are: 20% \n",
           name);

    printf("Hi %s seu salario final foi de: %.2f",
           name,
           Fmoney);
  }
  else if (money > 1200.00 && money <= 2000.00)
  {
    inss = money * 0.25;
    money = money - inss;

    printf("Hi %s your inss are: 25%\n",
           name);

    printf("Hi %s seu salario final foi de: %.2f",
           name,
           money);
  }
  else if (money > 2000.00)
  {
    inss = money * 0.30;
    money = money - inss;

    printf("Hi %s your inss are: 30%\n",
           name);
    printf("Hi %s seu salario final foi de: %.2f",
           name,
           money);
  }
  else
  {
    printf("err 500");
  }
}
