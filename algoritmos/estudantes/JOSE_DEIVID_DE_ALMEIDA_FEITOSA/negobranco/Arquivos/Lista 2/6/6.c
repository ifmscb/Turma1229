#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
    float temperatura , fahrenheit;
    printf("Digite o valor da temperatura:\n");
    scanf("%f" , &temperatura);

    fahrenheit = (9 * temperatura + 160) / 5;

    printf("O valor da temperatura em Fahrenheit e : %.2f", fahrenheit);





}

