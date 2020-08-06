#include <stdio.h>

#define tamanho 100

int main()
{
	FILE *arq1, *arq2;
	char nome1[tamanho], nome2[tamanho], ch1, ch2;
	int tam1 = 0, tam2 = 0;

	printf("\nDigite o nome de um arquivo: ");
	scanf("%s", nome1);

	printf("\nDigite o nome de outro arquivo: ");
	scanf("%s", nome2);

	arq1 = fopen(nome1, "r");
	arq2 = fopen(nome2, "r");

	if( (arq1 == 0) || (arq2 == 0) )
	{
		printf("\nAlgum dos arquivos não pode ser aberto.\n");
		return 0;
	}

	while(ch1 = fgetc(arq1) != EOF)
		tam1 ++;

	while(ch2 = fgetc(arq2) != EOF)
		tam2 ++;

	if(tam1 > tam2)
		printf("\nO arquivo 1 contém mais bytes que o arquivo 2.\n");

	else if(tam2 > tam1)
		printf("\nO arquivo 2 contém mais bytes que o arquivo 1.\n");

	else
		printf("\nOs dois arquivos são iguais.\n");

	fclose(arq1);
	fclose(arq2);
}
