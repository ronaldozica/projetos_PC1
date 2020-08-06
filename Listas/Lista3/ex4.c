#include <stdio.h>

int main()
{
	int num, fatorial = 1, cont;
	
	printf("\nDigite um número: ");
	scanf("%d", &num);
	
	if(num < 0)
		printf("\nValor inválido!\n");
	else
	{
		for(cont = 1; cont <= num; cont ++)
			fatorial *= cont;
		
		printf("\nO fatorial de %d é %d\n", num, fatorial);
	}
	
}
