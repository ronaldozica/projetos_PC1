#include <stdio.h>

int main()
{
	int cont = 1;
	printf("\n");
	while (cont <= 10)
	{
		printf("5 * %2d = %2d\n", cont, 5*cont);
		cont = cont + 1;
	}
	printf("\n");
}
