#include <stdio.h>

int main()
{
	int conts, conti;
	float soma = 0;	

	for(conti = 1, conts = 1; conti <= 50; conti++, conts += 2)
	{
		soma += (conts / (float) conti);
		
	}
	printf("\nA soma é: %.2f\n\n", soma);
}
