#include <stdio.h>

int main()
{
	FILE *arquivo;
	int matriz[3][3] = {91, 27, 63, 54, 25, 16, 7, 8, 19}, matriz_nova[3][3] = {}, i, j;

	arquivo = fopen("teste_matriz.bin", "wb");

	fwrite(matriz, sizeof(matriz), 1, arquivo);

	fclose(arquivo);

	arquivo = fopen("teste_matriz.bin", "rb");

	fread(matriz_nova, sizeof(matriz), 1, arquivo);

	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 3; j ++)
		{
			printf("%.2d ", matriz[i][j]);
		}
		putchar('\n');
	}

	fclose(arquivo);
}
