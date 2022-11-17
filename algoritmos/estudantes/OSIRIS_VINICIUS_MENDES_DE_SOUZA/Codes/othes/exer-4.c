#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{
	float Paf = 1.10, Ger = 1.5;
	int age = 0;

	while (Paf < Ger)
	{
		Paf += 0.03;
		Ger += 0.02;
		age++;
	}

	printf("A conta levou %i", age);
}
