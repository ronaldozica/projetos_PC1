#include <stdio.h>
#include <string.h>

#define tam 200

char *end_vogal(char *str)
{
	int i;

	for(i = 0; *(str + i) != 0; i ++)
	{
		if( ( *(str + i) == 'a' ) || ( *(str + i) == 'A' ) )
			return (str + i);
		if( ( *(str + i) == 'e' ) || ( *(str + i) == 'E' ) )
			return (str + i);
		if( ( *(str + i) == 'i' ) || ( *(str + i) == 'I' ) )
			return (str + i);
		if( ( *(str + i) == 'o' ) || ( *(str + i) == 'O' ) )
			return (str + i);
		if( ( *(str + i) == 'u' ) || ( *(str + i) == 'U' ) )
			return (str + i);
	}

	return 0;
}

int main()
{
	char str[tam], *ponteiro;

	printf("\nDigite uma string: ");
	scanf("%[^\n]s", str);
	

	ponteiro = end_vogal(str);

	if(ponteiro)
	{
		printf("\nO endereço que a string começa é: %p.\n", str);
		printf("\nO endereço que ocorre pela primeira vez uma vogal é: %p.\n", ponteiro);
		printf("\nEssa vogal é: %c.\n", *ponteiro);
	}
	else
		printf("\nA string digitada não possui vogais.\n");
}
