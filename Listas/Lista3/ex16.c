#include <stdio.h>

int main()
{
	int cont;
	unsigned long int num;
	char ndiv = 1;
	
	for(num = 1; ndiv == 1; num++)
	{
		for(cont = 1; (num % cont == 0) && (cont <= 21); cont++)
		{
			if(cont == 20)
				ndiv = 0;
		}
	}
	
	printf("\nO número é: %ld\n\n", num-1);
}
