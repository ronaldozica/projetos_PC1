#include <stdio.h>

int main()
{
	int n, i, soma = 0;
	printf("\n Digite um valor para n: ");
	scanf("%d", &n);

	for(i = 3; i <= n; i++)
		soma += (5 * i) + 2;
	
	printf("\nA soma é: %d\n\n", soma);
}
