#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int *vetor, int n)
{
	int i;

	putchar('\n');

	for(i = 0; i < n; i ++)
	{
		vetor[i] = rand() % 100;
		printf("%.2d ", vetor[i]);
	}

	putchar('\n');
}

int main()
{
	int n, *vetor, i, novo_n;

	srand(time(0));

	printf("\nDigite N: ");
	scanf("%d", &n);

	vetor = malloc (n * sizeof(int) );

	preencher(vetor, n);

	printf("\nQuantos números a mais você deseja adicionar ao vetor? ");
	scanf("%d", &novo_n);

	vetor = realloc ( vetor, (n + novo_n) * sizeof(int) );

	for(i = n; i < (novo_n + n); i ++)
		vetor[i] = rand() % 100;

	printf("\nNovo vetor: ");

	for(i = 0; i < (novo_n + n); i ++)
		printf("%.2d ", vetor[i]);

	putchar('\n');

	free(vetor);
}
