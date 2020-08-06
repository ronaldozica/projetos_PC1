#include <stdio.h>

#define tamanho 100

int main()
{
	FILE *arquivo;
	char palavra[tamanho], nome_arq[tamanho], ch;
	int aux, quant_repet = 0, flag = 0;

	printf("\nDigite a palavra que será contada quantas vezes apareceu: ");
	scanf("%s", palavra);

	printf("\nDigite o arquivo em que será procurado: ");
	scanf("%s", nome_arq);

	arquivo = fopen(nome_arq, "r");

	while( (ch = fgetc(arquivo) ) != EOF )
	{
		aux = 0;

		while( ch == palavra[aux] )
		{
			aux ++;

			if( *(palavra + aux) == 0 )
			{
				quant_repet ++;
			}

			if( (ch = fgetc(arquivo) ) == EOF )
			{
				printf("\nA palavra se repetiu %d vezes.\n", quant_repet);
				fclose(arquivo);
				return 0;
			}

			flag = 1;
		}
		
		if(flag)
		{
			fseek(arquivo, -1, SEEK_CUR);
			flag = 0;
		}
	}

	printf("\nA palavra se repetiu %d vezes.\n", quant_repet);

	fclose(arquivo);
}
