#include <stdio.h>

/*
Afonso tem um grande entusiasmo pela Matematica. Certo dia, ele estava estudando sobre numeros
naturais e percebeu que um numero da forma n^3 pode ser definido pela soma de n ımpares consecu-
tivos. Por exemplo, 2^3 = 8 = 3 + 5. Dado um inteiro n, ele deseja saber quais seriam os n ımpares
correspondentes tais que a soma deles seja igual a n3. Ele nao sabe programar e precisa de sua ajuda.

VICTOR:
int main()
{
	int n,z,aux;
	scanf("%i",&n);
	z = (n*n*n)/n;
	aux = 1-n;
	for(int i=1; i<=n; i++)
	{
		if(i!=n)
		{
            printf("%i + ",z+aux);
            aux+=2;
		}
		else
		{
		    printf("%i = %i",z+aux,n*n*n);
		}
	}

	return 0;
}


*/


int main(){
    int n, y = 2, potencia, aux, valor;
    
    scanf("%i", &n);
    aux = n;
    
    for(int i = 1; i < 3; i++){
        aux = n * aux;
    }
    
    potencia = aux;
    
    if(n%2 == 0){
        valor = aux/n + 1;
    }else{
        valor = aux/n;
    }
    
    aux = valor;
    
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            aux += valor - y;
            printf("%i + ", valor - y);
        }else{
            aux += valor + y;
            printf("%i + ", valor + y);
            y += 2;
        }
        
        if (aux == potencia){
            printf("%i = %i\n", valor, potencia);
            break;
        }
    }
    
    
    return 0;
}
