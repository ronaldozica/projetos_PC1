#include <stdio.h>
#include <string.h>

#define tam 200

void elim_maius(char *str)
{
	int i, cont = 0;
	char aux[tam];

	for(i = 0; *(str + i) != 0; i ++)
	{
		if( ( *(str + i) >= 'a' ) && ( *(str + i) <= 'z' ) )
		{
			*(aux + cont) = *(str + i);
			cont ++;
		}
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

	elim_maius(str);

	printf("\nString digitada sem maiusculas: %s\n", str);
}
