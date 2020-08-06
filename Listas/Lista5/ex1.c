#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 15

int main()
{
	int vetor[tamanho], cont;

	srand(time(0));				// inicializa o gerador de números aleatórios, com o horário
						// atual, para que seja gerado novos números cada vez que o
	printf("\nPos - Cont\n");		// código seja executado

	for(cont = 0; cont < tamanho; cont ++)
	{					// gera um número aleatório entre 0 e 100 e armazena na
		vetor[cont] = (rand() % 101);	// posição cont do vetor
		printf(" %.2d - %.2d\n", cont + 1, vetor[cont]);
	}
}
