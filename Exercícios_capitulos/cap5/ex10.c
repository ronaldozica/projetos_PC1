#include <stdio.h>

int Entre(int x, int lim_inf, int lim_sup)
{
	if(x < lim_inf)
		return 0;
	if(x > lim_sup)
		return 0;

	return 1;
}

int main()
{
	int x, lim_inf, lim_sup, intervalo;	

	printf("\nDigite um valor para x: ");
	scanf("%d", &x);

	do
	{
		printf("\nInsira um valor para o limite inferior e depois para o limite superior: ");
		scanf("%d %d", &lim_inf, &lim_sup);

		if(lim_inf > lim_sup)
			printf("\nIntervalo inválido.\n");

	}while(lim_inf > lim_sup);

	intervalo = Entre(x, lim_inf, lim_sup);

	if(intervalo)
		printf("\n%d <= %d <= %d.\n", lim_inf, x, lim_sup);
	else
		printf("\n%d não se encontra no intervalo digitado.\n", x);
}
