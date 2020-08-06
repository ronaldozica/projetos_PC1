#include <stdio.h>

int main()
{
	long int num_fib = 0, num_aux1 = 2, num_aux2 = 1;
	float soma = 2;
	
	printf("1 2 ");
	while(num_fib < 4000000)
	{
		num_fib = num_aux1 + num_aux2;
		num_aux2 = num_aux1;
		num_aux1 = num_fib;

		if(num_fib % 2 == 0)
		{
			soma += num_fib;
		}

		printf("%ld ", num_fib);
	}

	printf("\nA soma é: %.0f\n\n", soma);
}
