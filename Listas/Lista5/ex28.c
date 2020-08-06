#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int media_mes(int matriz [8] [12])
{
	int linha, coluna, media = 0, maior_gasto = 0, mes, ano;

	for(linha = 0; linha < 8; linha ++)
	{
		for(coluna = 8; coluna < 12; coluna ++)
		{
			media += matriz [linha] [coluna];	// realiza simultaneamente o cálculo da média e a busca
								// pelo maior valor da matriz
			if(matriz [linha] [coluna] > maior_gasto)
			{
				maior_gasto = matriz [linha] [coluna];
				mes = coluna;
				ano = linha;
			}
		}
	}

	media /= 96;		// vale ressaltar um ponto negativo do programa, é calculado apenas para uma matriz 8 * 12
				// uma maneira de se fazer esse programa mais geral seria utilizar defines para definir
				// o valor da quantidade de linhas e colunas. na linha "media /= 96" poderia ser utilizado
				// "media /= (linha * coluna)", o que resultaria em um código que poderia ser facilmente
				// transportado para matrizes de diferentes tamanhos, apenas mudando o valor definido para
				// linha e coluna
	printf("\nO maior gasto foi no mês %d, do ano %d.\n", mes + 1, ano + 2003);
	return media;
}

int main()
{
	int matriz [8] [12], linha, coluna, media;
	srand(time(0));

	putchar('\n');

	for(linha = 0; linha < 8; linha ++)
	{
		for(coluna = 0; coluna < 12; coluna ++)
		{
			matriz [linha] [coluna] = rand() % 100;
			printf("%.2d ", matriz [linha] [coluna]);
		}
		putchar('\n');
	}

	media = media_mes(matriz);
	printf("\nO gasto mensal médio foi: %d.\n", media);
}


