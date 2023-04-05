/*
    LISTA 3 - EX005
    Escreva um programa em C que coloque na tela meia árvore de Natal com asteriscos. O número de ramos deverá ser introduzido pelo usuário.

    Exemplos com 3, 4 e 5 ramos:

    *		*		*
    **		**		**
    ***		***		***
            ****    ****
                    *****

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração de Variável
    int branches;

    // Solicita ao usuário a quantidade de ramos que ele deseja ver
    printf("Enter how many branches you want to see:");
    scanf("%d", &branches);

    /*
        FOR #1
        (inicializa "i" como 0; enquanto "i" for menor que ou igual a "ramos"; incremente "i")
    */
    for(int i = 0; i < branches; i++)
    {
        /*
        FOR #2
        (inicializa "j" como 0; enquanto "j" for menor que ou igual a "i"; incremente "j")
        */
        for(int j = 0; j <= i; j++)
        {
            /*
            OBS: Estamos trabalhando com dois laços de repetições ao mesmo tempo, com isso o FOR #1 irá se repetir de acordo com a quantidade ramos inserida pelo usuário responsável por fazer a quebra de linhas (para formar a escada) e para limitar a quantidade de asteriscos escritos, enquanto o FOR #2 irá se repetir de acordo com i, e irá imprimir a quantidade de astericos de acordo com o valor de "i". EX.: se "i" for igual a 2, "j" irá escrever 3 asteriscos já que o mesmo inicia em 0.

            escreva("*")
            */
            printf("*");
        }
        // Quebra De Linha
        printf("\n");
    }
}