#include <stdio.h>
#include <stdlib.h>

#define tamanho 100

int main()
{
	FILE *arquivo_in, *arquivo_aux;
	char palavra[tamanho], nome_arq[tamanho], ch;
	int aux, alarme = -1, flag_return = 0;

	printf("\nDigite a palavra que será eliminada: ");
	scanf("%s", palavra);

	printf("\nDigite o arquivo em que será procurado: ");
	scanf("%s", nome_arq);

	arquivo_in = fopen(nome_arq, "r");

	arquivo_aux = fopen("aux.txt", "w");

	while( ( (ch = fgetc(arquivo_in) ) != EOF ) || (flag_return) )
	{
/*		aux = 0;

		while( ( ch == palavra[aux] ) || (flag_return) )
		{
			aux ++;

			if( *(palavra + aux) == 0 )
				alarme = 1;
			else
				alarme = 0;

			if( (ch = fgetc(arquivo_in) ) == EOF )
				flag_return = 1;
		}
		
		if(alarme == 0)
		{
			fseek(arquivo_in, -aux, SEEK_CUR);
			alarme = -1;
		}
*/
		fprintf(arquivo_aux, "%c", ch);
	}

	system("rm Nome.txt");
	system("mv aux.txt Nome.txt");

	fclose(arquivo_aux);
	fclose(arquivo_in);
}
