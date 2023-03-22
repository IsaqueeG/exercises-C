/*
    LISTA II - EX003
    Faça um programa em C para ler um número inteiro e determinar se ele é par ou ímpar. 
    Lembre-se: o resto da divisão de um número par por 2 é 0 (zero); se o número for ímpar, o resto é 1 (um).

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int num;

    // Solicita um número ao usuário
    printf("Enter a number:\n");
    scanf("%d", &num);

    /*
        AVISOS

        - considere os nomes entre "" como os nomes das variáveis.
        - Os comentários a seguir são apenas pseudocódigos, não possuem nenhuma relação estrutural com a Linguagem C.
    */

    /*
        Condição I

        se(o resto da divisão de um "número" por 2 for igual a 0):
        escreva(O "número" é par.)
    */

    if(num % 2 == 0)
    {
        printf("Number %d is Even.", num);
    }

    /*
        Condição II

        senão:
        escreva(O "número" é ímpar.)
    */

    else
    {
        printf("The Number %d is Odd.", num);
    }
}