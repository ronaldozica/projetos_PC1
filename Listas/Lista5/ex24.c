#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior_valor(int matriz [4] [5])
{
	int maior_valor = 0, linha, coluna;

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)
		{
			if( matriz [linha] [coluna] > maior_valor )
				{
					maior_valor = matriz [linha] [coluna];
				}
		}
	}

	return maior_valor;
}

int main()
{
	int matriz [4] [5], linha, coluna, media = 0;
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

	printf("\nO maior entrada da matriz é: %d.\n", maior_valor(matriz));
	putchar('\n');
}
