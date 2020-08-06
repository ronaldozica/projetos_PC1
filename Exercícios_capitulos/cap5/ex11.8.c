#include <stdio.h>

char digito(char ch)
{
	return ch - 32;
}

int main()
{
	char ch, dig;

	printf("\nDigite um caractere: ");
	scanf("%c", &ch);

	dig = digito(ch);

	printf("\n%c maiúsculo é: %c\n", ch, dig);
}
