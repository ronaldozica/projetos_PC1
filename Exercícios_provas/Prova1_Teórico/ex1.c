#include <stdio.h>

int main()
{
	int A, N, cont, soma;
	printf("\nDigite o valor de A: ");
	scanf("%d", &A);
	printf("\nDigite o valor de N: ");
	scanf("%d", &N);
	
	while(N > 0)
	{
		for(soma = 0, cont = 0; cont < N; cont++)
		{
			soma += (A + cont);
			printf("%d + ", A + cont);
		}
		printf("= %d", soma);
		printf("\nDigite o valor de N: ");
		scanf("%d", &N);
	}
	
	printf("Programa terminou!\n");
}
