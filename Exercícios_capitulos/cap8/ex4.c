#include <stdio.h>
#include <string.h>

#define tam 200

char *verifica_sub(char *str1, char *substr)
{
	int i, j, aux;

	for(i = 0; *(str1 + i) != 0; i ++)
	{
		j = 0;
		aux = i;

		while( *(str1 + i) == *(substr + j) )	
		{
			if( *(substr + j + 1) == 0 )
				return (str1 + i);
			else
			{
				i ++;
				j ++;
			}
		}

		i = aux;
	}
}

int main()
{
	char str1[tam], substr[tam], *ponteiro;

	printf("\nDigite a primeira string: ");
	scanf("%[^\n]s", str1);
	getchar();
	printf("\nDigite a sub-string: ");
	scanf("%[^\n]s", substr);

	ponteiro = verifica_sub(str1, substr);

	if(ponteiro)
	{
		printf("\nO endereço que a string começa é: %p.\n", str1);
		printf("\nO endereço que ocorre pela primeira vez a substring digitada é: %p.\n", ponteiro);
	}
	else
		printf("\nA substring digitada não ocorre dentro da string principal.\n");
}
