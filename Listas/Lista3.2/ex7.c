#include <stdio.h>

int main()
{
	int A, N, cont, soma;
	printf("\nDigite um valor de A: ");
	scanf("%d", &A);
	printf("\nDigite um valor para N: ");
	scanf("%d", &N);
	
	while(N > 0)
	{
		printf("\n");
		for(soma = 0, cont = 0; cont < N; cont ++)
		{
			soma += A + cont;
			printf("%d + ", A + cont);
		}
		
		printf("= %d\n", soma);
		
		printf("\nDigite um novo valor para N: ");
		scanf("%d", &N);
	}
	
	printf("\nO programa terminou!\n");
}
