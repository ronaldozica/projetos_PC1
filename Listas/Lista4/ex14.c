#include <stdio.h>

int divisores(int num)
{
	int cont;

	for(cont = 1; cont <= 10000; cont ++)
	{
		if(num % cont == 0)
			printf(" %d ", cont);
	}
}

int quant_div()
{
	int cont, div, qdivisores, maiorq_divisores = 0, num_mais_div;

	for(cont = 1; cont <= 10000; cont ++)
	{
		for(qdivisores = 0, div = 1; div <= cont; div ++)
		{
			if(cont % div == 0)
				qdivisores ++;
		}

		if(qdivisores > maiorq_divisores)
		{
			num_mais_div = cont;
			maiorq_divisores = qdivisores;
		}
	}

	printf("\nO número que possui mais divisores 1 e 10000 possui %d divisores,", maiorq_divisores);
	return (num_mais_div);
}

int main()
{
	int aux = quant_div();
	printf("e é o número: %d.\n", aux);
	printf("\nSeus divisores são:");
	printf("%d.\n", divisores(aux));
}
