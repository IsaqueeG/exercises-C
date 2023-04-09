/*
    Lista 4 - EX005
    Dada a sequência ( 2, 3, 4, 9, 16, 29, 54, 99, ... ) onde cada elemento, a partir do quarto, é a soma dos três termos que lhe antecedem, faça um programa em C que contenha um procedimento. Este deve receber três termos iniciais quaisquer (do tipo inteiro) para calcular e exibir os 20 termos seguintes.

    Obs.: Toda entrada de dados deve ser feita no programa principal.

    Desenvolvido por Isaque
*/

#include <stdio.h>
#define TAM 20

/*
    Função I
    Calcula a sequência a partir dos três primeiros termos

    OBS: Optei por usar Arrays para facilitar/otimizar o código.
*/

void sequence(int num[], int n) 
{
    // calcula os "n" termos da sequência
    for (int i = 3; i < n; i++) 
    {
        num[i] = num[i - 1] + num[i - 2] + num[i - 3];
    }

    for (int j = 0; j < 20; j++) 
    {
        printf("%d ", num[j]);
    }
    printf("\n");
}

int main() 
{
    // Declaração De Array
    int num[20];

    /*
        FOR
        repete as instruções dentro do laço três vezes.
    */
    for (int i = 0; i < 3; i++) 
    {
        // Solicita ao usuário os três primeiros números da sequência
        printf("Enter the %d term of the sequence: \n", i + 1);
        scanf("%d", &num[i]);
    }

    // chama a função sequence() para calcular / exibir os 20 termos seguintes
    sequence(num, TAM);

    return 0;
}