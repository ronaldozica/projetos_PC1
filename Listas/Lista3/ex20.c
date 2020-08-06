#include <stdio.h>

int main()
{
	int menor_ndiv = 0, cont, num, n_divisores, maior_ndiv;
	
	for(cont = 1; cont < 10000; cont++)
	{
		for(num = 1, n_divisores = 0; num <= cont ; num++)
		{
			if(cont % num == 0)
				n_divisores ++;
		}

		if(menor_ndiv < n_divisores)
		{
			menor_ndiv = n_divisores;
			maior_ndiv = cont;
		}
	}
	printf("\nO número é %d, que possui %d divisores.\n", maior_ndiv, menor_ndiv);

	for(cont = 1; cont <= maior_ndiv; cont++)
	{
		if(maior_ndiv % cont == 0)
			printf("%d ",cont);
	}
	putchar('\n');
}
