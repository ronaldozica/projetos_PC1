#include <stdio.h>

int main()
{
	int num;
	double var_e, soma = 0;
	printf("\nDigite um valor para E: ");
	scanf("%lf", &var_e);
	
	if(var_e < 1)
	{
		soma ++;
		for(num = 2; var_e < (1 / (double) num); num += 2)
		{
			soma += (1 / (double) num);
		}
	}
	
	printf("\nO valor de S é: %.3lf\n", soma);
}
