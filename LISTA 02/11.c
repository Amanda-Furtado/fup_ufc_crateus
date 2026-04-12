#include <stdio.h>

int main()
{
    int n, c = 1;
    float soma, nota, maior, menor;
    
    scanf("%i", &n);
    
    scanf("%f", &nota);
    maior = menor = nota;
    soma += nota;
    
    while (c < n){
        scanf("%f", &nota);
        if (nota > maior){
            maior = nota;
        }
        if (nota < menor){
            menor = nota;
        }
        soma += nota;
        c++;
    }
    
    printf("Maior: %.2f Menor: %.2f Média: %.2f", maior, menor, soma/n);
    
    return 0;
}
