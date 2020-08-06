#include <stdio.h>
#include <string.h>
#define tamanho 100

void copia_ate_n(char origem[], char destino[], int n)
{
	int cont;

	for(cont = 0; cont != n; cont ++)
		destino[cont] = origem[cont];
}

int main()
{
	int n;
	char origem[tamanho], destino[tamanho];

	printf("\nDigite a string origem: ");
	gets(origem);
	printf("\nDigite n: ");
	scanf("%d", &n);

	copia_ate_n(origem, destino, n);
	printf("\nDestino: %s\n", destino);
}
