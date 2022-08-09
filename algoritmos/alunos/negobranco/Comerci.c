#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float valorProduto , valorComdesconto , valorCartao ;
    printf("Digite o valor do Produto: \n");
    scanf("%f" , &valorProduto);

    valorComdesconto = (valorProduto * 0.10)/100;
    valorCartao = (valorProduto * 0.05)/100;

    printf("O valor final com desconto e: %.2f\n", valorProduto - (valorProduto * 0.10/100));
    printf("O valor final do cartao e: %.2f\n", valorProduto - (valorProduto * 0.05/100));

    

}