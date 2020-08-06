#include <stdio.h>

int digito(char ch)
{
	if( (ch >= '0') && (ch <= '9') )
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
		printf("\n%c é um dígito.\n", ch);
	else
		printf("\n%c não é um dígito.\n", ch);
}
