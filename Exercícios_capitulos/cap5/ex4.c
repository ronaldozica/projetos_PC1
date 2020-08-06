#include <stdio.h>

int Abs(int x)
{
	if( x >= 0)
		return x;
	else
		return (-1 * x);
}

int main()
{
	int x;

	printf("\nDigite x: ");
	scanf("%d", &x);

	x = Abs(x);

	printf("\n|x|= %d\n", x);
}
