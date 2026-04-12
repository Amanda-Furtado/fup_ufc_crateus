#include <stdio.h>


void check_primo()
{
    int n, divisores = 0;
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            divisores++;
        }
    }

    if (divisores == 2)
    {
        printf("%i e primo.", n);
    }
    else
    {
        printf("%i n e primo.", n);
    }
}


int main()
{
    int n, k, divisores = 0;
    scanf("%i", &k);

    for (int i = 1; i < k; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
            n = j;
        }
        if (divisores == 2)
        {
            printf("%i\n", n);
        }
        divisores = 0;
    }

    return 0;
}
