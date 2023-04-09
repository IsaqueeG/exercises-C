/*
    Lista 4 - EX007
    Escreva um programa que simule o lançamento de uma moeda. Para cada lançamento da moeda, o programa deve imprimir Cara ou Coroa. Deixe o programa lançar a moeda 100 vezes e conte o número de vezes que cada lado da moeda aparece. Imprima os resultados. O programa deve chamar uma função separada jogada que não utiliza argumentos e retorna 0 para coroa e 1 para cara. Nota: Se o programa simular realisticamente o lançamento da moeda, cada lado da moeda deve aparecer provavelmente metade do tempo, totalizando cerca de 50 caras e 50 coroas.

    OBS.1: use a função rand da biblioteca <stdlib.h> para gerar números aleatórios (pesquise sobre a função na internet ou no livro C, Como Programar, se tiver alguma dúvida sobre como utilizá-la).

    Desenvolvido Por Isaque
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Função I
    Gera um número aleatório entre 0 e 1 (0 para coroa e 1 para cara)
*/

int move() 
{
    return rand() % 2;
}

int main() 
{
    // Declaração De Variáveis
    // OBS: Variáveis responsáveis por fazer a contagem da quantidade de caras ou coroas geradas.
    int cara = 0, coroa = 0;

    // Seed para gerar números aleatórios diferentes em cada execução
    srand(time(NULL));

    /*
        FOR
        laço que se repetirá 100x, chamando sempre a função move().
    */
    for (int i = 0; i < 100; i++) 
    {
        // Armazena o valor retornado pela função move()
        int result = move();

        /*
            Condição I
            se("resultado" for igual a 0)
            escreva(coroa)
            *incremente "coroa"*
        */
        if (result == 0) 
        {
            printf("Coroa\n");
            coroa++;
        } 

        /*
            Condição II
            senão
            escreva(cara)
            *incremente "cara"*
        */
        else 
        {
            printf("Cara\n");
            cara++;
        }
    }

    // Exibe Resultado Final
    printf("\nFinal result:\nCara: %d\nCoroa: %d\n", cara, coroa);

    return 0;
}