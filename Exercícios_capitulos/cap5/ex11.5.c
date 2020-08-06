#include <stdio.h>

int digito(char ch)
{
	if( (ch >= 'A') && (ch <= 'Z') )
		return 1;

	return 0;
}

int main()
{
	char ch, dig;

	printf("\nDigite um caractere: ");
	scanf("%c", &ch);

	dig = digito(ch);

	if(dig)
		printf("\n%c é uma letra maiúscula.\n", ch);
	else
		printf("\n%c não é uma letra maiúscula.\n", ch);
}
