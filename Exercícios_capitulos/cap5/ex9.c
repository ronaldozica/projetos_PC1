#include <stdio.h>

int impar(int x)
{
	if(x % 2 == 0)
		return 0;

	return 1;
}

int main()
{
	int x;

	printf("\nDigite um valor para x: ");
	scanf("%d", &x);

	if( impar(x) )
		printf("\n%d é ímpar.\n", x);
	else
		printf("\n%d é par.\n", x);
}
