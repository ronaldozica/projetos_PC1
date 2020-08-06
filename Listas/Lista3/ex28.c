#include <stdio.h>

int main()
{
	int var_m, var_n, cont, soma;
	
	printf("\nDigite um valor maior que 0 para M: ");
	scanf("%d", &var_m);
	printf("\nDigite um valor maior que 0 para N: ");
	scanf("%d", &var_n);
	
	if( (var_m <= 0) || (var_n <= 0) )
		printf("\nValor inválido.\n");
	
	else
	{
		if(var_m > var_n)
		{
			for(soma = 0, cont = var_n; cont <= var_m; cont++)
			{
				printf("%d ", cont);
				soma += cont;
			}
		}

		else if(var_m < var_n)
		{
			for(soma = 0, cont = var_m; cont <= var_n; cont++)
			{
				printf("%d ", cont);
				soma += cont;
			}
		}
		
		else if(var_m == var_n)
		{
			printf("%d ", var_m);
			soma = var_m;
		}
		
		printf("\nA soma dos números é: %d\n", soma);
	}
}
