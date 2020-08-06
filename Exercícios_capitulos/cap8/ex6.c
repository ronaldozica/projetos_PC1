#include <stdio.h>
#include <string.h>

#define tam 200

void escreve(char *str1, char *str2)
{
	int i, cont = 0;
	char aux[tam];

	for(i = 0; *(str1 + i) != 0; i ++)
	{
		*(aux + i) = *(str1 + i);
	}

	*(aux + i) = 0;

	for(i = 0; *(str2 + i) != 0; i ++)
	{
		*(str1 + i) = *(str2 + i);
	}

	while( *(aux + cont) != 0 )
	{
		*(str1 + i) = *(aux + cont);
		cont ++;
		i ++;
	}
}

int main()
{
	char str1[tam], str2[tam], *ponteiro;

	printf("\nDigite uma string: ");
	scanf("%[^\n]s", str1);
	getchar();
	printf("\nDigite outra string: ");
	scanf("%[^\n]s", str2);
	
	escreve(str1, str2);

	printf("\n%s\n", str1);
}
