#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 10

void organiza_pont(int **pont)
{
	int i, j, *aux;

	for(i = 0; i < tam; i ++)				// organiza o vetor de ponteiros
	{
		for(j = 0; j < tam; j ++)
		{
			if( **(pont + i) > **(pont + j) )	// note que ao utilizar **(pont + i) estou
			{					// me referindo ao conteúdo apontado pelo
								// conteúdo apontado pelo ponteiro, ou seja,
								// **pont == *v, no começo da execução da função
				aux = *(pont + i);
				*(pont + i) = *(pont + j);	// usei uma variável do tipo ponteiro auxiliar
				*(pont + j) = aux;		// para que pudesse trocar o maior número de
								// posição e colocá-lo sempre na coluna da esquerda
			}
		}
	}
}

void confere(int *v)
{
	int i, j;

	for(i = 0; i < tam; i ++)
	{
		for(j = 0; j < tam; j ++)
		{
			if( ( *(v + i) == *(v + j) ) && i != j )
			{
				*(v + i) = rand() % 10;	    // caso um número se repita em outra posição
				i = -1;			    // do vetor, substitui esse número por um novo
				break;		            // e confere se esse número também não se repete
			}
		}
	}
}

int main()
{
	int i, v[tam], *pont[tam];			// note que a variável *pont[tam] é um vetor que 								// contém ponteiros	

	srand(time(0));					// inicializa o gerador de números aleatórios

	for(i = 0; i < tam; i ++)
		*(v + i) = rand() % 10;			// preenche o vetor com números aleatórios

	confere(v);					// verifica se os números colocados no vetor são
							// diferentes, se algum repetir, é substituído
	printf("\nVetor original:\n");

	for(i = 0; i < tam; i ++)
	{
		*(pont + i) = (v + i);			// conteúdo do vetor pont = endereço do vetor v + i
		printf("%.2d ", *(v + i) );
	}

	putchar('\n');

	organiza_pont(pont);				// organiza o vetor de ponteiros, fazendo com que
							// suas posições recebam o maior valor do vetor v

	printf("\nEndereço dos ponteiros:\n");

	for(i = 0; i < tam; i ++)
		printf("%p ", (pont + i) );		// imprime o endereço dos ponteiros apenas para
							// visualização
	putchar('\n');

	printf("\nVetor organizado:\n");

	for(i = 0; i < tam; i ++)
		printf("%.2d ", **(pont + i) );		// imprime o conteúdo apontado pelos ponteiros,
							// ou seja, o vetor organizado em ordem crescente

	putchar('\n');					// vale notar que o vetor v continuou na mesma ordem,
							// o vetor que possui ordem diferente é o *pont
}
