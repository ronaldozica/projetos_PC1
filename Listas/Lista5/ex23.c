#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int acima_media(int matriz [4] [5], int media)
{
	int soma = 0, linha, coluna;
	putchar('\n');

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)
		{
			if( matriz [linha] [coluna] > media )
				{
					soma ++ ;
					printf("%d > %d\n", matriz [linha] [coluna], media);
				}
		}
	}

	return soma;
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
			media += matriz [linha] [coluna];
		}
		putchar('\n');
	}

	media /= 20;

	printf("\nA quantidade de números maiores que a média da matriz é: %d.\n", acima_media(matriz, media));
}
