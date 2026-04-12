#include <stdio.h>

/*
Em outro dia, Alex estava estudando outro assunto tbm relacionado aos numeros naturais e se
deparou com a seguinte definicao: um numero n e triangular, se n e formado pelo produto de tres
numeros consecutivos. Por exemplo, 120 = 4 · 5 · 6 e um numero triangular. Ele pretender saber, se
um dado numero n e triangular. Ele precisa de sua ajuda novamente.
Desafio: Modifique o programa para que receba um inteiro positivo k e imprima os k primeiros
numeros triangulares.
*/



int main()
{
    int k;
    
    scanf("%i", &k);
    
    for(int x = 1; x <= k; x++){
            int y = x + 1;
            int z = y + 1;
            
            printf("%i\n", x * y * z);
    }
    
    return 0;
}
