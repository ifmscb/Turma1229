#include <stdio.h>

/*
    [] - Criar uma função que substitui os numeros impares para 0;
*/

#define SIZE 5

int top = -1, inp_array[SIZE];

int sub( int x);

int main(int argc, char const *argv[])
{
    // printf("hello world\n");

    int v[5] = {2,3,7,4,9};

    for(int i = 0 ; i < 5 ; i++)
    sub(v[i]);

    return 0;
}

int sub( int x) {

    if (x % 2 == 0) 
    {
        printf("Apenas divisiveis: %d\n", x);
    }
    else {
        x = 0;
        printf("Apenas Nao divisiveis: %d\n", x);
    }
    // printf("hello world: %d\n", x);
}

// void push()
// {
//     int x;

//     if (top == SIZE - 1)
//     {
//         printf("\nOverflow!!");
//     }
//     else
//     {
//         printf("\nEnter the element to be added onto the stack: ");
//         scanf("%d", &x);
//         top = top + 1;
//         inp_array[top] = x;
//     }
// }