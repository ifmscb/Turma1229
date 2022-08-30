#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <conio.h> 

int main()
{

 //declaracao de variavel

 float const descontoDinheiro =0.06, descontoCartao = 0.12;
 float valorProduto, pagamentoAvista,pagamentoCartao,cartaoSemjuros,quatroVezesNoCartao,valorFinalPgAvista,valorFinalPgCartao,cartaoComJuros;
 int opcaoEscolhida;

 //insercao de valor
 
 printf("digite o valor do produto\n");
 scanf("%f", & valorProduto);
 printf("qual a forma de pagamento\n");

//opcoes
 
 printf("opçao1-pagmento a vista em dinheiro ou cheque\n");
 printf("opçao2-pagmento a vista no cartao\n");
 printf("opçao3-pagmento parcelado no cartao em 3 vezes\n");
 printf("opçao4-pagmento parcelado no cartao em 4 vezes com juros de 6% \n");

 scanf("%i", & opcaoEscolhida);

 switch(opcaoEscolhida){
    case 1:{
        
        pagamentoAvista=descontoDinheiro*valorProduto;
        valorFinalPgAvista=pagamentoAvista-valorProduto;


        printf("valor a ser pago é %.2f",valorFinalPgAvista);
        break;
         getch();
    }
    case 2:{
        pagamentoCartao=descontoCartao*valorProduto;
        valorFinalPgCartao=valorProduto-pagamentoCartao;

        printf("valor a ser pago é %.2f",valorFinalPgCartao);
        break;
         getch();
    }
    case 3:{
        cartaoSemjuros= valorProduto/3;


        printf("valor a ser pago e %.2f", cartaoSemjuros);
        break;
         getch();

    }
    case 4:{
        quatroVezesNoCartao=valorProduto*0.06;
        cartaoComJuros=valorProduto+quatroVezesNoCartao;

        printf("valor a ser pago e %.2f", cartaoComJuros);
        break;
         getch();
    }
    default:{
        printf("opcao invalida");
        getch();

    }
 };



  
}
                          