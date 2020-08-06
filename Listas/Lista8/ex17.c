#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define q_linha 5
#define q_coluna 5
#define tam 50

int calc_dist(int *vetor_cidades, int q_cidades, int matriz[q_linha][q_coluna])
{
	int cont, i, j, dist = 0;

	for(cont = 0; cont < (q_cidades - 1); cont ++)
	{
		i = vetor_cidades[cont];
		j = vetor_cidades[cont + 1];
		dist += matriz[i][j];
	}

	return dist;
}

int main()
{
	FILE *arquivo;
	int i, j, aux, matriz[q_linha][q_coluna];
	int distancia, *vetor_cidades, q_cidades;
	char str[tam], *str_aux_i, *str_aux_j;

	arquivo = fopen("matriz.bin", "rb");

	if(arquivo == 0)
	{
		printf("\nErro ao abrir o arquivo.\n");
		return 0;
	}

	for(i = 0; i < q_linha; i ++)
	{
		aux = 0;

		fgets(str, tam, arquivo);
		str_aux_i = strtok(str, "\n");

		for(j = 0; j < q_coluna; j ++)
		{
			str_aux_j = strtok(str_aux_i, " ");

			if(aux == 1)
				str_aux_j += 3;

			if(aux == 2)
				str_aux_j += 5;

			if(aux == 3)
				str_aux_j += 8;

			if(aux == 4)
				str_aux_j += 11;	

			matriz[i][j] = atoi (str_aux_j);

			aux ++;
		}
	}

	printf("\nDigite a quantidade de cidades percorridas: ");
	scanf("%d", &q_cidades);
	
	vetor_cidades = malloc( q_cidades * sizeof(int) );

	for(i = 0; i < q_cidades; i ++)
	{
		printf("Digite a %dª cidade (entre 1 e 5): ", i + 1);
		scanf("%d", &vetor_cidades[i]);
		vetor_cidades[i] --;
	}

	distancia = calc_dist(vetor_cidades, q_cidades, matriz);

	printf("\nA distância percorrida foi %d km.\n", distancia);

	free(vetor_cidades);
	fclose(arquivo);
}
