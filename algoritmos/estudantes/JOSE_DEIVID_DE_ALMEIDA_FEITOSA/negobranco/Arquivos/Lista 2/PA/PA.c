#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
int a1, razao, a10;
printf("Digite o primeiro termo da PA:");
scanf("%i" , &a1);
printf("Digite o valor da razao da PA:");
scanf("%i" , &razao);

a10 = a1 + (10-1)*razao;

printf("O decimo termo desta PA:-----> %i \n", a10);


  




}