#include <stdio.h>


// AULA 6 - Estruturas de Repetição
/*Exercícios
- Faça um programa em C para somar 3 números,
multiplicar a soma pelo segundo e depois dividir o
resultado da multiplicação pelo terceiro
- Faça um programa em C que receba os
catetos de um triângulo e mostre na tela o
quadrado da hipotenusa*/

void set01()
{
    int n1, n2, n3;
    scanf("%i %i %i", &n1, &n2, &n3);
    n1 += n2 + n3;
    n1 *= n2;
    printf("%i", n1 /n3);
}

void set02()
{
    int ca, co, hip;
    scanf("%i %i", &ca, &co);
    hip = ca*ca + co*co;
    
    printf("%i", hip);
}


int main()
{
    
    return 0;
}

