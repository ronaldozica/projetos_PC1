#include <stdio.h>

char IsVogal(char ch)
{
	if( ( (ch >= 'a') && (ch <= 'z') ) || ( (ch >= 'A') && (ch <= 'Z') ) )
		return 1;

	return 0;
}

int main()
{
	char ch, teste;

	printf("\nDigite um caracter: ");
	scanf("%c", &ch);

	teste = IsVogal(ch);

	if(teste)
		printf("\n%c é uma vogal do alfabeto.\n", ch);
	else
		printf("\n%c não é uma vogal do alfabeto.\n", ch);
}
