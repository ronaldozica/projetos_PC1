#include <stdio.h>
#include <string.h>

#define tam 500

void ultimo_nome(char *nome)
{
	int i, ultimo_esp, cont = 0;
	char aux[tam];

	for(i = 0; *(nome + i) != 0; i ++)
	{
		if( *(nome + i) == ' ')
		{
			ultimo_esp = i + 1;
		}
	}

	for(i = ultimo_esp; *(nome + i) != 0; i ++)
	{
		*(aux + cont) = *(nome + i);
		cont ++;
	}

	*(aux + cont) = ',';
	cont ++;
	*(aux + cont) = ' ';
	cont ++;

	for(i = 0; i < ultimo_esp; i ++)
	{
		*(aux + cont) = *(nome + i);
		cont ++;
	}

	*(aux + cont) = 0;

	for(i = 0; *(aux + i) != 0; i ++)
		*(nome + i) = *(aux + i);

	*(nome + i) = 0;
}

void maiuscula(char *nome)
{
	int i, espaco = 1;

	for(i = 0; *(nome + i) != 0; i ++)
	{
		if( *(nome + i) == ' ' )
		{
			espaco = 1;
		}

		if(espaco == 0 && ( *(nome + i) != ' ' ) )
		{
			if( ( *(nome + i) >= 'A' ) && ( *(nome + i) <= 'Z') )
				*(nome + i) += 32;
		}

		if(espaco == 1 && ( *(nome + i) != ' ' ) )
		{
			if( ( *(nome + i) >= 'a' ) && ( *(nome + i) <= 'z') )
				*(nome + i) -= 32;

			espaco = 0;
		}
		
	}
}

int sair(char *nome)
{
	int i;
	char sairch[] = {"sair"}, SAIRch[] = {"SAIR"};
	
	for(i = 0; *(nome + i) != 0; i ++)
	{
		if( *(nome + i) != *(sairch + i) )
		{
			if( *(nome + i) != *(SAIRch + i) )
			{
				return 0;
			}
		}
	}

	return 1;
}

int main()
{
	char nome[tam];

	printf("\nPara sair digite: \"sair\" ou \"SAIR\".\n");

	printf("\nDigite um nome completo: ");
	gets(nome);

	while( sair(nome) == 0 )
	{
		maiuscula(nome);

		ultimo_nome(nome);

		printf("\n%s\n", nome);

		printf("\nDigite um nome completo: ");
		gets(nome);
	}
}
