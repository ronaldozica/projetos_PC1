#include <stdio.h>

int main()
{
	int dado1, dado2, dado3, valor;
	printf("\nDigite um valor entre 3 e 18: ");
	scanf("%d", &valor);

	for(dado1 = 1; dado1 <= 6; dado1++)
	{
		for(dado2 = 1; dado2 <= 6; dado2++)
		{
			for(dado3 = 1; dado3 <= 6; dado3++)
			{
				if(dado1 + dado2 + dado3 == valor)
					printf("%d,%d,%d;", dado1, dado2, dado3);
			}
		}
	}
}
