#include <stdio.h>

#define tam 200

int main()
{
	FILE *arquivo_bin, *arquivo_txt;
	char nome_arquivo_bin[tam], nome_arquivo_txt[tam], ch;

	printf("\nDigite o nome do arquivo .bin que será copiado: ");
	scanf("%s", nome_arquivo_bin);

	printf("\nDigite o nome do arquivo .txt que será gerado: ");
	scanf("%s", nome_arquivo_txt);

	arquivo_bin = fopen(nome_arquivo_bin, "rb");
	arquivo_txt = fopen(nome_arquivo_txt,  "w");

	while( (ch = fgetc(arquivo_bin)) != EOF)
		fprintf(arquivo_txt, "%c", ch);

	fclose(arquivo_bin);
	fclose(arquivo_txt);
}
