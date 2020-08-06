#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_impares(int matriz [4] [5])
{
	int soma = 0, linha, coluna, soma_ant = 0;

	for(linha = 0; linha < 4; linha ++)
	{
		for(coluna = 0; coluna < 5; coluna ++)
		{
			if( (matriz [linha] [coluna] % 2) != 0 )
				{
					soma += matriz [linha] [coluna];
					printf("\n %d + %d = %d\n", soma_ant , matriz [linha] [coluna], soma);
					soma_ant = soma;
				}
		}
	}

	return soma;
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

	printf("\nA soma dos números ímpares da matriz é: %d.\n", soma_impares(matriz));
}
