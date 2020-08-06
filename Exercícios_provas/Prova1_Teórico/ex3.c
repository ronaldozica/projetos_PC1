#include <stdio.h>

int main()
{
	int num, cont_div, q_div, maiorq_div, num_mais_div, divisores;
	
	for(maiorq_div = 0, num = 1; num <= 10000; num ++)
	{
		for(q_div = 0, cont_div = 1; cont_div <= num; cont_div ++)
		{
			if(num % cont_div == 0)
				q_div ++;
		}

		if(q_div > maiorq_div)
		{
			maiorq_div = q_div;
			num_mais_div = num;
		}
	}
	
	printf("\nO número com mais divisores é %d, que possui %d divisores.", num_mais_div, maiorq_div);
	printf("\nSeus divisores são: ");

	for(divisores = 1; divisores <= num_mais_div; divisores ++)
	{
		if(num_mais_div % divisores == 0)
			printf("%d ", divisores);
	}
	
	printf("\n");
}
