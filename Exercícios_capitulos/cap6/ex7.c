#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 4

int verifica(char *str1, char *str2, int n)
{
	int i;

	for(i = 0; i < n; i ++)
		if( ( *(str1 + i) + 32 ) != *(str2 + i) )
			return 0;

	return 1;
}

int main()
{
	int n, i;
	char str1[tam], str2[tam];

	srand(time(0));

	printf("\nString 1: \n");

	for(i = 0; i < tam; i ++)
	{
		*(str1 + i) = 65 + rand() % 2;
		printf("%c ", *(str1 + i) );
	}

	printf("\nString 2: \n");

	for(i = 0; i < tam; i ++)
	{
		*(str2 + i) = 97 + rand() % 2;
		printf("%c ", *(str2 + i) );
	}

	printf("\nDigite n: ");
	scanf("%d", &n);

	if( verifica(str1, str2, n) )
		printf("\nOs %d primeiros números de ambos os vetores são iguais.\n", n);
	else
		printf("\nPelo menos um dos %d primeiros números dos vetores são diferentes.\n", n);

}
