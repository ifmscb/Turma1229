// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// função principal
int main()
{
  float perimetro,area,diametro,raio;
  float const pi=3.14;

//imput

  printf("digite o valor de raio\n");
  scanf("%f",& raio);

//calculo
 
 //erro no primeiro codigo em area deu por conta de calcular area*area, porem area continuava zero no momento,entao seria raio, que é a base
  perimetro = 2*pi*raio;
  area = pi*pow(raio,2);
  diametro = 2*pi;

//output
 printf("valor do perimetro %.2f\n",perimetro);
 printf("valor da area %.2f\n",area);
 printf("valor do diametro %.2f", diametro);
}
