#include <stdio.h>

int main()
{
	FILE *arquivo;
	char ch;
	int quant_a = 0;

	arquivo = fopen("Nome.bin", "rb");

	while( (ch = fgetc(arquivo) ) != EOF )
	{
		if(ch == 'a')
			quant_a ++;
	}

	printf("\nDurante o arquivo o caracter 'a' se repetiu %d vezes.\n", quant_a);

	fclose(arquivo);
}
