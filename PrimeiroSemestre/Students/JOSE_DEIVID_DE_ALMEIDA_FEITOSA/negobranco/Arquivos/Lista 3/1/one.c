#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float salario , salarioFix = 1212.00 , hoursWorks ;
    float salarioBruto , SalarioLiquido, inss = 00.2;
    printf("Quantas horas trabalhou ? ");
    scanf("%f", &hoursWorks);


    salario = (salarioFix*0.05)*hoursWorks;
    salarioBruto = hoursWorks * salarioFix;
    SalarioLiquido = salarioBruto * 0.02;
    inss =  salarioBruto * 0.02;

    printf("Valor pago por hora ----- > %.2f\n" , salario);
    printf("Valor do salario bruto ---- > %.2f\n" , salarioBruto);
    printf("Valor do salario com desconto ----> %.2f\n", inss);
    printf("Valor do salario liquido ----> %.2f\n", SalarioLiquido);
    

}

