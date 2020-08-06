#include <stdio.h>

int main()
{
	int cont, num_imp;
	putchar('\n');
	for(cont = 1; cont <= 10; cont = cont + 1)
	{
	num_imp = 1;
		do
		{
			printf("%2d ",num_imp);
			num_imp = num_imp + 1;
		}
		while(num_imp <= cont);
	putchar('\n');
	}
	printf("\n\n");
}
