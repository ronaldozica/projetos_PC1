#include <stdio.h>

int main()
{	
	int cont = 1, num;
	printf("\nDigite um número: ");
	scanf("%d", &num);
	printf("\n");
	while (cont <= 10)
	{
		printf("%2d * %2d = %2d\n", num, cont, num*cont);
		cont = cont + 1;
	}
	printf("\n");
}
