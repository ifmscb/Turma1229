#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float const cotacao = 5.31;
    float CompraDolar , ConvertMoney;
    float aliquota60 , aliquota30;

    printf("Digite o valor da compra em dolar \n");
    scanf("%f", &CompraDolar);

    ConvertMoney = CompraDolar * cotacao ;
    aliquota60 = ConvertMoney * 0.6;
    aliquota30 = ConvertMoney * 0.3;

    printf("Voce gastou %.2f reais \n" , ConvertMoney);
    printf("Aliquota 60 por cento : %.2f \n", aliquota60);
    printf("Aliquota 30 por cento : %.2f \n" , aliquota30);
    


}

