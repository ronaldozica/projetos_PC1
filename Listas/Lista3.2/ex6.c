#include <stdio.h>

int main()
{
	int X, Y, cont_num, cont_linha;
	
	printf("\nDigite um valor para X: ");
	scanf("%d", &X);
	printf("\nDigite um valor para Y: ");
	scanf("%d", &Y);
	
	for(cont_num = 1; cont_num <= Y; )
	{
		for(cont_linha = 1; cont_linha <= X; cont_linha ++)
		{
			printf("%d ", cont_num);
			cont_num ++;
		}
		printf("\n");
	}
}
