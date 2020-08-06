#include <stdio.h>

int main()
{
	int cont;
	for(cont = 1; cont <= 10; cont = cont + 1)
		printf("\n%2d", cont * 2);
	putchar('\n');
	putchar('\n');
}
