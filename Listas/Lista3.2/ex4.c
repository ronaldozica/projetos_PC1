#include <stdio.h>
#include <math.h>

int main()
{
	int N, cont_linha, cont_col, entrada, potencia;
	printf("\nDigite um valor de N: ");
	scanf("%d", &N);
	
	if( (N > 1) && (N < 1000) )
	{
		for(cont_linha = 1; cont_linha <= N; cont_linha ++)
		{
			for(cont_col = 1; cont_col <= 3; cont_col ++)
			{
				entrada = cont_linha;
				potencia = cont_col;
				
				entrada = pow(entrada, potencia);
				
				printf("%d ", entrada);
			}
			
			printf("\n");
		}
	}
	
	else
		printf("\nO valor digitado foi inválido.\n");
}
