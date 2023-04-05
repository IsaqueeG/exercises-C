/*
    LISTA 3 - EX002
    Escreva um programa em C que coloque na tela a tabuada do número 5.

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    /*
        FOR
        (inicializa "i" como 0; enquanto "i" for menor do que 10; incremente "i")
    */
    for(int i = 0; i < 10; i++)
    {
        /*
            "resultado" = 5 * "i" ("i" aumentará a cada vez que o laço se repetir)
            OBS: Como o "i" começa 0 e precisa terminar em 9 (já que é o menor número antes de 10)
            o último resultado será (5 x 9 = 45)

            escreva(5 x "i" = "resultado")
            escreva(%pule uma linha%)

            OBS: Lembre-se que estamos trabalhando com um laço de repetição!
        */
        int result = 5 * i;
        printf("5 x %d = %d", i, result);
        printf("\n");
    }
}