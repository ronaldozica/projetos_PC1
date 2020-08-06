#include <stdio.h>

long int n_segundos(int tempo, char tipo)
{
	if(tipo == 's')
		return tempo;
	if(tipo == 'm')
		return tempo * 60;
	if(tipo == 'h')
		return tempo * 3600;
}

int main()
{
	char tipo;
	int tempo;
	long int segundos;

	printf("\nDigite a quantidade e o período de tempo (s, m, h): ");
	scanf("%d %c", &tempo, &tipo);

	segundos = n_segundos(tempo, tipo);

	if(tipo == 's')
		printf("\nEm %d segundos há %ld segundos.\n", tempo, segundos);
	if(tipo == 'm')
		printf("\nEm %d minutos há %ld segundos.\n", tempo, segundos);
	if(tipo == 'h')
		printf("\nEm %d horas há %ld segundos.\n", tempo, segundos);
}
