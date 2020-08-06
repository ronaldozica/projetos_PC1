#include <stdio.h>

int main()
{
	int dia, mes, ano;
	char bar1, bar2;
	printf("\n\nDigite uma data no formato xx/xx/xxxx ou xx-xx-xxxx:");
	scanf("%d %c%d %c%d", &dia, &bar1, &mes, &bar2, &ano);

	if( (dia > 0 && dia <= 31) && ( mes > 0 && mes <= 12 ) && ( ano >= 0 && ano <= 2020) )
		printf("\n\nA data digitada é válida.\n\n");
	else
		printf("\n\nA data digitada é inválida.\n\n");
}

