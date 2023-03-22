/*
    LISTA II - EX005
    A média de um aluno em uma disciplina é a média aritmética das notas de suas duas avaliações parciais. Se a média do aluno for maior ou igual a 7 (sete), o aluno está aprovado. Caso a média do aluno seja maior ou igual a 3 (três) e menor que 7 (sete), ele fará exame final. Se o aluno obtiver média menor que 3,0, ele está reprovado. Faça um programa em C para ler as notas das duas avaliações parciais e calcular a média de um aluno em uma determinada disciplina e informar a sua situação. O programa deverá exibir a seguinte frase:
    O aluno obteve média ____ e está [aprovado / reprovado / recuperação].

    Desenvolvido Por Isaque
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    float grade_1, grade_2, final_grade;

    // Solicita a primeira nota do aluno
    printf("Enter the Student's first grade:\n");
    scanf("%f", &grade_1);

    // Solicita a segunda nota do aluno
    printf("Enter the Student's second grade:\n");
    scanf("%f", &grade_2);

    // Calcula a média final do aluno
    final_grade = (grade_1 + grade_2) / 2;

    /*
        AVISOS

        - considere os nomes entre "" como os nomes das variáveis.
        - Os comentários a seguir são apenas pseudocódigos, não possuem nenhuma relação estrutural com a Linguagem C.
    */

    /*
        Condição I

        se(a "média final" for maior ou igual a 7):
        escreva(O estudante obteve a média "media final" e está aprovado.)
    */

    if(final_grade >= 7)
    {
        printf("The student obtained an average %.f and is approved.\n", final_grade);
    }

    /*
        Condição II

        senão se(a "média final" for maior ou igual a 3 E a "média final" for menor que 7):
        escreva(O estudante obteve a média "media final" e está na recuperação.)
    */

    else if(final_grade >= 3 && final_grade < 7)
    {
        printf("The student obtained an average %.f and will take the retake test.\n", final_grade);
    }

    /*
        Condição III

        senão:
        escreva(O estudante obteve a média "media final" e está reprovado.)
    */

    else
    {
        printf("The student obtained average %.f and is disapproved.\n", final_grade);
    }
}