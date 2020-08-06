#include <stdio.h>

int main()
{
	int hora_i, min_i, hora_f, min_f, duracao;

	printf("\nDigite a hora de início do jogo no formato hh mm: ");
	scanf("%d %d", &hora_i, &min_i);
	while( (hora_i >= 24) || (min_i >= 60) )
	{
		printf("\nDigite um valor entre 00-00 e 23-59: ");
		scanf("%d %d", &hora_i, &min_i);
	}

	printf("\nDigite a hora do fim do jogo no formato hh mm: ");
	scanf("%d %d", &hora_f, &min_f);
	while( (hora_f >= 24) || (min_f >= 60) )
	{
		printf("\nDigite um valor entre 00-00 e 23-59: ");
		scanf("%d %d", &hora_f, &min_f);
	}
		
	if(hora_i < hora_f)
	{
		min_i += (60 * hora_i);
		min_f += (60 * hora_f);
		duracao = min_f - min_i;
	}
	
	else if(hora_i > hora_f)
	{
		hora_i = 24 - hora_i;
		min_i = (60 * hora_i) - min_i;
		min_f += (60 * hora_f);
		duracao = min_i + min_f;
	}
	
	else if(hora_i = hora_f)
	{
		if(min_i > min_f)
		{
			hora_i = 24 - hora_i;
			min_i = (60 * hora_i) - min_i;
			min_f += (60 * hora_f);
			duracao = min_i + min_f;
		}
		
		if(min_i < min_f)
		{
			duracao = min_i - min_f;
		}
		
		else if(min_i == min_f)
		{
			duracao = 0;
		}
	}

	printf("\nO jogo durou %d minutos\n", duracao);
}
