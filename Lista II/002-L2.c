/* 
    LISTA II - EX002
    Faça um programa em C para ler a idade de uma pessoa e determinar se essa pessoa é ou não maior de idade (idade maior ou igual a 18 anos).

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int age;

    // Solicita a idade do usuário
    printf("Enter your age:\n");
    scanf("%d", &age);

    /*
        AVISOS

        - considere os nomes entre "" como os nomes das variáveis.
        - Os comentários a seguir são apenas pseudocódigos, não possuem nenhuma relação estrutural com a Linguagem C.
    */

    /*
        Condição I

        se("idade" for mais que ou igual a 18):
        escreva(Você é maior de idade)
    */

    if(age >= 18)
    {
        printf("You are %d years old \nBeing of legal age.", age);
    }

    /*
        Condição II
        
        senão:
        escreva(Você é menor de idade)
    */

    else
    {
        printf("You Are %d Years Old \nAnd Still A Minor.", age);
    }
    
}