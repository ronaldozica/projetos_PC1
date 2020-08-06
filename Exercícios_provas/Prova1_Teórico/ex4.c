#include <stdio.h>

int main()
{
	int num1, num2, cont, MMC;
	printf("\nDigite o primeiro número: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo número: ");
	scanf("%d", &num2);

	for(MMC = 1, cont = 2; (num1 != 1) || (num2 != 1); cont ++)
	{
		while( (num1 % cont == 0) || (num2 % cont == 0) )
		{
			if(num1 % cont == 0)
				num1 /= cont;
			
			if(num2 % cont == 0)
				num2 /= cont;
			
			MMC *= cont;
		}
	}

	printf("\nO MMC dos números é: %d\n", MMC);
}
