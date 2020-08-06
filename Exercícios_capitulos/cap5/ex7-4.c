#include <stdio.h>

long int n_segundos(int tempo, char tipo)
{
	int seg = tempo;

	switch(tipo)
	{
		case 'h':
			seg *= 60;
		case 'm':
			seg *= 60;
		case 's':
			break;
	}

	return seg;
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
