#include <stdio.h>

int MMC(int num1, int num2)
{
	int mmc = 1, cont;

	for(cont = 2; (num1 != 1) || (num2 != 1); cont ++)
	{
		while( (num1 % cont == 0) || (num2 % cont == 0) )
		{
			mmc *= cont;

			if(num1 % cont == 0)
				num1 /= cont;

			if(num2 % cont == 0)
				num2 /= cont;
		}
	}

	return mmc;
}

int main()
{
	int num1, num2;

	printf("\nDigite dois números: ");
	scanf("%d %d", &num1, &num2);

	printf("\nO MMC desses números é: %d.\n", MMC(num1, num2) );
}
