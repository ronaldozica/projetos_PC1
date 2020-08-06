#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int zero(int *aux)
{
	*aux = 0;
}

void add1(int *aux)
{
	*aux += 1;
}

int iszero(int aux)
{
	if(aux == 0)
		return 1;
	else
		return 0;
}

int main(int argc, char *argv[])
{
	int retorno;

	retorno = atoi(argv[1]);

	if( iszero(retorno) )
		printf("\nO número digitado é zero.\n");
	else
		printf("\nO número digitado não é zero.\n");

	retorno = atoi(argv[1]);

	add1(&retorno);
		printf("\nNúmero digitado + 1 = %d\n", retorno);

	retorno = atoi(argv[1]);
	
	zero(&retorno);
		printf("\nNovo número: %d\n", retorno);

}
