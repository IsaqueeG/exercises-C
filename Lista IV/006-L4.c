/*
    Lista 4 - EX006
    O maior divisor comum (MDC) de dois inteiros é o maior inteiro que divide precisamente cada um dos dois números. Escreva uma função que retorne o maior divisor comum de dois inteiros.

    Desenvolvido Por Isaque
*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int mdc(int a, int b) 
{
    int result;

    // encontra o menor dos dois números
    int smaller = (a < b) ? a : b;

    /*
        FOR
        para("i" = "menor_número", enquanto "i" for maior que 0, decremente "i")

        OBS: Utilizamos o menor número pois ao tirar o MDC de dois números o menor número para de ser divisível primeiro do que o maior.
    */
    for (int i = smaller; i > 0; i--) 
    {
        /*
            Condição I
            se(resto da divisão de "a" com "i" for igual a 0 E resto da divisão de "b" com "i" for igual a 0)
            resultado = i

            OBS: Essa condição é usada para ver qual número em comum divide os dois juntos.
        */
        if (a % i == 0 && b % i == 0) 
        {
            result = i;
            break;
        }
    }
    // retorna "resultado"
    return result;
}

int main() 
{
    // Declaração De Variáveis
    int num_1, num_2, result;

    while (1)
    {
        /*
            DO-WHILE
            Garante que o usuário não irá digitar um valor negativo.
        */
        do
        {
            // Solicita ao usuário o primeiro número
            printf("Enter the first integer:\n");
            scanf("%d", &num_1);

            // Solicita ao usuário o segundo número
            printf("Enter the second integer:\n");
            scanf("%d", &num_2);
        } while (num_1 < 0 || num_2 < 0);
        
        // chama a função mdc() para calcular o MDC e armazenar na variável "result"
        result = mdc(num_1, num_2);

        // Exibe o resultado
        printf("The MDC of %d and %d is %d.\n", num_1, num_2, result);
        Sleep(3000);
        system("cls");
    }

    return 0;
}