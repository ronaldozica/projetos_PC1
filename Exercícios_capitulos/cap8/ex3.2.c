#include <stdio.h>
#include <string.h>

#define tam 200

void ultimo_nome(char *nome)
{
	int i;
	char *aux = 0;

	for(i = 0; *(nome + i) != 0; i ++)
	{
		if( *(nome + i) == ' ')
		{
			aux = (nome + i + 1);
		}
	}

	if(aux != 0)
	{
		for(i = 0; *(aux + i) != 0; i ++)
		{
			*(nome + i) = *(aux + i);
		}

		*(nome + i) = 0;
	}	
}

int main()
{
	char nome[tam];

	printf("\nDigite um nome completo: ");
	scanf("%[^\n]s", nome);

	ultimo_nome(nome);

	printf("\n%s\n", nome);
}
