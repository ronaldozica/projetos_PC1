#include <stdio.h>

int pot3(int x)
{
	return (x * x * x);
}

int main()
{
	int x, x_3;

	printf("\nDigite um valor para x: ");
	scanf("%d", &x);

	x_3 = pot3(x);

	printf("\nx³ = %d.\n", x_3);
}
