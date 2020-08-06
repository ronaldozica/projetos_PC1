#include <stdio.h>

int main()
{
	int cont, cont_tab;
	putchar('\n');

	for(cont_tab = 1; cont_tab<= 5; cont_tab = cont_tab + 1)
	{
		for(cont = 1; cont <= 10; cont = cont + 1)
		{
			printf("%2d * %2d = %2d\n", cont, cont_tab, cont*cont_tab);
		}
		if(cont_tab != 5)
			{
				printf("Digite <ENTER> para continuar.");
				getchar();
			}
	}
}
