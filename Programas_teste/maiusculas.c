#include <stdio.h>
#include <ctype.h>

int main()
{
	FILE *arquivo;
	char ch;

	arquivo = fopen("maiusc.txt", "r+");

	if(arquivo == 0)
	{
		printf("\nErro ao abrir o arquivo.\n");	
		return 0;
	}

	while( ( ch = fgetc(arquivo) ) != EOF)
	{
		ch = toupper(ch);
		fseek(arquivo, -1, SEEK_CUR);
		fprintf(arquivo, "%c", ch);
	}

	fclose(arquivo);
}
