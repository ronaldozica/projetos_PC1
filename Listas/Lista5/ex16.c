#include <stdio.h>
#include <string.h>

#define tamanho 100

int compara(char s1[], char s2[])
{
	int cont1, cont2, cont;

	for(cont1 = 0; s1[cont1] != 0; cont1 ++);	// localiza o final de s1
	for(cont2 = 0; s2[cont2] != 0; cont2 ++);	// localiza o final de s2

	if(cont1 != cont2)				// primeiro é realizado o teste se as strings possuem
		return 0;				// o mesmo tamanho, se não possuírem, já é retornado
							// que são diferentes
	else
		for(cont = 0; cont != cont1; cont ++)	// caso possuam o mesmo tamanho ainda faz-se necessário
			if(s1[cont] != s2[cont])	// testar se todos os termos das strings são iguais e
				return 0;		// estão na mesma ordem

	return 1;
}

int main()
{
	char s1[tamanho], s2[tamanho];
	gets(s1);
	gets(s2);

	if(compara(s1, s2))
		printf("\nAs strings são iguais.\n");
	else
		printf("\nAs strings são diferentes.\n");
}
