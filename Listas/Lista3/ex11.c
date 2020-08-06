#include <stdio.h>

int main()
{
	int cont;
	float resultado = 0;	

	for(cont = 1; cont <= 10; cont ++)
	{
		if(cont % 2 == 0)
			resultado -= (float) cont / (cont*cont);
		else
			resultado += (float) cont / (cont*cont);
	}

	printf("\nO resultado é: %f\n\n", resultado);
}
