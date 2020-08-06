#include <stdio.h>

int is_square(int x, int y)
{
	if( x == (y * y) )
		return 1;

	return 0;
}

int main()
{
	int x, y, teste;

	printf("\nDigite valores para x e y: ");
	scanf("%d %d", &x, &y);

	teste = is_square(x, y);

	if(teste)
		printf("\nx = y².\n");
	else
		printf("\nx != y².\n");
}
