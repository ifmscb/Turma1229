#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

    system("cls");
 float  peso = 0.0, calc = 0.0, calc1 = 0.0, calc2 = 0.0, calc3 = 0.0, loopPeso0 = 0.0, loopPeso1 = 0.0, loopPeso2 = 0.0, loopPeso3 = 0.0;
 
 int idade, i,contagem=0, contagem2=0,contagem3=0,contagem4=0;
 
 for (i=0; i<5;i++)
{
    printf("digite sua idade\n");
    scanf("%i", & idade);

    printf("digite seu peso\n");
    scanf("%f", & peso);
    
    if (idade>1 & idade <=10)
    {
        contagem++;
        loopPeso0+=peso;
        //printf("peso=%f\n",loopPeso0);   
    }

    else if (idade>=11 & idade<20)
    {
        contagem2++;
        loopPeso1+=peso;
    }

    else if (idade>=21 & idade<30)
    {
        contagem3++;
        loopPeso2+=peso;
    }
    
    else if (idade>30)
    {
        contagem4++;
        loopPeso3+=peso;
        
        printf("V = %i\n", contagem4);
        printf("V2 = %.2f\n", loopPeso3);
    }
    else {
        printf("valor invalido");
    }
}
    calc=loopPeso0/contagem;
    printf("calculo da media foi de %.2f\n", calc);

    calc1=loopPeso1/contagem2;
    printf("calculo da media foi de %.2f\n", calc1);

    calc2=loopPeso2/contagem3;
    printf("calculo da media foi de %.2f\n", calc2);

    calc3=loopPeso3/contagem4;
    printf("calculo da media foi de %.2f\n", calc3);
}