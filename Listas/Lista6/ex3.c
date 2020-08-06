#include <stdio.h>
#include <string.h>

#define tam 250

char *strstr1(char *str1, char *str2)
{
	int i, j, aux;

	for(i = 0; *(str1 + i) != 0; i ++)
	{
		for(j = 0; *(str2 + j) != 0; j ++)
		{
			aux = j;		// enquanto a substring str2 não acabou, continue verificando
						// se str1[j+i] = str2[j], se str2 acabar e esse teste for 
						// verdadeiro para todos os casos, retorne o endereço em que
			while( *(str1 + i + j) == *(str2 + j) )	// isso ocorreu
			{
				if( *(str2 + j + 1) == 0)
					return (str1 + i);

				j ++;
			}

			j = aux;
		}
	}

	return 0;
}

int main()
{
	char str1[tam], str2[tam];
	char *ocorr;

	printf("\nDigite uma string: ");
	fgets(str1, tam, stdin);
	printf("\nDigite uma string: ");
	fgets(str2, tam, stdin);

	ocorr = strstr1(str1, str2);

	if(ocorr)
	{
		printf("\nO endereço inicial de str1 é: %p\n", str1);
		printf("\nO endereço da primeira repetição da string é: %p\n", ocorr);
	}

	else
		printf("\nNão encontrado.\n");
}
