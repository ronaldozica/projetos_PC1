#include <stdio.h>

int bissexto(int ano)
{
	int ano_bi;			// essa função retorna 1 se o ano é bissexto e 0 caso contrário
	
	if( ( (ano % 100 != 0) && (ano % 4 == 0) ) || ( (ano % 100 == 0) && (ano % 400 == 0) ) )
		ano_bi = 1;
	else
		ano_bi = 0;
	
	return ano_bi;
}

int dias_perc(int dia, int mes, int ano)
{
	int tot_dias = 0, cont;
	tot_dias += dia;	// primeiro realiza a soma dos dias digitados, agora, falta somar os meses

	if(mes > 1)
	{
		tot_dias += 31;					// soma dias de janeiro
		
		if(mes > 2 &&  bissexto(ano))			// soma dias de fevereiro em um ano bissexto
			tot_dias += 29;
		
		else if(mes > 2 && bissexto(ano) == 0)		// soma dias de fevereiro em um ano não bissexto
			tot_dias += 28;
		
		if(mes > 3)
		{
			for(cont = 4; (cont <= mes) && (cont < 7); cont++)
			{					// soma os dias do mês 4 até o mês 6
				if(cont % 2 == 0)
					tot_dias += 31;
				else
					tot_dias += 30;
			}

		if(mes >= 7)
		{						// soma os dias do mês 7 até o mês 12
			for(cont = 7; cont <= mes; cont++)
			{
				if(cont % 2 == 0)
					tot_dias += 30;
				else
					tot_dias += 31;
			}
		}
	}
}

	
	return tot_dias;
}

int main()
{
	int dia, mes, ano;

	printf("\nDigite uma data no formato dd mm aaaa: ");
	scanf("%d %d %d", &dia, &mes, &ano);

	if( (dia <= 31) && (mes <= 12) )			// verifica se a data digitada é válida
		printf("\nO número de dias percorridos do ano foi %d\n", dias_perc(dia, mes, ano) );
	else
		printf("\nData inválida.\n");
}
