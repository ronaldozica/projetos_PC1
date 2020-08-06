#include <stdio.h>

#define tamanho_nome 100
#define tamanho_cpf 25
#define tamanho_data 12

typedef struct					// define a estrutura pessoa, que contém nome, data e cpf
{
	char nome[tamanho_nome];
	char data[tamanho_data];
	char cpf[tamanho_cpf];
} Pessoa;

void exibir(Pessoa *Px)
{						// imprime os dados da pessoa enviada
	printf("\nNome: %s.", Px -> nome);
	printf("\nData de nascimento: %s.", Px -> data);
	printf("\nCpf: %s.\n", Px -> cpf);
}

void preencher(Pessoa *Px)
{						// requisita ao usuário a inserção dos dados da pessoa X
	printf("\nDigite o nome: ");
	scanf("%[^\n]s", Px -> nome);
	getchar();

	printf("\nDigite a data de nascimento no formato \"dd-mm-aa\": ");
	scanf("%[^\n]s", Px -> data);
	getchar();

	printf("\nDigite o cpf no formato \"xxx.xxx.xxx-xx\": ");
	scanf("%[^\n]s", Px -> cpf);
	getchar();
}

int main()
{
	Pessoa P1;
	preencher(&P1);
	exibir(&P1);
}
