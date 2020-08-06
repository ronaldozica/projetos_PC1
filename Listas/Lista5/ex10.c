#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define tamanho 15

float maior_num(int n, float vetor[])
{
	int cont, maior_n = 0;

	for(cont = 0; cont < n; cont ++)
	{
		if(vetor[cont] > maior_n)
			maior_n = vetor[cont];
	}

	return(maior_n);
}

int main()
{
	int cont, n;
	float v[tamanho];

	do
	{
		printf("\nDigite n: ");
		scanf("%d", &n);
	}while( (n < 1) || (n > 15) );

	srand(time(0));

	printf("\nPos - Conteúdo\n");

	for(cont = 0; cont < tamanho; cont ++)
	{
		v[cont] = (rand() % 101);
		printf(" %.2d - %.2f\n", cont + 1, v[cont]);
	}
	
	printf("\nO maior número entre os %d primeiros números do vetor é: %f\n", n, maior_num(n, v));
}
