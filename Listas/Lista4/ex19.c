#include <stdio.h>

#include <stdio.h>

long int funcao(int n)
{
	int cont, algarismo, teste_num, n_invalido;

	for(cont = 1; ; cont ++)
	{
		teste_num = n * cont;

		for(n_invalido = 0; teste_num != 0; teste_num /= 10)
		{
			if(teste_num % 10 > 2)
				n_invalido = 1;
		}
		
		if(n_invalido == 0)
		{
			printf(" %d ", n * cont);
			return (n * cont);
		}
	}
}

int somatorio(int n)
{
	int cont, soma = 0;

	for(cont = 1; cont <= n; cont ++)
		soma += funcao(cont) / cont;	// observe que foi utilizado f(n)/n, diferente do enunciado,
						// porém, esse deve-se utilizar esse valor para chegar ao
	return soma;				// resultado desejado
}

int main()
{
	printf("\nO resultado do somatório é: %d.\n", somatorio(100) );
}
