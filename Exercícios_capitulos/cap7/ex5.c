#include <stdio.h>
#include <string.h>

#define tam 100

void repeticoes(char *str)
{
	int i, j, cont = 0;
	char aux[tam];

	for(i = 0; *(str + i) != 0; i ++)
	{
		*(aux + cont) = *(str + i);
		cont ++;

		while( *(str + i) == *(str + i + 1) )
			i ++;
	}

	*(aux + cont) = 0;

	for(i = 0; *(aux + i) != 0; i ++)
	{
		*(str + i) = *(aux + i);
	}

	*(str + i) = 0;
}

int main()
{
	char str[tam];

	printf("\nDigite uma string: ");
	scanf("%[^\n]s", str);

	printf("\nString antes de eliminar os elementos não repetidos: %s\n", str);

	repeticoes(str);

	printf("\nString depois de eliminar os elementos não repetidos: %s\n", str);
}
