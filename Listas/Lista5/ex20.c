#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

	putchar('\n');
}
