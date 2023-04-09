/*
    Lista 4 - EX008
    Os computadores estão desempenhando um papel cada vez maior na educação. Escreva um programa que ajudará os alunos do ensino fundamental de uma escola a aprender a multiplicar. Use a função rand da biblioteca <stdlib.h> para produzir dois inteiros positivos de um único dígito aleatoriamente. O programa deve então imprimir uma pergunta do tipo: 

    Quanto é [primeiro número gerado] vezes [segundo número gerado]? 
    O usuário deve então digitar a resposta. Seu programa deve examinar a resposta do usuário. Se ela estiver correta, o programa deve imprimir "Muito bem!" e fazer outra pergunta de multiplicação. Se a resposta estiver errada, o programa deve imprimir "Incorreto! Tente novamente, por favor!" e então deixar que o aluno fique tentando acertar a mesma pergunta repetidamente, até por fim conseguir.
    OBS.1: use funções e ou procedimentos auxiliares em seu código da forma que preferir.

    Desenvolvido Por Isaque
*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

/*
    Função I
    Verifica se a resposta do usuário está correta.
*/

void corrector(int var_1, int var_2, int result)
{
    /*
        Condição I
        se("resposta" for igual à "valor_1" vezes "valor_2"):
        escreva(Parabéns)
    */
    if (result == var_1 * var_2) 
    {
        printf("Congratulations!\n");
    }

    /*
        Condição II
        senão:
        escreva(Incorreto! tente denovo!)
    */
    else 
    {
        printf("Incorrect! Please try again!\n");
    }
}

int main() 
{
    // Declaração De Variáveis
    int num_1, num_2, answer;

    // Seed para gerar números aleatórios diferentes em cada execução
    srand(time(NULL));

    while (1) 
    {
        // Gera um número aleatório de 1 a 9 -> Armazena na variável "num_1"
        num_1 = rand() % 10;

        // Gera um número aleatório de 1 a 9 -> Armazena na variável "num_2"
        num_2 = rand() % 10;

        // Faz a pergunta ao usuário
        printf("What is %d times %d?\n", num_1, num_2);
        scanf("%d", &answer);

        // Chama a função corrector();
        corrector(num_1, num_2, answer);
        Sleep(2000);
        system("cls");
    }

    return 0;
}