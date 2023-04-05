/*
    Lista 3 - EX007
    O processo de encontrar o maior número (i.e., o máximo de um conjunto de números) é usado frequentemente em aplicações computacionais. Por exemplo, um programa que determinasse o vencedor de um concurso de vendas receberia o número de unidades vendidas por vendedor. O vendedor que tivesse vendido mais unidades venceria o concurso. Escreva um programa em C que receba uma série de 10 números, determine o maior deles e o imprima. Sugestão: seu programa pode usar três variáveis da seguinte maneira: 

    contador: um contador para contar até 10 (i.e., para controlar quantos números foram fornecidos e para determinar quando todos os 10 números foram processados); 
    num: o número atual fornecido ao programa; 
    maior: o maior número encontrado em cada instante.

    Desenvolvido por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração De Variáveis
    int number, bigger;

    /*
        FOR
        (inicializa "i" como 1; enquanto "i" for menor que ou igual a 10; incremente "i")
    */
    for(int i = 1; i <= 10; i++)
    {
        // Solicita ao usuário um número
        printf("Enter the %d Number:\n", i);
        scanf("%d", &number);

        /*
            CONDIÇÃO I

            se("número" for maior que "maior número"):
            "maior número" = "número"

        */
        if(number > bigger)
        {
            bigger = number;
        }
    }

    // Após receber / analisar os 10 números inseridos pelo usuário irá imprimir o maior.
    printf("The biggest number is: %d", bigger);
}