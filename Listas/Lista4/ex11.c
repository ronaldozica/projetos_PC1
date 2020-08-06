#include <stdio.h>

int potencia(int base, int expoente)
{
	int resultado = 1, cont;

	for(cont = 1; cont <= expoente; cont ++)
		resultado *= base;		// multiplica 1 pela "base", "expoente" vezes

	return resultado;
}

int main()
{
	int base, expoente;

	printf("\nDigite a base e o expoente, respectivamente: ");
	scanf("%d %d", &base, &expoente);

	printf("\n%d ^ %d = %d\n", base, expoente, potencia(base,expoente));
}
