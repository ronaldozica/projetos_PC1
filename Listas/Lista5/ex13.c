#include <stdio.h>
#include <string.h>
#define tamanho 100

void concatenear(char s1[], char s2[])
{
	int cont1, cont2;
	for(cont1 = 0; s1[cont1] != 0; cont1 ++);	//localiza o final de s1
	for(cont2 = 0; s2[cont2] != 0; cont2 ++)	//coloca s2 em s1 a partir do final de s1
	{
		s1[cont1] = s2[cont2];
		cont1 ++;
	}
}

int main()
{
	char s1[tamanho], s2[tamanho];
	gets(s1);
	gets(s2);
	concatenear (s1, s2);
	printf("\nConcateneado: %s.\n", s1);
}
