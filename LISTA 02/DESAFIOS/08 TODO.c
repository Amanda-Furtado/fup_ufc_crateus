#include <stdio.h>

/*
Em outro dia, Alex estava estudando outro assunto tbm relacionado aos numeros naturais e se
deparou com a seguinte definicao: um numero n e triangular, se n e formado pelo produto de tres
numeros consecutivos. Por exemplo, 120 = 4 · 5 · 6 e um numero triangular. Ele pretender saber, se
um dado numero n e triangular. Ele precisa de sua ajuda novamente.
*/


int main()
{
    int k, n = 1, c = 0;
    
    scanf("%i", &k);
    
    
    while(c <= k){
        for(int x = 1; x <= n; x ++){
            int y = x++;
            int z = y++;
            
            if(x * y * z == n){
                c++;
                printf("%i", n);
            }
            n++;
        }
    }
    return 0;
}
