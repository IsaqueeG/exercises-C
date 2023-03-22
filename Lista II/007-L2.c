/*
    LISTA II - EX007

    Escreva um programa em C que receba o peso, a altura e o sexo de uma pessoa, calcule e imprima o seu peso ideal, informando se o peso real coincide com o ideal ou se está abaixo ou acima do mesmo. Utilize as seguintes fórmulas:

    Para homens: Peso ideal = 72,7 x Altura – 58
    Para mulheres: Peso ideal = 62,1 x Altura – 44,7

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int gender;
    float ideal_weight, weight, height;

    printf("Ideal Weight Calculator\n");

    // Solicita a altura do usuário em metros
    printf("Enter your height (in meters [m]):\n");
    scanf("%f", &height);

    // Solicita o peso atual do usuário
    printf("Enter your current weight:\n");
    scanf("%f", &weight);

    // Solicita o gênero do usuário
    printf("[1] Man \n[2] Woman \nSelect your gender:");
    scanf("%d", &gender);

    /*
        AVISOS

        - considere os nomes entre "" como os nomes das variáveis.
        - Os comentários a seguir são apenas pseudocódigos, não possuem nenhuma relação estrutural com a Linguagem C.
    */

   /*
        ESTRUTURA DE SELEÇÃO

        - De acordo com a escolha do gênero feito pelo usuário haverá um caso para cada escolha.
   */

    switch (gender)
    {
        /*
            Caso 1

            - Se a pessoa escolheu a opção "1" o programa fará o seguinte:
        */

        case 1:
            
            // Calcula o peso ideal da pessoa (Homem)
            ideal_weight = (72.7 * height) - 58;

            /*
                Condição I-I

                se("peso" for menor que o "peso ideal"):
                escreva(Peso atual: "peso" Peso ideal: "peso ideal" Você está abaixo do peso!)

            */

            if(weight < ideal_weight)
            {
                printf("Current weight: %.2f\nIdeal weight: %.2f\nYou are underweight!", weight, ideal_weight);
                break;
            }

            /*
                Condição II-I

                senão se("peso" for maior que o "peso ideal"):
                escreva(Peso atual: "peso" Peso ideal: "peso ideal" Você está acima do peso!)

            */

            else if(weight > ideal_weight)
            {
                printf("Current weight: %.e\nIdeal weight: %.f\nYou are overweight!", weight, ideal_weight);
                break;
            }

            /*
                Condição III - I

                senão:
                escreva(Peso atual: "peso" Peso ideal: "peso ideal" Você está no peso ideal.)

            */

            else
            {
                printf("Current weight: %.e\nIdeal weight: %.f\nYou are at your ideal weight.", weight, ideal_weight);
                break;
            }

        /*
            Caso 2

            - Se a pessoa escolheu a opção "2" o programa fará o seguinte:
        */
    
        case 2:

            // Calcula o peso ideal da pessoa (Mulher)
            ideal_weight = (62.1 * height) - 44.7;

            /*
                Condição I-II

                se("peso" for menor que o "peso ideal"):
                escreva(Peso atual: "peso" Peso ideal: "peso ideal" Você está abaixo do peso!)

            */

            if(weight < ideal_weight)
            {
                printf("Current weight: %.2f\nIdeal weight: %.2f\nYou are underweight!", weight, ideal_weight);
                break;
            }

            /*
                Condição II-II

                senão se("peso" for maior que o "peso ideal"):
                escreva(Peso atual: "peso" Peso ideal: "peso ideal" Você está acima do peso!)

            */

            else if(weight > ideal_weight)
            {
                printf("Current weight: %.e\nIdeal weight: %.f\nYou are overweight!", weight, ideal_weight);
                break;
            }

            /*
                Condição III - II

                senão:
                escreva(Peso atual: "peso" Peso ideal: "peso ideal" Você está no peso ideal.)

            */

            else
            {
                printf("Current weight: %.e\nIdeal weight: %.f\nYou are at your ideal weight.", weight, ideal_weight);
                break;
            }

            break;
    }


}