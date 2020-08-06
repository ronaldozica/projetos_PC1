#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 15

void copia_n(int *v, int *dest, int n)
{
	int i;

	for(i = 0; i < n; i ++)
		*(dest + i) = *(v + i);
}

int main()
{
	int n, i, v[tam], dest[tam] = { };

	srand(time(0));

	printf("\nVetor original: \n");

	for(i = 0; i < tam; i ++)
	{
		*(v + i) = rand() % 100;
		printf("%.2d ", *(v + i) );
	}

	printf("\nDigite n: ");
	scanf("%d", &n);

	copia_n(v, dest, n);

	printf("\nVetor destino: \n");

	for(i = 0; i < tam; i ++)
		printf("%.2d ", *(dest + i) );

	putchar('\n');
}
