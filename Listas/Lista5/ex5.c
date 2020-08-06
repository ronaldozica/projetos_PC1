#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 15

int maior_val(int vetor[])
{
	int maior_val = 0, cont;

	for(cont = 0; cont < tamanho; cont ++)
	{
		if(vetor[cont] > maior_val)
			maior_val = vetor[cont];
	}

	return (maior_val);
}

int main()
{
	int vetor[tamanho], cont;

	srand(time(0));

	printf("\nPos - Cont\n");

	for(cont = 0; cont < tamanho; cont ++)
	{
		vetor[cont] = (rand() % 101);
		printf(" %.2d - %.2d\n", cont + 1, vetor[cont]);
	}
	
	printf("\nO maior valor do vetor é: %d.\n", maior_val(vetor));
}
