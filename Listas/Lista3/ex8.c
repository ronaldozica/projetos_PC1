#include <stdio.h>

int main()
{
	int numero, cont, metade_num;
	char primo = 1;

	printf("\nDigite um número: ");
	scanf("%d", &numero);
	
	if(numero == 2)
		primo = 2;
	else if(numero % 2 == 0)
		primo = 0;
			
	for(metade_num = numero / 2, cont = 1; (cont <= metade_num) && (primo == 1); cont += 2)
	{
		if( (numero % cont == 0) && (cont != 1) && (cont != numero) )
			primo = 0;
	}
	
	if(primo)
		printf("\n%d é primo.\n", numero);
	else
		printf("\n%d não é primo.\n", numero);
}
