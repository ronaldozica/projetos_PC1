#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int preenche_w(int *Q, int *R, int* *W)		// observe que o vetor W declarado aqui é um vetor de ponteiros
{
	int n = 0, i, j, pos;			// n = tamanho de W, esse tamanho muda ao longo da função

	int *W_aux;				// cria um vetor auxiliar, foi utilizado somente para auxiliar
						// o raciocínio
	W_aux = malloc (n * sizeof(int) );

	for(i = 0; i < 12; i ++)
	{
		for(j = i; j < 20; j ++)
		{
			if( Q[i] == R[j] )	// identifica a interseção de Q e R
			{
				n ++;		// aumenta o tamanho de W

				W_aux = realloc( W_aux, n * sizeof(int) );

						// aumenta dinamicamente W de acordo com o novo tamanho

				W_aux[n - 1] = Q[i];

				for(pos = 0; pos < (n - 1); pos ++)
				{
					if( W_aux[n - 1] == W_aux[pos] )
					{
						n --;	// diminui o tamanho de W, removendo elementos repetidos
						W_aux = realloc( W_aux, n * sizeof(int) );
					}
				}

			}
		}
	}

	*W = W_aux;		// por fim, o apontado pelo vetor W recebe o endereço do vetor W_aux, ou seja,
				// *W = &(W_aux[0])
	return n;
}

int main()
{
	int i, *Q, *R, *W, n;				// a variável n contém o tamanho W

	srand(time(0));					// inicializa o gerador de números aleatórios

	Q = malloc (12 * sizeof(int) );			// aloca os vetores Q e R dinamicamente
	R = malloc (20 * sizeof(int) );

	printf("\nVetor Q: ");

	for(i = 0; i < 12; i ++)			// imprime o vetor Q
	{
		Q[i] = rand() % 25;
		printf("%.2d ", Q[i]);
	}

	printf("\nVetor R: ");				// imprime o vetor R

	for(i = 0; i < 20; i ++)
	{
		R[i] = rand() % 25;
		printf("%.2d ", R[i]);
	}

	n = preenche_w(Q, R, &W);			// preenche o vetor W com interseção de Q e R

	printf("\nVetor W: ");

	for(i = 0; i < n; i ++)				// imprime o vetor W
		printf("%.2d ", W[i]);

	putchar('\n');					// imprime um NewLine
}
