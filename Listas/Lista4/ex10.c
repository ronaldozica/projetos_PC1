#include <stdio.h>

int fatorial(int num)
{
	int cont, produto = 1;			// mesma função fatorial comentada anteriormente
						// essa função retorna -1 caso o número seja negativo, 1 caso
	if(num < 0)				// seja 0 ou 1, e retorna um fatorial calculado se "num" > 2
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

int somatorio(int n)
{
	int soma = 0, i;			// realiza o somatório dos fatoriais e retorna resultado
	
	for(i = 3; i <= n; i++)
		soma += fatorial(i);
	
	return soma;
	
}

int main()
{
	int n;

	printf("\nDigite um número para que seu fatorial seja calculado: ");
	scanf("%d", &n);

	if(n >= 3)
	{
		printf("\nA soma é: %d\n", somatorio(n));
	}

	else
		printf("\nO número digitado está incorreto.\n");
}


