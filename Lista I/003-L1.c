/*
    LISTA 1 - EX003
    Escreva um programa em C que leia o raio de um círculo e imprima seu diâmetro, o valor de sua circunferência e sua área. Use o valor constante de 3,14159 para "pi".
*/

/*
    VOCABULÁRIO
    RADIUS = RAIO | CIRCUMFERENCE = CIRCUFERÊNCIA 
    DIAMETER = DIÂMETRO | AREA = ÁREA
*/

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    const float pi = 3.14159;
    float radius, circumference, diameter, area;

    // Solicitando ao usuário o tamanho do raio
    printf("type the radius of the circle:\n");
    scanf("%f", &radius);

    // Cálculos
    diameter = 2 * radius;
    area = pi * (radius * radius), circumference = pi * diameter;
    // Ao ser realizado os cálculos os valores são armazenados nas respectivas variáveis;

    // Imprimindo os resultados
    printf("Area: %.2f\nCircumference: %.2f\nDiameter: %.2f\n", area, circumference, diameter);

}