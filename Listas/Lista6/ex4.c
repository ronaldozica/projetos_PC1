#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 15

void calc(int *v, int num, int *xmin, int *xmax)
{
	int i, menor = 100, maior = 0;

	for(i = 0; i < num; i ++)
	{
		if( *(v + i) < menor)
		{
			*xmin = *(v + i);
			menor = *(v + i);
		}
		if( *(v + i) > maior)
		{
			*xmax = *(v + i);
			maior = *(v + i);
		}
	}

}

int main()
{
	int i, v[tam], num, *xmin, *xmax, min, max;

	xmin = &min;		// há outra maneira mais eficiente de realizar esse código, para isso, basta:
	xmax = &max;		// 	declarar xmin e xmax como variáveis do tipo int (sem ser ponteiros)
				// 	enviar para a função "calc" o endereço de xmin e xmax (&xmin, &xmax)
				//	na função "calc" modificar *xmin e *xmax
	srand(time(0));

	for(i = 0; i < tam; i ++)
	{
		*(v + i) = rand() % 101;
		printf("%.2d ", *(v + i) );
	}

	do
	{
		printf("\nDigite n: ");
		scanf("%d", &num);
		num ++;
	}while(num > tam);

	calc(v, num, xmin, xmax);

	printf("\nO menor número do vetor é %.2d.", *xmin);
	printf("\nO maior número do vetor é %.2d.", *xmax);
	putchar('\n');
}
