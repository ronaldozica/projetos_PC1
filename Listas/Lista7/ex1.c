#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int *vetor, int n)
{
	int i;

	for(i = 0; i < n; i ++)
		vetor[i] = rand() % 100;
}

int main()
{
	int n, *vetor, i;

	srand(time(0));

	printf("\nDigite N: ");
	scanf("%d", &n);

	vetor = malloc (n * sizeof(int) );

	preencher(vetor, n);

	putchar('\n');

	for(i = 0; i < n; i ++)
		printf("%.2d ", vetor[i]);

	putchar('\n');

	free(vetor);
}
