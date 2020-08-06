#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define tamanho 100

int main()
{
	FILE *arquivo_txt, *arquivo_bin;
	int vetor[tamanho], i, quant_dig, n_min, tam_arquivo_txt, tam_arquivo_bin;

	arquivo_txt = fopen("num_rand.txt", "w" );
	arquivo_bin = fopen("num_rand.bin", "wb");

	if( (arquivo_txt == 0) || (arquivo_bin == 0) )
	{
		printf("\nImpossível abrir o arquivo.\n");
		return 0;
	}

	srand(time(0));

	printf("\nInsira a quantidade de dígitos que possuírão cada número do vetor: ");
	scanf("%d", &quant_dig);

	quant_dig = pow(10, quant_dig);
	n_min = quant_dig / 10;

	if(quant_dig)
	{
		for(i = 0; i < tamanho; i ++)
		{
			vetor[i] = n_min + ( rand() % (quant_dig - n_min) );
			fprintf(arquivo_txt, "%d", vetor[i]);
			fwrite(&vetor[i], 1, sizeof(int), arquivo_bin);
		}
	}

	tam_arquivo_txt = ftell(arquivo_txt);
	tam_arquivo_bin = ftell(arquivo_bin);

	printf("\nTamanho do arquivo txt: %d.\nTamanho do arquivo bin: %d.\n", tam_arquivo_txt, tam_arquivo_bin);

	fclose(arquivo_txt);
	fclose(arquivo_bin);
}
