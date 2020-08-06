#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 4

void transpor(int matriz[max][max])
{
	int m_aux[max][max], i, j;

	for(i = 0; i < max; i ++)
		for(j = 0; j < max; j ++)
			m_aux[i][j] = matriz[j][i];

	for(i = 0; i < max; i ++)
		for(j = 0; j < max; j ++)
			matriz[i][j] = m_aux[i][j];
}

int main()
{
	int n, i, j, matriz[max][max];

	srand(time(0));

	printf("\nMatriz original:\n");

	for(i = 0; i < max; i ++)
	{
		for(j = 0; j < max; j++)
		{
			matriz[i][j] = rand() % 100;
			printf("%.2d ", matriz[i][j] );
		}

		putchar('\n');
	}

	transpor(matriz);

	printf("\nMatriz transposta:\n");

	for(i = 0; i < max; i ++)
	{
		for(j = 0; j < max; j++)
			printf("%.2d ", matriz[i][j] );

		putchar('\n');
	}
}
