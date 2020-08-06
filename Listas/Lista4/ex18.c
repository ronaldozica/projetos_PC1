#include <stdio.h>

int funcao(int n)
{
	int cont, algarismo, teste_num, n_invalido;

	for(cont = 1; ; cont ++)
	{
		teste_num = n * cont;		// encontra o próximo múltiplo de "n"

		for(n_invalido = 0; teste_num != 0; teste_num /= 10)
		{
			if(teste_num % 10 > 2)
				n_invalido = 1;	// seta o flag "n_invalido", informando que algum dígito é
		}				// maior que 2, sendo necessário analisar o próximo múltiplo
		
		if(n_invalido == 0)		// caso o flag não tenha sido setado ao longo do "for", retorna esse
			return (n * cont);	// múltiplo de "n"
	}
}

int main()
{
	int n;

	printf("\nDigite n: ");
	scanf("%d", &n);

	printf("O próximo número múltiplo de n que possui apenas digitos menores ou iguais a 2 é: %d\n", funcao(n) );
}
