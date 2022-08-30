// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// importação de bbliotecas
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// função principal
int main()
{
  float perimetro,area,diagonal,lado;
  printf("digite o valor de lado\n");
  scanf("%f",& lado);

  //calculo

  
  perimetro = 4*lado;
  area = pow(lado,2);
  diagonal = lado* sqrt(2);
  


  printf("perimetro %.2f\n",perimetro);
  printf("area %.2f\n", area);
  printf("diagonal %.2f\n", diagonal);
}
