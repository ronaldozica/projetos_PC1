#include <stdio.h>

int main()
{
	int A, B, digito, cont, vezesdig, teste_casas;
	printf("\nDigite A: ");
	scanf("%d", &A);
	printf("\nDigite B: ");
	scanf("%d", &B);
	
	for(digito = 0; digito <= 9; digito ++)
	{
		for(vezesdig = 0, cont = A; cont <= B; cont++)
		{
			teste_casas = cont;
			
			while(teste_casas != 0)
			{
				if(teste_casas % 10 == digito)
					vezesdig ++;
				teste_casas /= 10;
			}
		}
		printf("%d ", vezesdig);
	}
	printf("\n");
}
