/*
	Lista 3 - EX008
	Uma agência bancária possui vários tipos de investimentos com rendimentos mensais, conforme a tabela abaixo:

	Valor Mínimo 		Descrição 		Rentabilidade Mensal
	R$ 100,00 		Poupança 		0,5%
	R$ 1000,00 		Fundo Renda Fixa 	1%
	R$ 2500,00 		CDBs 			1,5%

	Escreva um programa em C que leia o valor que o cliente deseja investir e calcule e exiba os tipos de aplicação que ele pode fazer e qual será sua rentabilidade (lucro) em cada uma delas (se for mais de uma). 
	O programa termina quando for digitado um valor de investimento nulo ou negativo.
	Obs: considere a possibilidade do valor a ser investido pelo cliente não exigir os requisitos mínimos de nenhuma das modalidades de investimento.

	Desenvolvido por Isaque
*/

#include <stdio.h>

int main()
{
    float value, profitability;

	/*
        DO-WHILE
        Solicita um valor ao usuário enquanto "valor" for maior que 0
    */
	do
    {
		// Solicita ao usuário o valor que será investido
		printf("Amount to be invested:\n");
		scanf("%f", &value);

		/*
            CONDIÇÃO I

            se("valor" for maior que 0 ou "valor" for menor que 100):
            escreva(Não há opções de investimento disponíveis!)

        */
		if(value > 0 && value < 100)
        {
			printf("There are no investment options available!\n");
		}

		/*
            CONDIÇÃO II

            se("valor" for maior que ou igual a 100):
            escreva(Poupança -> Rentabilidade: R$"rentabilidade")

        */	
		else if(value >= 100) 
        {
            profitability = value * 0.005f;
			printf("Savings -> Profitability: R$%.2f\n", profitability);
		}

		/*
            CONDIÇÃO III

            se("valor" for maior que ou igual a 1000):
            escreva(Fundo de Renda Fixa -> Rentabilidade: R$"rentabilidade")

        */	
		else if(value >= 1000) 
        {
			profitability = value * 0.01f;
            printf("Fixed Income Fund -> profitability: R$%.2f\n", profitability);
		}

		/*
            CONDIÇÃO IV
            senão:
            escreva(CDBs -> Rentabilidade: R$"rentabilidade")

        */	
		else
        {
			profitability = value * 0.015f;
            printf("CDBs -> Profitability: R$%.2f\n", profitability);
		}
	
	}while(value > 0);
}