#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define tamanho 15

int eliminar_repetidos(int vetor_rep[])
{
	int pos, cont;

	for(pos = 0; pos < tamanho; pos ++)
	{
		for(cont = 0; cont < tamanho; cont ++)
		{
			if(pos != cont)
			{
				while(vetor_rep[pos] == vetor_rep[cont])
				{
					vetor_rep[cont] = (rand() % 101);
				}
			}
		}
	}

	printf("\nPos - Conteúdo\n");

	for(pos = 0; pos < tamanho; pos ++)
		printf("\n%.2d - %.2d", pos + 1, vetor_rep[pos]);

	putchar('\n');
}

int main()
{
	int vetor[tamanho], cont;

	srand(time(0));

	printf("\nPos - Conteúdo\n");

	for(cont = 0; cont < tamanho; cont ++)
	{
		vetor[cont] = (rand() % 101);
		printf(" %.2d - %.2d\n", cont + 1, vetor[cont]);
	}
	
	printf("\nO vetor após eliminar os números repetidos é:\n");
	eliminar_repetidos(vetor);
}
