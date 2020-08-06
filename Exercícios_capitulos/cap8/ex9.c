#include <stdio.h>
#include <string.h>

#define tam 200

void elim_str2(char *str1, char *str2)
{
	int i, j, aux, final = 0, tamanho = 0;

	for(i = 0; *(str1 + i) != 0; i ++)
	{
		aux = i;
		j = 0;

		while( *(str1 + i) == *(str2 + j) )
		{
			if( *(str2 + j + 1) == 0 )
			{
				final = 1;
				tamanho = j + 1;
				break;
			}

			i ++;
			j ++;
		}

		i = aux;

		if(final)
			break;
	}

	final = aux;

	for(i = final; *(str1 + i) != 0; i ++)
		*(str1 + i) = *(str1 + i + tamanho);
		
}

int main()
{
	char str1[tam], str2[tam];

	printf("\nDigite uma string: ");
	scanf("%[^\n]s", str1);
	getchar();
	printf("\nDigite outra string: ");
	scanf("%[^\n]s", str2);

	elim_str2(str1, str2);

	printf("\nString sem a segunda str digitada: %s\n", str1);
}
