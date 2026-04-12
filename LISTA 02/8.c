#include <stdio.h>

/*
Em outro dia, Alex estava estudando outro assunto tbm relacionado aos numeros naturais e se
deparou com a seguinte definicao: um numero n e triangular, se n e formado pelo produto de tres
numeros consecutivos. Por exemplo, 120 = 4 · 5 · 6 e um numero triangular. Ele pretender saber, se
um dado numero n e triangular. Ele precisa de sua ajuda novamente.
*/


int main()
{
    int n, cond = 0;
    
    scanf("%i", &n);
    
    for(int x = 1; x < n/2; x++){
        int y = x + 1;
        int z = y + 1;
        
        if(x * y * z == n){
            printf("%i E triangular\n", n);
            cond = 1;
            break;
        }
    }
    if(cond == 0){
        printf("%i N e triangular\n", n);
    }
    return 0;
}
