/*
    LISTA 3 - EX004
    Faça um programa em C para escrever o conjunto das cinco primeiras tabuadas (tabuada do 1, tabuada 2, ..., tabuada do 5).

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    /*
        FOR #1
        (inicializa "i" como 1; enquanto "i" for menor que ou igual a 10; incremente "i")
    */
   for(int i = 1; i <= 5; i++)
    {
        printf("Multiplication table of %d\n\n", i);

        /*
        FOR #2
        (inicializa "j" como 1; enquanto "j" for menor que ou igual a 10; incremente "j")
        */
        for(int j = 1; j <= 10; j++)
        {
            /*
            "resultado" = "i" * "j" ("i" aumentará a cada vez que o laço se repetir)

            OBS: Estamos trabalhando com dois laços de repetições ao mesmo tempo, com isso o FOR #1 irá se repetir 5x representando o número de tabuadas a serem imprimidas (1 até 5), enquanto o FOR #2 irá se repetir 10x a cada vez que o FOR #1 fizer uma repetição representando os números a serem multiplicados pelos números do FOR #1 (1 até 10)

            escreva("i" x "j" = "resultado")
            escreva(%pule uma linha%)
            */

            int result = i * j;
            printf("%d x %d = %d", i, j, result);
            printf("\n");
        }
        printf("\n");
        // Essa linha serve para que a cada vez que uma tabuada for feita ela pule uma linha para não ficar junta da outra tabuada.

    }
}