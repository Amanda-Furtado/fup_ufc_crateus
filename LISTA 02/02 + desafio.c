#include<stdio.h>


void power()
{
    int m, n, og_m;

    scanf("%i", &m);

    scanf("%i", &n);

    og_m = m;

    for (int i = 1; i < n; i++)
    {
        m*=og_m;
    }

    printf("%i", m);
}


int main ()
{
    float m, n, og_m;

    scanf("%f", &m);

    scanf("%f", &n);

    og_m = m;

    if (n > 0)
    {
        for (int i = 1; i < n; i++)
    {
        m*=og_m;
    }
    }

    else
    {
        n *= -1.0;
        for (int i = 1; i < n; i++)
    {
        m *= og_m;
    }
    m = 1/m;
    }

    printf("%.6f", m);

    return 0;
}
