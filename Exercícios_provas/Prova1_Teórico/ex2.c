#include <stdio.h>
#include <math.h>

int main()
{
	int cont;
	float termo, soma_pi = 0;
	
	for(cont = 1, termo = (float) 4 / cont; sqrt(termo * termo) >= 0.0001; termo = (float) 4 / cont)
	{
		soma_pi += termo;
		cont *= -1;
		
		if(cont > 0)
			cont += 2;

		else if(cont < 0)
			cont -= 2;
	}
	printf("\nPi vale: %f\n", soma_pi);
}
