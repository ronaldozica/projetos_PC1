#include <stdio.h>

int bissexto(int ano)
{
	int ano_bi;
	
	if( ( (ano % 100 != 0) && (ano % 4 == 0) ) || ( (ano % 100 == 0) && (ano % 400 == 0) ) )
		ano_bi = 1;
	else
		ano_bi = 0;
	
	return ano_bi;			// essa função também poderia ser escrita sem a variável ano_bi, para
					// isso, bastaria retornar 1 no "if" e retornar 0 no else
}

int main()
{
	int ano;

	printf("\nDigite o ano: ");
	scanf("%d", &ano);
	
	if(bissexto(ano))
		printf("\nO ano é bissexto.\n");
	else
		printf("\nO ano não é bissexto.\n");
}
