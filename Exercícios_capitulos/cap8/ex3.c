#include <stdio.h>
#include <string.h>

#define tam 200

char *ocorrencia(char *str, char ch)
{
	int i;

	for(i = 0; *(str + i) != 0; i ++)
	{
		if( *(str + i) == ch )
			return (str + i);
	}

	return 0;
}

int main()
{
	char str[tam], ch, *ponteiro;

	printf("\nDigite a string: ");
	fgets(str, tam, stdin);
	
	printf("\nDigite ch: ");
	scanf("%c", &ch);

	ponteiro = ocorrencia(str, ch);

	if(ponteiro)
	{
		printf("\nA string começou no endereço %p\n", str);
		printf("e o endereço que ocorreu %c pela primeira vez foi: %p.\n", ch, ponteiro);
	}
	else
		printf("\nNão houve ocorrências de %c na string digitada.\n", ch);
}
