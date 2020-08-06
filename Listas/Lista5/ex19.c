#include <stdio.h>
#include <string.h>
#define tamanho 250

void eliminar(char str[])
{
	int aux, i, j;

	for(j = 0; str[j] != 0; j ++)		
		for(i = 1; str[i] != 0; i ++)
		{
			if(str[j] < str[j + 1])		// utiliza o método "bolha", se um termo é menor
			{				// que o próximo, suas ordens são invertidas
				aux = str[j];
				str[j] = str[j + 1];
				str[j + 1] = aux;
			}
		}
}

int main()
{
	char str[tamanho];

	printf("\nDigite uma string: ");
	gets(str);

	organizar(str);

	printf("\nA string em ordem crescente é: %s.\n", str);
}
