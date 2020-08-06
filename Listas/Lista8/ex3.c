#include <stdio.h>

#define tamanho 100

int main()
{
	FILE *arquivo;
	char Nome[tamanho] = "Ronaldo Mendonca Zica";
	int i;

	arquivo = fopen("Nome.bin", "wb");

	if(arquivo == 0)
	{
		printf("\nFalha ao abrir o arquivo.\n");
		return 0;
	}

	for(i = 0; *(Nome + i) != 0; i ++)
		fprintf(arquivo, "%c", *(Nome + i) );

	fclose(arquivo);
}
