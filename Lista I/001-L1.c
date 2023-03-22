/*
    LISTA I - EX001
    Escreva um programa em C que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números.

    Desenvolvido Por Isaque
*/

/*
    VOCABULÁRIO
    ADDITION = ADIÇÃO | SUBTRACTION = SUBTRAÇÃO
    MULTIPLICATION = MULTIPLICAÇÃO | DIVISION =  DIVISÃO
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int num_1, num_2, addition, subtraction, multiplication, division;


    // Solicitando o primeiro número ao usuário
    printf("Enter the first number:\n"); 
    scanf("%d", &num_1); // Armazena o número digitado na variável "num_1"

    // Solicitando o segundo número ao usuário
    printf("Enter the second number:\n");
    scanf("%d", &num_2); // Armazena o número digitado na variável "num_2"

    // Realizando Operações
    addition = num_1 + num_2, subtraction = num_1 - num_2;
    multiplication = num_1 * num_2, division = num_1 / num_2;
    // Ao ser realizado as operações os valores são armazenados nas respectivas variáveis

    // Imprimindo Resultados
    printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %d\n", addition, subtraction, multiplication, division);

    return 0;

}