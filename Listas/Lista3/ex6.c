#include <stdio.h>

int main()
{
	int n1, n2, cont, soma = 0;

	printf("\nDigite o valor de n1: ");
	scanf("%d", &n1);
	printf("\nDigite o valor de n2: ");
	scanf("%d", &n2);
	
	while(n1 > n2)
	{
		printf("\nValores inválidos, insira outros valores.\n");
		printf("\nDigite o valor de n1: ");
		scanf("%d", &n1);
		printf("\nDigite o valor de n2, maior que n1: ");
		scanf("%d", &n2);
	}

	for(cont = n1; cont <= n2; cont ++)
	{
		if(cont % 2 != 0)
		{
			soma += cont;
		}
	}
	
	printf("\nA soma de todos os números ímpares no intervalo [n1, n2] é: %d\n", soma);
}
