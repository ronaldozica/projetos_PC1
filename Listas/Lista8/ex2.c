#include <stdio.h>

int main()
{
	FILE *arquivo;
	char ch_atual;
	int quant_a = 0;

	arquivo = fopen("Nome.txt", "r");

	if(arquivo == 0)
	{
		printf("\nNão foi possível abrir o arquivo.\n");
		return 0;
	}

	while( (ch_atual = fgetc(arquivo) ) != EOF )
	{
		if(ch_atual == 'a')
			quant_a ++;
	}

	printf("\nO nome inserido possui %d 'a'.\n", quant_a);

	fclose(arquivo);
}
