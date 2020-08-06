#include <stdio.h>
#include <string.h>
#define tamanho 100

int quant_ch(char str[])
{
	int cont;
	for(cont = 0; str[cont] != 0; cont ++);
	return (cont - 1);
}

int main()
{
	char str[tamanho];
	fgets(str, tamanho, stdin);
	printf("\nA string digitada possui %d caracteres.\n", quant_ch(str));
}
