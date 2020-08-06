#include <stdio.h>

int main()
{
	int cont, soma = 0;
	
	for(cont = 0; cont < 1000; cont++)
	{
		if(cont % 3 == 0 || cont % 5 == 0)
			soma += cont;
	}
	
	printf("\nA soma é: %d\n\n", soma);
}
