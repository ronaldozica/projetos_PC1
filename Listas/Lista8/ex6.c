#include <stdio.h>

#define tamanho 100

int main()
{
	FILE *arq_in, *arq_out;
	char nome_orig[tamanho], nome_dest[tamanho], ch_atual;

	printf("\nDigite um arquivo que será copiado: ");
	scanf("%s", nome_orig);

	printf("\nDigite o nome do arquivo destino: ");
	scanf("%s", nome_dest);

	arq_in = fopen(nome_orig, "r");

	arq_out = fopen(nome_dest, "w");

	if( (arq_in == 0) || (arq_out == 0) )
	{
		printf("\nAlgum dos arquivos não pôde ser aberto.\n");
		return 0;
	}

	while( (ch_atual = fgetc(arq_in) ) != EOF )
		fprintf(arq_out, "%c", ch_atual);

	fclose(arq_in);
	fclose(arq_out);
}
