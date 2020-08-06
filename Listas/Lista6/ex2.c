#include <stdio.h>
#include <string.h>

#define tam 250

char * strchar(char *s, char ch)
{
	int i;
	char *ult_ocorr = NULL;

	for(i = 0; *(s + i) != 0; i ++)
		if( *(s + i) == ch)
			ult_ocorr = (s + i);	// "ult_ocorr" recebe a cada vez que 'ch' acontece o endereço
						// de s em que isso ocorre, porém, ao final do "for" fica
						// armazenado em "ult_ocorr" o endereço da última ocorrência
	return ult_ocorr; 			// de "ch", que é retornado para a função principal
}

int main()
{
	char s[tam], ch;

	printf("\nDigite a string: ");
	fgets(s, tam, stdin);

	printf("\nAgora digite um caracter: ");
	scanf("%c", &ch);

	printf("\n%p", s);
	printf("\nA última ocorrência de %c na string ocorre no endereço: %p\n", ch, strchar(s, ch));
	printf("\nO conteúdo desse endereço é: %c\n", *strchar(s, ch));	
}
