/*
    LISTA II - EX006
    A empresa Bons Amigos decidiu dar aos seus funcionários uma gratificação de Natal. A gratificação é baseada em dois critérios: o número de horas extras trabalhadas e o número de horas que o funcionário faltou ao trabalho. A empresa resolveu utilizar a seguinte fórmula para calcular o prêmio: subtrair dois terços das horas que o funcionário faltou de suas horas extras trabalhadas e distribuir o prêmio de acordo com a tabela abaixo:

    Total = (Horas Extras - 2/3 x Horas que faltou)	Prêmio em R$
    Total > 40 horas					200,00
    30 < Total <= 40					175,00
    20 < Total <=  30					150,00
    10 < Total <= 20					125,00
    Total <= 10 horas 					100,00

    Faça um programa em C para ler o número de horas extras trabalhadas e o número de horas que o funcionário faltou ao trabalho, e calcular o valor de seu prêmio.  O programa deverá exibir a seguinte frase:
    O funcionário receberá R$__________ de gratificação de Natal.

    Desenvolvido Por Isaque
*/


#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int missing_hours, overtime, total, reward;

    // Solicita ao funcionário o total de horas que ele faltou no trabalho
    printf("Enter the total hours missed from work:\n");
    scanf("%d", &missing_hours);

    // Solicita ao funcionário o total de horas extras feitas no trabalho
    printf("Enter total overtime worked:\n");
    scanf("%d", &overtime);

    // Calcula o total de horas com base na fórmula dada na questão
    total = overtime - ((missing_hours / 3) * 2);

    /*
        AVISOS

        - considere os nomes entre "" como os nomes das variáveis.
        - Os comentários a seguir são apenas pseudocódigos, não possuem nenhuma relação estrutural com a Linguagem C.
    */

    /*
        Condição I

        se(o "total" for menor que ou igual a 10):
        recompensa = 100
    */

    if(total <= 10)
    {
        reward = 100;
    }

    /*
        Condição II

        senão se(o "total" for maior que 10 E "total" for menor que ou igual a 20):
        recompensa = 125
    */

    else if(total > 10 && total <= 20)
    {
        reward = 125;
    }

    /*
        Condição III

        senão se(o "total" for maior que 20 E "total" for menor que ou igual a 30):
        recompensa = 150
    */

    else if(total > 20 && total <= 30)
    {
        reward = 150;
    }

    /*
        Condição IV

        senão se(o "total" for maior que 30 E "total" for menor que ou igual a 40):
        recompensa = 175
    */

    else if(total > 30 && total <= 40)
    {
        reward = 175;
    }

    /*
        Condição V

        senão:
        recompensa = 200
    */

    else
    {
        reward = 200;
    }

    // Mostra a gratificação que o funcionário receberá no natal.
    printf("The employee will receive R$%d of Christmas bonus.", reward);
}