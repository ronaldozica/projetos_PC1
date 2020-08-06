#include <stdio.h>

int is_special(int x)
{
	if( (2 * x) == (x * x) )
		return 1;

	return 0;
}

int main()
{
	int x, teste;

	printf("\nDigite um valor para x: ");
	scanf("%d", &x);

	teste = is_special(x);

	if(teste)
		printf("\n2x = x².\n");
	else		
		printf("\n2x != x².\n");
}
