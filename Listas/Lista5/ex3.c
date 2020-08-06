#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 15

int soma_impares(int vetor_teste[])
{
	int cont, soma = 0;

	for(cont = 0; cont < tamanho; cont ++)
	{
		if(vetor_teste[cont] % 2 != 0)
			soma += vetor_teste[cont];
	}

	return(soma);
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
	
	printf("\nA soma dos números ímpares do vetor é: %d.\n", soma_impares(vetor));
}
