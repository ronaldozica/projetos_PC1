#include <stdio.h>

int fatorial(int num)
{
	int cont, produto = 1;

	if(num < 0)
		return -1;

	else if(num == 0 || num == 1)
		return 1;

	else if(num >= 2)
	{
		for(cont = 1; cont <= num; cont ++)
			produto *= cont;

		return produto;
	}
}

int potencia(int base, int expoente)
{
	int resultado = 1, cont;

	for(cont = 1; cont <= expoente; cont ++)
		resultado *= base;

	return resultado;
}

float somatorio(int n)
{
	float soma = 0;
	int i;
	
	for(i = 3; i <= n; i++)
		soma += (float) fatorial(i) / potencia(i, i);
	
	return soma;
	
}

int main()
{
	int n;

	printf("\nDigite um valor para n:");
	scanf("%d", &n);

	if(n >= 3)
		printf("\nA soma é: %f.\n", somatorio(n));

	else
		printf("\nO número digitado está incorreto.\n");
}
