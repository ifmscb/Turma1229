#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float quadrado , perimetro , area , diagonal;
    printf ("Digite o numero de lados do quadrado \n");
    scanf("%f" , &quadrado);

    perimetro = 4 * quadrado;
    area = quadrado * quadrado;
    diagonal = (quadrado * 2) + (quadrado * 2);

    printf("Perimetro:----> %f \n" , perimetro);
    printf("Area:----> %f \n", area);
    printf("Diagonal:----> %f \n" , diagonal);

    

}