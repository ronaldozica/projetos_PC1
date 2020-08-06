#include <stdio.h>

int fatorial(int num)
{
	int cont, produto = 1;

	if(num < 0)				// se o número é negativo seu fatorial será -1
		return -1;

	else if(num == 0 || num == 1)		// se o número é 0 ou 1 seu fatorial será 1
		return 1;

	else if(num >= 2)			// se o número for maior que 2 seu fatorial será calculado
	{					
		for(cont = 1; cont <= num; cont ++)
			produto *= cont;
		return produto;
	}
}

int main()
{
	int num;

	printf("\nDigite um número para que seu fatorial seja calculado: ");
	scanf("%d", &num);

	if(fatorial(num) > 0)
		printf("\nO fatorial do número é %d.\n", fatorial(num));
	else
		printf("\nO número digitado está incorreto.\n");
}
