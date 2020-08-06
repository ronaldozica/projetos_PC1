#include <stdio.h>

int main()
{	
	int cont = 1, cont_tab = 1;
	putchar('\n');

	while (cont_tab <= 5)
	{
		while (cont <= 10)
		{
			printf("%2d * %2d = %2d\n", cont, cont_tab, cont*cont_tab);
			cont = cont + 1;
		}

		putchar('\n');
		cont = 1;
		cont_tab = cont_tab + 1;
	}
	printf("\n");
}
