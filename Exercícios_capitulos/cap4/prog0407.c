#include <stdio.h>

int main()
{
	int cont, num, soma, mult;
	printf("\nDigite um número 'n': ");
	scanf("%d",&num);
	
	for(soma = 0, mult = 1, cont = 1; cont <= num; cont = cont + 1)
	{
		soma = soma + cont;
		mult = mult * cont;
	}
	
	printf("\nA soma dos números até n é: %d e a multiplicação é: %d\n\n", soma, mult);
}
