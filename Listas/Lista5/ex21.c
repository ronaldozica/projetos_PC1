#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int quant_pares(int matriz [4] [5])
{
	int n_pares = 0, linha, coluna;

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)
		{
			if( (matriz [linha] [coluna] % 2) == 0 )
				n_pares ++;
		}
	}

	return n_pares;
}

int main()
{
	int matriz [4] [5], linha, coluna;
	srand(time(0));

	putchar('\n');

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)
		{
			matriz [linha] [coluna] = rand() % 101;
			printf("%d ", matriz [linha] [coluna]);
		}
		putchar('\n');
	}

	printf("\nA matriz possui %d números pares.\n", quant_pares(matriz));
}
