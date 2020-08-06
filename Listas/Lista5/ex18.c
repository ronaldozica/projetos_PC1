#include <stdio.h>
#include <string.h>
#define tamanho 250

void eliminar(char v[], char ch)
{
	int cont, aux;

	for(cont = 0; v[cont] != 0; cont ++)
	{
		if(v[cont] == ch)		// caso o vetor na posição cont seja igual ao caractere que
		{				// será eliminado, o vetor na posição desse caractere será
			for(aux = cont; v[aux] != 0; aux ++)	// "deslocado" para a esquerda, ou seja,
				v[aux] = v[aux + 1];		// um termo "n" se tornará o termo "n + 1"
		}
	}
}

int main()
{
	char v[tamanho], ch;

	printf("\nDigite uma string: ");
	gets(v);

	printf("\nDigite um caracter pra ser eliminado: ");
	ch = getchar();

	eliminar(v, ch);

	printf("\nA string sem o caracter %c é: %s.\n", ch, v);
}
