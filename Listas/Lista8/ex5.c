#include <stdio.h>

#define tamanho 100

int main()
{
	FILE *arquivo;
	char nome_arq[tamanho], ch_atual;
	int q_bytes = 0;

	printf("\nDigite o nome de um arquivo: ");
	scanf("%s", nome_arq);

	arquivo = fopen(nome_arq, "r");

	if(arquivo == 0)
	{
		printf("\nNão foi possível abrir esse arquivo.\n");
		return 0;
	}

	while( (ch_atual = fgetc(arquivo) ) != EOF )
		q_bytes ++;

	printf("\nO arquivo aberto possui %d bytes.\n", q_bytes);

	fclose(arquivo);
}
