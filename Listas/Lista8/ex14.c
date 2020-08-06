#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define tamanho_vetor 20
#define tamanho_string 200

void exibe_arquivo(FILE *arquivo);

int elimina_repetidos(FILE *arquivo)
{
	char str[tamanho_string], *str_aux_i, *str_aux_j;
	int i, j, num_i, num_j, aux_i, aux_j;

	fseek(arquivo, 0, SEEK_SET);

	fgets(str, tamanho_string, arquivo);

	for(i = 0; i < (tamanho_vetor - 1); i ++)
	{
		str_aux_i = strtok(str, " ");

		for(aux_i = 0; aux_i < i; aux_i ++)
			str_aux_i = strtok(NULL, " ");

		num_i = atoi(str_aux_i);

		for(j = i + 1; j < tamanho_vetor; j ++)
		{
			str_aux_j = strtok(str, " ");

			for(aux_j = 0; aux_j < j; aux_j ++)
				str_aux_j = strtok(NULL, " ");

			num_j = atoi(str_aux_j);

			if(num_i == num_j)
				printf("%d ", num_i);
		}
	}
}

void exibe_arquivo(FILE *arquivo)
{
	char str[tamanho_string];

	fseek(arquivo, 0, SEEK_SET);

	fgets(str, tamanho_string, arquivo);

	printf("\n%s\n", str);
}

int main()
{
	FILE *arquivo;
	int *vetor, i;

	if(arquivo == 0)
	{
		printf("\nImpossível abrir o arquivo.\n");
		return 0;
	}

	vetor = malloc( tamanho_vetor * sizeof(int) );

	srand(time(0));

	arquivo = fopen("questao14.txt", "w+");

	for(i = 0; i < tamanho_vetor; i ++)
	{
		*(vetor + i) = rand() % 21;
		fprintf(arquivo, "%.2d ", *(vetor + i) );
	}

	exibe_arquivo(arquivo);

	elimina_repetidos(arquivo);

	exibe_arquivo(arquivo);

	fclose(arquivo);
	free(vetor);
}
