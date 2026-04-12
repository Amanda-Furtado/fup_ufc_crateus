#include <stdio.h>


// AULA 6 - Estruturas de Repetição
/*Exercícios
- Faça um programa para uma contagem regressiva começando de 1000 até 0
- Faça um programa para somar todos os números ímpares de 1 a 1000
- Faça um programa para somar os números de 1 a n tal que a somando os números
ímpares como positivos e pares como negativos. Por exemplo, para n = 3, temos
a seguinte soma: 1 + (-2) + 3 = 2*/

void set01()
{
    int c = 1000;
    while (c >= 0)
    {
        printf("%i\n", c);
        c--;
    }
}

void set02()
{
    int i = 1, c = 0;
    while (i <= 1000)
    {
        if (i % 2 != 0)
        {
            c += i;
        }
        i++;
    }
    printf("%i", c);
}

void set03 ()
{
    int n, c = 1, resultado = 0;
    scanf("%i", &n);
    while (c <= n)
    {
        if (c % 2 != 0)
        {
            resultado += c;
        }
        else
        {
            resultado -= c;
        }
        c++;
    }
    printf("%i", resultado);
}

int main()
{

    return 0;
}

