/*
    Lista 4 - EX004
    Faça um programa em C que contenha um procedimento que receba um ano, calcule e exiba se este é ou não um ano bissexto.

    Exemplo:
    Entrada (Ano digitado pelo usuário): 1996.
    Saída: 1996 é um ano Bissexto.

    Obs.1: Um ano é bissexto se ele for divisível por 400 ou se for divisível por 4 e não for por 100.
    Obs.2: O programa deverá permitir que o usuário faça quantas consultas desejar e só deverá terminar sua execução se o usuário solicitar.
    Obs.3: Toda entrada de dados deve ser feita no programa principal.

    Desenvolvido Por Isaque
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*
    Função I
    Verifica se o ano que ousuário digitou é bissexto ou não.
*/
void verifier(int year)
{
    /*
        Condição I
        se((resto da divisão de "ano" por 400 for igual a 0 OU resto da divisão de "ano" por 4 for igual a 0) E resto da divisão de "ano" por 100 for diferente que 0):
        escreva("ano" é um ano bissexto.)
    */
    if((year % 400 == 0 || year % 4 == 0) && year % 100 != 0)
    {
        printf("%d It's a leap year.\n", year);
    }

    /*
        Condição II
        se("ano" for menor que 0):
        *encerra o programa*
    */
    else if(year < 0)
    {
        system("pause");
    }

    /*
        Condição III
        senão:
        escreva("ano" não é um ano bissexto.)
    */
    else
    {
        printf("%d Not a leap year\n", year);
    }
}

int main()
{
    // Declaração De Variável
    int year;

    /*
        WHILE
        Permite com que o programa fique em um LOOP infinito.
    */
    while (1)
    {
        // Solicita ao usuário que digite um ano
        printf("Enter a Valid Year (-1 to Exit):\n");
        scanf("%d", &year);
        verifier(year);
    }
    Sleep(2000);
    system("cls");
}