#include <stdio.h>

int alfabeto(char ch)
{
	if( (ch >= 'a') && (ch <= 'z') )
		return 1;

	if( (ch >= 'A') && (ch <= 'Z') )
		return 1;

	if( (ch >= '0') && (ch <= '9') )
		return 1;

	return 0;
}

int main()
{
	char ch, dig;

	printf("\nDigite um caractere: ");
	scanf("%c", &ch);

	dig = alfabeto(ch);

	if(dig)
		printf("\n%c é uma letra do alfabeto ou número.\n", ch);
	else
		printf("\n%c não é uma letra do alfabeto nem um número.\n", ch);
}
