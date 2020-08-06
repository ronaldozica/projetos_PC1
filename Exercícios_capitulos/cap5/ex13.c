#include <stdio.h>

int n_mod(int x)
{
	if( x <= 0 )
		return x;

	return (-1 * x);
}

int main()
{
	int x, neg;

	printf("\nDigite um valor para x: ");
	scanf("%d", &x);

	neg = n_mod(x);

	printf("\n-|x| = %d.\n", neg);	
}
