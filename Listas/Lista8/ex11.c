#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamanho 250

int main()
{
	FILE *arquivo_ci, *arquivo_totais;
	char *str, *sub_str;					// OBS: sub_str = token
	int quantidade_lig, matricula;
	float num_atual, soma_linha, soma_total = 0, i;

	str = malloc( tamanho * sizeof(char) );

	arquivo_ci = fopen("ci.txt", "r");
	arquivo_totais = fopen("totais.txt", "w");

	if( (arquivo_ci == 0) || (arquivo_totais == 0) )
	{
		printf("\nImpossível abrir o arquivo.\n");
		return 0;
	}

	while( fgets(str, tamanho, arquivo_ci) )
	{
		sub_str = strtok(str, " ");
		matricula = atoi(sub_str);

		sub_str = strtok(NULL, " ");
		quantidade_lig = atoi(sub_str);

		for(soma_linha = i = 0; i < quantidade_lig; i ++)
		{
			sub_str = strtok(NULL, " ");
			num_atual = atof(sub_str);
			soma_linha += num_atual;
		}

		if(soma_linha)
			fprintf(arquivo_totais, "%d %.1f\n", matricula, soma_linha);
		soma_total += soma_linha;
	}

	fprintf(arquivo_totais, "%.1f\n", soma_total);

	free(str);
	fclose(arquivo_ci);
	fclose(arquivo_totais);
}
