#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

O Capitão Olho Roxo e seus marinheiros encontraram uma arca com uma grande quantidade de moedas de ouro idênticas. Para a divisão das moedas, todos concordaram com a seguinte sugestão do Capitão:

* cada marinheiro exceto o Capitão deveria receber exatamente o mesmo número de moedas; e

* o Capitão deveria receber o dobro de moedas que um marinheiro recebe.
Pode ser que o fato de o Capitão ser o único com uma pistola a bordo tenha contribuído para a concordância de todos, mas também contribuiu o fato de que na forma proposta a divisão era perfeita, não sobrando ou faltando moedas.

Dados o número de moedas na arca e o número de marinheiros, escreva um programa para determinar quantas moedas o Capitão Olho Roxo recebeu.

Entrada
A primeira linha da entrada contém um número inteiro A, o número de moedas na arca. A segunda linha contém um inteiro N, o número de marinheiros (não contando o Capitão).

Saída
Seu programa deve produzir na saída uma única linha, contendo um único inteiro, o número de moedas que o Capitão Olho Roxo deve receber.
*/

int main()
{

  // declaração de variáveis
  int cap, marin, moedasTotal, moedas, calcCap;

  /*
    solicita entradada de dados:
  */
  printf("Total de moedas: ");
  scanf("%i", &moedasTotal);

  printf("Numeros de marinheros: ");
  scanf("%i", &marin);

  //  verificando requisitos
  /*
    total de moedas deve ser maior que 3  e menor que 10.000

    numero de marinheiros deve ser maior que 1 menor que 1.000
  */

  if (moedasTotal >= 3 && moedasTotal <= 10000)
  {
    if (marin >= 1 && marin <= 1000)
    {
      // formula ??

      // respondendo ao usuário
      printf("%i e %i", moedasTotal, marin);
      printf("Cap: %i", cap);
    }
  }
  else
  {
    printf("Valor Invalidad");
  }
}
