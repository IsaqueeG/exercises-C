/*
    Lista 4 - EX003
    Faça um programa em C que tenha uma função que receba um caractere e retorne 1, caso este seja uma letra, e 0, caso não seja. O programa principal deve se encarregar de informar ao usuário a resposta.
    
    Exemplo:
    Entrada (Caractere digitado pelo usuário): %
    Saída: % não é uma letra.

    Obs.: Toda entrada e saída de dados deve ser feita no programa principal (main).

*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

/*
    Função I
    Verifica se o que o usuário digitou é uma letra ou não.
*/
int verifier(int var)
{
    /*
        Condição I
        se(("valor" for menor que 'a' OU "valor" for maior que 'z') E ("valor" for menor que 'A' OU "valor" for menor que 'Z')):
            retorne 0
    */
    if((var < 'a' || var > 'z') && (var < 'A' || var > 'Z'))
    {
        return 0;
    }

    /*
        Condição II
        senão:
            retorne 1

    */
    else
    {
        return 1;
    }
}

int main()
{
    // Declaração De Variável
    char var;

    /*
        WHILE
        Permite com que o programa fique em um LOOP infinito.
    */
    while(1)
    {
        // Solicita ao usuário que digite qualquer coisa
        printf("Type something:\n");
        scanf("%c", &var);

        // Limpa o buffer/fluxo de entrada
        fflush(stdin);

        /*
            Condição I
            se(retorno da função "verificador(var)" for igual a 0):
                escreva(Não é uma letra)
        */
        if(verifier(var) == 0)
        {
            printf("\"%c\" It's not a letter!", var);
            Sleep(1500);
            system("cls");
        }

        /*
            Condição II
            senão:
                escreva(É uma letra)
        */
        else
        {
            printf("\"%c\" It's a letter!", var);
            Sleep(1500);
            system("cls");
        }
    }
}