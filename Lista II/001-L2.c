/*
    LISTA II - EX001
    Faça um programa em C para ler dois números inteiros quaisquer e imprimir qual deles é o maior 
    OBS: considere a possibilidade dos números serem iguais.

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int num_1, num_2;

    // Solicitando o primeiro número ao usuário
    printf("Enter a number:\n");
    scanf("%d", &num_1);

    // Solicitando o primeiro número ao usuário
    printf("Enter another number:\n");
    scanf("%d", &num_2);

    /*
        AVISOS

        - considere os nomes entre "" como os nomes das variáveis.
        - Os comentários a seguir são apenas pseudocódigos, não possuem nenhuma relação estrutural com a Linguagem C.
    */

    /*
        Condição I

        se("primeiro número" for maior que o "segundo número"):
        escreva("primeiro número" é maior que "segundo número");
    */

    if(num_1 > num_2)
    {
        printf("%d is bigger than %d", num_1, num_2);
    }

    /*
        Condição II

        senão se("primeiro número" for menor que o "segundo número"):
        escreva("segundo número" é menor que "segundo número")
    */

    else if(num_1 < num_2)
    {
        printf("%d is bigger than %d", num_2, num_1);
    }

    /*
        Condição III

        senão:
        escreva(São números iguais)
    */

    else
    {
        printf("\nAre equal numbers");
    }
    
    
}