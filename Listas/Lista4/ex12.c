#include <stdio.h>

int potencia(int base, int expoente)
{
	int resultado = 1, cont;

	for(cont = 1; cont <= expoente; cont ++)
		resultado *= base;

	return resultado;
}

float val(float x, int n, float t)
{
	int cont;
	float soma = 0;

	for(cont = 1; cont <= n; cont ++)		// aqui é realizado o somatório, são somados "n" termos
		soma += x / potencia(1+t, cont);
	
	return soma;
}

int main()
{
	int n;
	float x, t;

	printf("Digite x, n e t, respectivamente: ");
	scanf("%f %d %f", &x, &n, &t);

	printf("\nO valor líquido anual é: %f\n", val(x, n, t) );
}
