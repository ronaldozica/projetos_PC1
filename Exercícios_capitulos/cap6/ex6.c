#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 4

int verifica(int *v1, int *v2, int n)
{
	int i;

	for(i = 0; i < n; i ++)
		if( *(v1 + i) != *(v2 + i) )
			return 0;

	return 1;
}

int main()
{
	int n, i, v1[tam], v2[tam];

	srand(time(0));

	printf("\nVetor 1: \n");

	for(i = 0; i < tam; i ++)
	{
		*(v1 + i) = rand() % 2;
		printf("%.2d ", *(v1 + i) );
	}

	printf("\nVetor 2: \n");

	for(i = 0; i < tam; i ++)
	{
		*(v2 + i) = rand() % 2;
		printf("%.2d ", *(v2 + i) );
	}

	printf("\nDigite n: ");
	scanf("%d", &n);

	if( verifica(v1, v2, n) )
		printf("\nOs %d primeiros números de ambos os vetores são iguais.\n", n);
	else
		printf("\nPelo menos um dos %d primeiros números dos vetores são diferentes.\n", n);

}
