#include <stdio.h>

int digito(char ch)
{
	if( (ch == ' ') || (ch == 9) )
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
		printf("\n%c é espaço ou tab.\n", ch);
	else
		printf("\n%c não é espaço nem tab.\n", ch);
}
