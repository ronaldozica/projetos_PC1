#include <stdio.h>

#define tamanho 100

int main()
{
	FILE *arquivo;
	char nome[tamanho] = "Ronaldo Mendonca Zica";
	int i;

	arquivo = fopen("Nome.txt", "w");

	if(arquivo == 0)
	{
		printf("\nImpossível abrir o arquivo.\n");
		return 0;
	}

	for(i = 0; *(nome + i) != 0; i ++)
		fprintf(arquivo, "%c", *(nome + i) );

	fclose(arquivo);
}
