#include <stdio.h>
#include <math.h>

int main()
{
	float num = 1, soma_pi = 0;

	while(sqrt( ( (float) 4 / num ) * ( (float) 4 / num ) ) >= 0.0001)
	{
		soma_pi += (4 / num);

		if(num >= 0)
			num += 2;
		else
			num += -2;

		num *= -1;
	}
	
	printf("\nPi é aproximadamente igual a: %f\n\n", soma_pi);
}
