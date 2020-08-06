#include <stdio.h>
#include <string.h>
#define tam 250

char * strchar(char *s, char ch)
{
	int i;

	for(i = 0; *(s + i) != 0; i ++)
		if( *(s + i) == ch)		// retorna o endereço da primeira ocorrência de 'ch'
			return (s + i);
						// caso não ocorra 'ch' em "s", é retornado NULL
	return NULL;				// equivalente a "return 0;"
}

int main()
{
	char s[tam], ch;

	printf("\nDigite uma string: ");
	fgets(s, tam, stdin);
	printf("&s[0] = s = %p\n", s);		// imprime o endereço de "s", apenas para visualização

	printf("\nAgora digite um caracter: ");
	scanf("%c", &ch);

	printf("\nO endereço da primeira ocorrência de '%c' em s é: %p\n", ch, strchar(s, ch));
}
