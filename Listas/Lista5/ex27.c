#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void eliminar_repetidos(int matriz [4] [5])
{
	int linha, coluna, i, j;

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)
		{
			for(i = 0; i < 4; i ++)
			{
				for(j = 0; j < 5; j ++)
				{
					if( (matriz [linha] [coluna] == matriz [i] [j]) && ( (i != linha) || (j != coluna) ) )
					{
						matriz [linha] [coluna] = rand() % 20;
						i = - 1;	// gera um novo valor para essa posição e verifica novamente se esse
						break;		// valor não se repete, isso ocorre quantas vezes for necessário até
					}			// que o número gerado não se repita na matriz
				}
			}
		}
	}
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
			matriz [linha] [coluna] = rand() % 20;	// é interessante utilizar a menor quantidade de números possível
			printf("%.2d ", matriz [linha] [coluna]);	// para que se possa verificar facilmente o funcionamento
		}							// do programa
		putchar('\n');
	}

	eliminar_repetidos(matriz);

	putchar('\n');

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)
		{
			printf("%.2d ", matriz [linha] [coluna]);
		}
		putchar('\n');
	}
}


