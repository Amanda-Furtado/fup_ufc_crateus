#include <stdio.h>

int main()
{
    int n, x, y;
    scanf("%i", &n);
    
    for(int i = 1; i <=n; i++){
        for(x = 1; x < i; x++){
            for(y = x; y < i; y++){
                if(x*x + y*y == i*i){
                    printf("%i + %i = %i \n",x,y,i);
                }
            }
        }
    }
    
    
    return 0;
}