#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float raio , perimetro , area , diametro;
    printf("Digite o valor do raio do circulo:");
    scanf("%f", &raio);

    perimetro = 2* 3.14 * raio;
    area = 3.14* raio * 2;
    diametro = raio * 2;

    printf("Perimetro:----> %f \n" , perimetro);
    printf("Area:----> %f \n" , area);
    printf("Diametro:----> %f \n" , diametro);
    

}