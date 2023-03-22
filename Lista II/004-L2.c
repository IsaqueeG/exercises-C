/*
    LISTA II - EX004
    A empresa XYZ Ltda. concedeu uma gratificação de 20% do valor do salário a todos os funcionários com tempo de serviço na empresa igual ou superior a dez anos e de 10% aos demais. Faça um programa em C para solicitar o tempo do serviço e o salário atual do funcionário e calcular e exibir o valor da gratificação que ele irá receber.

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int time;
    float salary, new_salary;

    // Solicita o tempo de serviço do funcionário dentro da empresa
    printf("Enter your service time:\n");
    scanf("%d", &time);

    // Solicita o salário atual do funcionário dentro da empresa
    printf("Enter your current salary:\n");
    scanf("%f", &salary);

    /*
        AVISOS

        - considere os nomes entre "" como os nomes das variáveis.
        - Os comentários a seguir são apenas pseudocódigos, não possuem nenhuma relação estrutural com a Linguagem C.
    */

    /*
        Condição I

        se(o "tempo" for maior ou igual a 10):
        "Novo Salário" = "Salário" + ("Salário" x 0.2)
    */

    if(time >= 10)
    {
        new_salary = salary + (salary * 0.2);
    }

    /*
        Condição II

        senão:
        "Novo Salário" = "Salário" + ("Salário" x 0.1)
    */

    else
    {
        new_salary = salary + (salary * 0.1);
    }

    printf("Time of Service: %d Years\nSalary: %.2ff\nSalary + Bonus: %.2lf\n", time, salary, new_salary);
    // Mostra o tempo de serviço do funcionário, salário atual e o salário + gratificação
}