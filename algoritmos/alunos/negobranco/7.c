#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float  Tquilowatts=0.05 , salarioMinimo = 1212.00;
    float Residencia , valorEnd, valorDesc , valorMult;
    printf("Digite o valor gasto da Residencia : ");
    scanf("%f" ,&Residencia );
    ;
    salarioMinimo = 0.05 * 1212.00;
    valorEnd = Residencia*60.6 / 100;
    valorDesc = Residencia - (Residencia*0.10 / 100);
    valorMult = Residencia + ( Residencia * 0.15 );

    printf("Valor em reais pago por cada quilowatts: %.2f\n" , salarioMinimo);
    printf("Valor final a ser pago pela Residencia :%.2f\n" , valorEnd);
    printf("Valor em reais a ser pago com desconto: %.2f\n" , valorDesc);
    printf("Valor em reais a ser pago em caso de atraso com multa :%.2f\n" , valorMult);


    

}

