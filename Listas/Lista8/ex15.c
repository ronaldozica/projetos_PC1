#include <stdio.h>

#define tam 200

void exibe_nomes(FILE *arquivo)
{
	int i;
	char nome[tam];

	putchar('\n');
	fseek(arquivo, 0, SEEK_SET);

	for(i = 0; i < 5; i ++)
	{
		fgets(nome, tam, arquivo);
		printf("%s\n", nome);
	}
}

int main()
{
	FILE *arquivo;
	char nome[tam];
	int i;

	arquivo = fopen("5_nomes.bin", "wb+");

	if(arquivo == 0)
	{
		printf("\nImpossível abrir o arquivo.\n");
		return 0;
	}

	for(i = 0; i < 5; i ++)
	{
		printf("\nDigite o nome da %dª pessoa: ", i + 1);
		scanf("%[^\n]s", nome);
		fprintf(arquivo, "%s\n", nome);
		getchar();
	}

	exibe_nomes(arquivo);

	fclose(arquivo);
}
