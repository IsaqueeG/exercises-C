/*
    LISTA 3 - EX001
    Escreva um programa em C que solicite um número ao usuário enquanto o valor digitado estiver entre os valores 1 e 100.

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração de Variáveis
    int var;

    /*
        DO-WHILE
        Solicita um valor ao usuário enquanto "var" for maior que ou igual a 1 e enquanto "var" for menor que ou igual a 100.
    */
    do
    {
        printf("Enter a number (Between 1 and 100):\n");
        scanf("%d", &var);
    }while(var >= 1 && var <= 100);


}