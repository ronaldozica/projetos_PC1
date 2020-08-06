#include <stdio.h>

int main()
{
	int var_a, var_n, cont, soma;

	printf("\nDigite um valor para A: ");
	scanf("%d", &var_a);
	printf("\nDigite um valor positivo e diferente de 0 para N: ");
	scanf("%d", &var_n);

	while(var_n <= 0)
	{
		printf("\nDigite um valor positivo e diferente de 0 para N: ");
		scanf("%d", &var_n);
	}
	
	for(cont = 0, soma = 0; cont < var_n; cont++)
		soma += (var_a + cont);
	
	printf("\nA soma de N números a partir de A é: %d\n", soma);
}
