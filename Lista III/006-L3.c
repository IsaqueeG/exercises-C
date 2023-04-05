/*
    LISTA 3 - EX006
    Altere o programa anterior de forma que, em vez de asteriscos, sejam escritas letras em cada nível, começando com a letra ‘A’. Exemplos com 3, 4 e 5 ramos:
    A		A		A
    BB		BB		BB
    CCC		CCC		CCC
            DDDD	DDDD
                    EEEEE
    
    Desenvolvido por Isaque

*/
#include <stdio.h>

int main()
{
    // Declaração de Variáveis
    int branches;
    char letter = 'A';

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
            OBS: Estamos trabalhando com dois laços de repetições ao mesmo tempo, com isso o FOR #1 irá se repetir de acordo com a quantidade ramos inserida pelo usuário responsável por fazer a quebra de linhas (para formar a escada) e para limitar a quantidade de letras escritas, enquanto o FOR #2 irá se repetir de acordo com i, e irá imprimir a quantidade de letras de acordo com o valor de "i". EX.: se "i" for igual a 2, "j" irá escrever 3 asteriscos já que o mesmo inicia em 0.

            escreva("letra")
            */
            printf("%c",letter);
        }
        // Ao fim de cada laço é somado a letra atual com +1 indicando qual a próxima letra a ser imprimida.
        letter += 1;

        // Quebra de linha
        printf("\n");
    }
}