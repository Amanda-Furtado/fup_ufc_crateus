#include <stdio.h>

int main ()
{
    int n, aux;
    scanf("%i", &n);
    aux = n;
    while (aux != 0)
    {
        scanf("%i", &aux);
        n += aux;
    }
    printf("%i", n);
    return 0;
}
