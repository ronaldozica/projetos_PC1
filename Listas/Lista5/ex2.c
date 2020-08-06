#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 15

int quant_pares(int vetor_teste[])
{
	int cont, q_pares = 0;

	for(cont = 0; cont < tamanho; cont ++)
	{
		if(vetor_teste[cont] % 2 == 0)
			q_pares ++;
	}

	return(q_pares);
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
		
	printf("\nO vetor possui %d números pares.\n", quant_pares(vetor));
}
