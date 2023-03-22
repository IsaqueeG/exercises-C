/*
    Desenvolva um programa em C que determine se um cliente de uma loja de departamentos excedeu o limite de crédito de sua conta. O programa deve solicitar os seguintes dados sobre o cliente:

    1. Número da conta. 
    2. Saldo devedor no início do mês.
    3. Total da fatura referente apenas aos itens cobrados no mês em questão. 
    4. Total de créditos aplicados à conta do cliente no mês em questão. 
    5. Limite de crédito permitido. 

    O programa deve receber esses dados, calcular o novo saldo e determinar se o novo saldo supera o limite de crédito do cliente. Para os clientes cujo limite de crédito foi excedido, o programa deve exibir o número da conta do cliente, o limite de crédito e a mensagem "Limite de Crédito Excedido". Exemplo de execução do programa na tela:

    LINK: https://prnt.sc/40OQzVPAzXaq

    Desenvolvido Por Isaque

*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int account;
    float total_invoice, credits_value, limit;
    float opening_balance, exceeded_balance, remaining_balance;

    printf("IF Bank\n");

    // Solicita ao usuário o número da conta
    printf("Enter your account number (-1 to end):\n");
    scanf("%d", &account);

    /*
        CONDIÇÃO I

        se("conta" for menor do que 0):
        retorne 0

    */

    if(account < 0)
    {
        return 0;
    }

    // Solicita ao usuário o saldo inicial do usuário
    printf("Enter your opening account balance:\n");
    scanf("%f", &opening_balance);

    // Solicita ao usuário o valor da fatura mensal
    printf("Enter the invoice amount for the current month:\n");
    scanf("%f", &total_invoice);

    // Solicita ao usuário o valor de créditos adicionados na conta
    printf("Enter the amount of credits placed on the account:\n");
    scanf("%f", &credits_value);

    // Solicita ao usuário o limite de créditos da sua conta
    printf("Enter your account credit limit:\n");
    scanf("%f", &limit);

    // Calcula o saldo excedido
    exceeded_balance = opening_balance + (total_invoice - credits_value);

    // Calcula o saldo restante
    remaining_balance = limit - exceeded_balance;

    /*
        AVISOS

        - considere os nomes entre "" como os nomes das variáveis.
        - Os comentários a seguir são apenas pseudocódigos, não possuem nenhuma relação estrutural com a Linguagem C.
    */

    /*
        CONDIÇÃO II

        se("saldo excedido" for maior do que "limite"):
        escreva(Número da Conta: "conta" Limite de Crédito: "limite" Saldo Total: "saldo total" Limite de Crédito Excedido.)

    */

    if(exceeded_balance > limit)
    {
        printf("Account Number: %dCredit Limit: %.2f\nTotal Balance: %.2f\nCredit Limit Exceeded.\n", account, limit, exceeded_balance);
    }

    /*
        CONDIÇÃO III

        senão:
        escreva(Número da Conta: "conta" Limite de Crédito: "limite" Saldo Total: "saldo total" Limite de Crédito Restante: "saldo restante" Limite de Crédito Sobrando.)

    */

    else
    {
        printf("Account Number: %dCredit Limit: %.2f\nTotal Balance: %.2f\nRemaining Credit Limit: %.2f\n",account, limit, exceeded_balance, remaining_balance);
    }

}