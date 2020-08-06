#include <stdio.h>
#include <string.h>

#define tamanho 250

void imprime_sobrenome(char nome_completo[])
{
	int cont, n_espacos = 0, espacos_nome = 0, aux, ultimo_nome;
	char sobrenome[tamanho];

	for(cont = 0; nome_completo[cont] != 0; cont ++)	// conta-se o número de espaços e o armazena
		if(nome_completo[cont] == ' ')			// na variável "n_espacos"
			n_espacos ++;

	for(cont = 0; nome_completo[cont] != 0; cont ++)
	{
		if(nome_completo[cont] == ' ')
			espacos_nome ++;
		if(espacos_nome == n_espacos - 1)		// localiza o último espaço para que se possa
			ultimo_nome = (cont + 2);		// imprimir o último sobrenome a partir dele
	}

	for(aux = 0, cont = ultimo_nome; nome_completo[cont] != 0; cont ++)
	{
		sobrenome[aux] = nome_completo[cont];
		aux ++;
	}

	printf("\nÚltimo nome: %s.\n", sobrenome);
}

int main()
{
	char nome_completo[tamanho];
	gets(nome_completo);			// primeiro, recebe a string
	imprime_sobrenome(nome_completo);	// chama o procedimento responsável por imprimir o último nome
}
