/*
    LISTA I - EX005
    A Companhia de Carros Usados João Honesto paga a seus funcionários um salário de R$ 800,00 por mês, mais uma comissão de R$ 100,00 por carro vendido e mais 5% do valor total de suas vendas. Escreva um programa em C que solicite ao usuário os dados necessários para calcular o salário total de um vendedor em um dado mês.
*/

/*
    VOCABULÁRIO
    WAGE = SALÁRIO | KICKBACK = COMISSÃO | TOTAL_WAGE = SALÁRIO TOTAL 
    ALL_SALES = TOTAL DE VENDAS | SOLD_CARS =  CARROS VENDIDOS
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis

    // Variáveis abaixo armazenam o valor fixo do salário e da comissão.                    
    const float wage = 800.00, kickback = 100.00;                  
    float total_wage, all_sales; // Variáveis para armazenar o salário total e o total de vendas
    int sold_cars; // Variável que armazena a quantia de carros vendidos

    // Solicitando ao usuário a quantia de carros vendido
    printf("Type the number of cars sold:\n");
    scanf("%d", &sold_cars);

    // Calcula o valor total da comissão + 5% do valor total das vendas
    all_sales = (kickback * sold_cars) + (kickback * sold_cars) * 0.05;
    // Calcula o valor total do salário
    total_wage = all_sales + wage;

    // Imprimindo Resultados
    printf("Sold Cars: %d\nSales Amount: %.2f\nTotal Wage: %.2f\n", sold_cars, all_sales, total_wage);
    // Mostra quantos carros foram vendidos, valor total das vendas e o salário total do funcionário


}