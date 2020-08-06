#include <stdio.h>

int somatorio(int n)
{
	int resultado, i;

	for(resultado = 0, i = 3; i <= n; i++)
	{
		resultado += (5 * i + 2);		// realiza o somatório de 3 até o "n" digitado
	}

	return resultado;
}

int main()
{
	int n;

	printf("\nDigite o valor de n: ");
	scanf("%d", &n);

	printf("\nO valor do somatório é: %d\n", somatorio(n) );
}
