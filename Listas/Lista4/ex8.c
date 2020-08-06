#include <stdio.h>

int primo(int num)
{
	int cont;

	for(cont = 1; cont < num; cont++)
	{
		if( (num % cont == 0) && (cont != 1) )
			return 0;
	}
	
	return 1;
}

int soma_primos(int n)
{
	int soma = 0, test_num = 1, cont;

	for(cont = 1; cont <= n; cont ++)
	{
		while(primo(test_num) == 0)		// encontra o próximo número primo
			test_num ++;

		soma += test_num;			// após encontrar o próximo primo, ele é somado
		test_num ++;				// quando "cont" atinge o "n" digitado
	}						// é retornado o total da soma dos "n" números primos
	
	return soma;
}

int main()
{
	int n;
	
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	
	printf("\nA soma de n números primos é: %d.\n", soma_primos(n));
}
