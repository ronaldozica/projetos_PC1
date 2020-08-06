#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void limpar_vetor(int *vetor)
{
	free(vetor);
}

void exibir_vetor(int *vetor, int n)
{
	int i;

	putchar('\n');

	for(i = 0; i < n; i ++)
		printf("%.2d ", vetor[i]);

	putchar('\n');
}

int *criar_vetor(int *tam)
{
	int n, i, *vetor;

	printf("\nDigite a quantidade de elementos do vetor: ");
	scanf("%d", &n);

	vetor = (int*) malloc( n * sizeof(int) );

	for(i = 0; i < n; i ++)
		vetor[i] = rand() % 100;

	*tam = n;

	return(vetor);
}

int criar_vetor2(int* *vetor)
{
	int n, i;

	int *v;

	printf("\nDigite a quantidade de elementos do vetor: ");
	scanf("%d", &n);

	v = (int*) malloc( n * sizeof(int) );

	for(i = 0; i < n; i ++)
		v[i] = rand() % 100;
	
	*vetor=v;

	return(n);
}

int main()
{
	int *vetor, n;

	srand(time(0));

//	vetor = criar_vetor(&n);
	n = criar_vetor2(&vetor);
	exibir_vetor(vetor, n);
	limpar_vetor(vetor);
}
