#include <stdio.h>

int main()
{
	char opcao;
	do
	{
		printf("\t M E N U  P R I N C I P A L");
		printf("\n\n\t\tClientes");
		printf("\n\n\t\tFornecedores");
		printf("\n\n\t\tEncomendas");
		printf("\n\n\t\tSair");
		printf("\n\n\t\tOpção");
		scanf(" %c",&opcao);
		fflush(stdin);
		
		switch(opcao)
		{
			case 'c':
			case 'C': puts("Opção CLIENTES"); break;
			case 'f':
			case 'F': puts("Opção FORNECEDORES"); break;
			case 'e':
			case 'E': puts("Opção ENCOMENDAS"); break;
			case 's':
			case 'S': puts("Opção CLIENTES"); break;
			default: puts("Opção INVÁLIDA! ! !"); break;
		}
		
		getchar();
	}
	while(opcao != 's' && opcao != 'S');
}
