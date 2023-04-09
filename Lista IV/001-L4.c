/*
    Lista 4 - EX001
    Escreva um programa em C para fazer conversão de dólar para real e vice-versa. O programa deverá apresentar os seguintes subprogramas:

    a) Função para converter real em dólar (1 real = 0,3 dólar). Esta função receberá como parâmetro o valor em real a ser convertido e deverá calcular e retornar para o programa o valor correspondente em dólar (o programa principal se encarrega de exibir o resultado ao usuário).

    b) Procedimento para converter dólar em real (1 dólar = 3,25 reais). Este procedimento receberá como parâmetro o valor em dólar a ser convertido e deverá calcular e exibir o valor correspondente em reais.

    OBS.1: O programa deverá permitir que o usuário faça quantas conversões ele desejar e só deverá terminar sua execução se o usuário solicitar.

    OBS.2: Toda entrada de dados deve ser feita pelo programa principal.

    Desenvolvido Por Isaque
*/

#include <stdio.h>
#include <stdlib.h>

/*
    Função I
    Converte o valor inserido em real em dólar.

    conversorDolar(int "valor") <- recebe como parâmetro um valor inteiro
    "real" = "valor"
    retorne real x 0.3
*/

float dollarConverter(int var)
{
    int real = var;
    return real * 0.3;
}

/*
    Função II
    Converte o valor inserido em dólar em real.

    conversorReal(int "valor") <- recebe como parâmetro um valor inteiro
    "dólar" = "valor"
    retorne dólar x 3.25
*/

float realConverter(int var)
{
    int dollar = var;
    return dollar * 3.25;
}

int main()
{
    // Declaração De Variáveis
    int option;
    float value, converted_value;

    /*
        WHILE
        Permite com que o programa fique em um LOOP infinito.
    */

    while(option)
    {
        // Menu De Opções
        printf("IFPE - Exchange\n[1] Real Converter [R$]\n[2] Dollar Converter [$]\n[3] Exit\n");
        printf("Choice An Option:\n");
        scanf("%d", &option);
        system("cls");


        /*
            SWITCH
            De acordo com a opção escolhida pelo usuário entrará em um dos casos abaixo:
        */
        switch (option)
        {
            /*
                CASO(opção escolhida foi 1)
                Irá fazer a conversão de REAL para DÓLAR.
            */
            case 1:
                // Solicita ao usuário a quantia que ele deseja converter
                printf("Type In (BRL) How Much You Want To Convert:");
                scanf("%f", &value);

                // Armazena na variável o valor convertido na função
                converted_value = dollarConverter(value);

                // Imprime o valor depositado + Cotação + Valor Convertido
                printf("Deposited Amount: R$%.2f\nCurrent Quotation: $0.3\nConverted Value: $%.2f", value, converted_value);
                Sleep(5000);
                system("cls");
                break;

            /*
                CASO(opção escolhida foi 2)
                Irá fazer a conversão de DÓLAR para REAL.
            */
            case 2:
                // Solicita ao usuário a quantia que ele deseja converter
                printf("Type In (USD) How Much You Want To Convert:");
                scanf("%f", &value);

                // Armazena na variável o valor convertido na função
                converted_value = realConverter(value);

                // Imprime o valor depositado + Cotação + Valor Convertido
                printf("Amount Deposited: $%.2f\nCurrent Price: R$3.25\nConverted Value: R$%.2f", value, converted_value); 
                Sleep(5000);
                system("cls");
                break;

            /*
                CASO(opção escolhida foi 3)
                Irá fechar o programa.
            */
            case 3:
                // Finaliza o programa
                system("pause");

            /*
                CASO-PADRÃO(não entre em nenhum dos casos)
                Indicará que a opção digitada é inválida.
            */
            default:
                printf("Invalid Option");
                Sleep(1500);
                system("cls");
                break;
        }

    }
}