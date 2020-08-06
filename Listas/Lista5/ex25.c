#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int segundo_maior_valor(int matriz [4] [5])
{
	int maior_valor = 0, linha, coluna, segundo_valor = 0;

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)
		{
			if( matriz [linha] [coluna] > maior_valor )
				{
					maior_valor = matriz [linha] [coluna];	// encontra o maior valor da matriz
				}
		}
	}

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)	// encontra o segundo maior valor da matriz, verificando
		{					// qual é o maior valor encontrado sem ser o "maior_valor"
			if( ( matriz [linha] [coluna] > segundo_valor ) && (matriz [linha] [coluna] != maior_valor))
				{
					segundo_valor = matriz [linha] [coluna];
				}
		}
	}

	return segundo_valor;
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

	printf("\nA segunda maior entrada da matriz é: %d.\n", segundo_maior_valor(matriz));
	putchar('\n');
}
