#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 15

float max(float *v, int n)
{
	int maior = 0, i;

	for(i = 0; i < n; i ++)
		if( *(v + i) > maior)
			maior = *(v + i);

	return maior;
}

int main()
{
	int n, i;
	float v[tam];

	srand(time(0));

	for(i = 0; i < tam; i ++)
	{
		*(v + i) = rand() % 100;
		printf("%.0f ", *(v + i) );
	}

	printf("\nDigite n: ");
	scanf("%d", &n);

	printf("\nO maior valor dos primeiros %d números do vetor é: %.0f.\n", n, max(v, n) );
}
