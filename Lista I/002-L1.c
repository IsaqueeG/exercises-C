/*
    LISTA 1 - EX002
    Escreva um programa em C que imprima do número 1 ao 4 na mesma linha. Escreva o programa usando os seguintes métodos:
    
    a) Usando uma instrução printf, sem especificadores de conversão. 
    b) Usando uma instrução printf, com especificadores de conversão. 
    c) Usando quatro instruções printf.
*/

#include <stdio.h>

int main()
{
    // Primeira alternativa (a)
    printf("1 2 3 4\n");

    // Segunda alternativa (b)
    printf("%d %d %d %d\n", 1, 2, 3, 4);

    // terceira alternativa (c)
    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");
}