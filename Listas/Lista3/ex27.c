#include <stdio.h>

int main()
{
	int num, cont, soma;
	
	printf("\nDigite um número para saber se é perfeito ou não: ");
	scanf("%d", &num);

	for(soma = 0, cont = 1; cont < num; cont++)
	{
		if(num % cont == 0)
			soma += cont;
	}
	
	if(soma == num)
		printf("\nO número é perfeito.\n");
	else
		printf("\nO número não é perfeito.\n");
}
