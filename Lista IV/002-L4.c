/*
    Lista 4 - EX002

    Escreva um programa em C para calcular fatorial (N!) e potência (XˆY). Este programa deve conter os seguintes subprogramas:

    a) Uma função para calcular o fatorial de um número. Este procedimento deve receber como parâmetro de entrada um número inteiro e deve calcular e retornar o fatorial deste número.
    Lembrete: 0! = 1, 1! = 1, N! = N x (N-1) x (N-2) x ... x 2 x 1, para N > 1, e não existe fatorial de número negativo.

    b) Uma função para calcular X elevado a Y. Esta função deve receber como parâmetro dois números (X – real e Y – inteiro maior ou igual a zero) e deve calcular e retornar o valor de XˆY. 
    Lembrete: X0 = 1, X1 = X e XY = X * X * X * ... * X  (Y vezes)

    OBS.1: Não utilize a função pré-definida pow.
    OBS.2: O programa principal deve se encarregar de exibir os resultados ao usuário.
    OBS.3: Toda entrada de dados deve ser feita pelo programa principal.
    OBS.4: O programa deverá exibir um menu que permita ao usuário executar os subprogramas quantas vezes ele desejar e só deverá terminar sua execução se o usuário solicitar.

    Desenvolvido Por Isaque
*/

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

/*
    Função I
    Mostra o fatorial do número digitado.
*/

int factorial(int var)
{
    // "número" = "valor"
    int num = var;

    /*
        FOR
        para("n" = 1; enquanto "n" for menor que "valor"; incremente n)
            "número" = número * n
    */
    for(int n = 1; n < var; n++)
    {
        num *= n;
    }

    /*
        Condição

        se("número" for igual a 0)
            "número" = 1
    */
    if(num <= 0)
    {
        num = 1;
    }

    // retorne "número"
    return num;
}

/*
    Função II
    Imprimir o fatorial do número escolhido
*/

void factorialResult(int var)
{
    // "valor" = "variável"
    int value = var;

    /*
        FOR
        para("n" = "valor"; enquanto "n" for maior que ou igual a 1; decremente "n")
    */
    for(int n = value; n >= 1; n--)
    {
        /*
            Condição I
            se("n" for diferente que 1)
            escreva("n" x )
        */
        if(n != 1)
        {
            printf("%d x ", n);
        }

        /*
            Condição I
            senão
            escreva("n")
        */
        else
        {
            printf("%d", n);
        }
    }

}

/*
    Função III
    Imprimir o valor da potência do número + expoente escolhido.
*/

int potency(int var, int var_2)
{
    int num = var; // Base
    int num_2 = var_2; // Expoente
    int count = 0; // Contador
    int number = 1; // Valor Final

    /*
        WHILE
        enquanto("contador" for menor que "expoente")
        "valor_final" = "valor_final" * "base"
        "contador" = "contador" + 1
    */
    
    while(count < num_2)
    {
        number *= num;
        count += 1;
    }

    // Retorne "Valor Final"
    return number;

}

/*
    Função IV
    Imprime um menu de opções para o usuário.
*/
void menu()
{
    printf("=-=-=-=-=-[Menu]-=-=-=-=-=\n[1] - Calculate Factorial\n[2] - Calculate Potentiation\n[3] - Exit\n=-=-=-=-=-[Menu]-=-=-=-=\nChoice An Option:\n");
}

int main()
{
    // Declaração De Variáveis
    int value, base_value, exponent, option, result;

    /*
        WHILE
        Permite com que o programa fique em um LOOP infinito.
    */
    while(1)
    {
        // Mostra a função menu() e armazena a opção escolhida pelo usuário.
        menu();
        scanf("%d", &option);
        system("cls");

        /*
            Condição I
            se("opção" for igual a 1)
            Solicite ao usuário um número e descubra seu fatorial.

        */

        if(option == 1)
        {
            // Solicita ao usuário um número
            printf("Enter the number:");
            scanf("%d", &value);

            // Armazena em "resultado" o valor calculado pela função
            result = fatorial(value);
            printf("Wait...\n");
            Sleep(1000);
            system("cls");

            // Imprime o fatorial do número digitado
            printf("%d! = ", value);
            numbers(value);
            printf(" = %d\n", result);
        }

        /*
            Condição II
            se("opção" for igual a 2)
            Solicite ao usuário um número para base e outro para o expoente e calcule a potência.

        */
        if(option == 2)
        {
            // Solicita ao usuário o número da base
            printf("Enter the base value:");
            scanf("%d", &base_value);
            
            // Solicita ao usuário o número do expoente
            printf("Enter the exponent value:");
            scanf("%d", &exponent);

            // Armazena em "resultado" o valor calculado pela função
            result = potency(base_value, exponent);
            
            // Imprime a potência dos números digitados.
            printf("Result: %d", result);
            Sleep(2000);
            system("cls");
        } 

    }


}