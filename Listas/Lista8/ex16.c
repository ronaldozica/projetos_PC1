#include <stdio.h>

#define q_linhas 5
#define q_colunas 5

void preenche(int matriz[q_linhas][q_colunas])
{
	matriz[0][0] = matriz[1][1] = matriz[2][2] = matriz[3][3] = matriz[4][4] = 00;
	matriz[0][1] = matriz[1][0] = 15;
	matriz[0][2] = matriz[2][0] = 30;
	matriz[0][3] = matriz[3][0] = 05;
	matriz[4][0] = matriz[0][4] = 12;
	matriz[3][1] = matriz[1][3] = 17;
	matriz[4][1] = matriz[1][4] = 28;
	matriz[3][2] = matriz[2][3] = 03;
	matriz[4][2] = matriz[2][4] = 11;
	matriz[4][3] = matriz[3][4] = 80;
	matriz[1][2] = matriz[2][1] = 10;
}

int main()
{
	FILE *arquivo;
	int i, j, matriz[q_linhas][q_colunas];

	preenche(matriz);

	arquivo = fopen("matriz.bin", "wb");

	if(arquivo == 0)
	{
		printf("\nErro ao abrir o arquivo.\n");
		return 0;
	}

	for(i = 0; i < q_linhas; i ++)
	{
		for(j = 0; j < q_colunas; j ++)
		{
			fprintf(arquivo, "%.2d ", matriz[i][j]);
		}

		fprintf(arquivo, "%c", '\n');
	}

	fclose(arquivo);
}