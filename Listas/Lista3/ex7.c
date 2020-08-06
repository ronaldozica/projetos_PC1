#include <stdio.h>

int main()
{
	int numero, cont;
	char primo = 1;

	printf("\nDigite um número: ");
	scanf("%d", &numero);
	
	for(cont = 1; cont <= numero; cont ++)
	{
		if( (numero % cont == 0) && (cont != 1) && (cont != numero) )
			primo = 0;
	}
	
	if(primo)
		printf("\n%d é primo.\n", numero);
	else
		printf("\n%d não é primo.\n", numero);
}
