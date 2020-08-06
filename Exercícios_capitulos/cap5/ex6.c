#include <stdio.h>

long int n_segundos(int n_horas)
{
	return n_horas * 3600;
}

int main()
{
	int n_horas;
	long int segundos;

	printf("\nDigite um número de horas: ");
	scanf("%d", &n_horas);

	segundos = n_segundos(n_horas);

	printf("\nEm %d horas há %ld segundos.\n", n_horas, segundos);
}
