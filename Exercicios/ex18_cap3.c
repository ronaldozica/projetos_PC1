#include <stdio.h>

int main ()
{
	int ano;
	printf("\nDigite um ano: ");
	scanf("%d",&ano);
	
	if ( (ano % 400) == 0 || ( (ano % 4) == 0 && (ano % 100) != 0 ) )
		printf("\nAno bissexto.\n\n");
	else
		printf("\nAno não bissexto.\n\n");
}
