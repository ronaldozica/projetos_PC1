#include <stdio.h>

float pot(float base, int expoente)
{
	int cont;
	float resultado = 1;

	for(cont = 1; cont <= expoente; cont ++)
		resultado *= base;

	return resultado;
}

float VAL(float x, int n, float t)
{
	int cont;
	float val = 0;

	for(cont = 1; cont <= n; cont ++)
		val += x / ( pot(1 + t, cont) );

	return val;
}

int main()
{
	int n;
	float x, t, val;

	printf("\nDigite respectivamente x, n, t: ");
	scanf("%f %d %f", &x, &n, &t);

	val = VAL(x, n, t);

	printf("\nO valor líquido anual foi %f\n.", val);
}
