#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 15

int q_maior(int vetor[], int media)
{
	int quantidade = 0, cont;

	printf("\nNúmeros maiores que a média: ");

	for(cont = 0; cont < tamanho; cont ++)
	{
		if(vetor[cont] >= media)
		{
			quantidade ++;
			printf("%d ", vetor[cont]);
		}
	}

	return (quantidade);
}

int main()
{
	int vetor[tamanho], cont, media = 0;

	srand(time(0));

	printf("\nPos - Cont\n");

	for(cont = 0; cont < tamanho; cont ++)
	{
		vetor[cont] = (rand() % 101);
		media += vetor[cont];
		printf(" %.2d - %.2d\n", cont + 1, vetor[cont]);
	}

	media /= tamanho;
	
	printf("\nA média dos números digitados é: %d.", media);
	printf("\nA quantidade de números com valor maior do que a média é: %d.\n", q_maior(vetor, media));
}
