#include <stdio.h>
#include <string.h>
#define tamanho 100

void copia(char origem[], char destino[])
{
	int cont;

	for(cont = 0; origem[cont] != 0; cont ++)
		destino[cont] = origem[cont];
}

int main()
{
	char origem[tamanho], destino[tamanho];
	gets(origem);
	copia(origem, destino);
	printf("\nDestino: %s.\n", destino);
}
