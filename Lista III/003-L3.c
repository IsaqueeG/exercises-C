/*
    LISTA 3 - EX003
    Reescreva o programa anterior de modo a apresentar a tabuada de qualquer número solicitado pelo usuário.

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração De Variável
    int var;

    // Solicitando ao usuário um número para ver sua tabuada.
    printf("Enter a number to see your multiplication table:\n");
    scanf("%d", &var);

    /*
        FOR
        (inicializa "i" como 0; enquanto "i" for menor do que 10; incremente "i")
    */
    printf("Mutiplication table of %d\n", var);
    for(int i = 0; i < 10; i++)
    {
        /*
            "resultado" = "valor" * "i" ("i" aumentará a cada vez que o laço se repetir)

            OBS: Como o "i" começa 0 e precisa terminar em 9 (já que é o menor número antes de 10)
            o último resultado será (5 x 9 = 45).

            OBS: "valor" será o número inserido pelo usuário.

            escreva("valor" x "i" = "resultado")
            escreva(%pule uma linha%)

            OBS: Lembre-se que estamos trabalhando com um laço de repetição!
        */
        int result = var * i;
        printf("%d x %d = %d", var, i, result);
        printf("\n");
    }
}