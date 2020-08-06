#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define tamanho 15
/*--------------------------------------------------------------------------------------------------------
NOTA: Esse programa é ineficiente e não segue o enunciado, portanto, foi refeito e pode ser encontrado em:
'Área de trabalho'/Programas/estudos/l5ex7.c
--------------------------------------------------------------------------------------------------------*/
int organizar(int vetor[])	// primeiro erro, deveria ser feito um procedimento, não uma função
{
	int menor_val, cont, cont_org, maior_cont, pos_imprime;
	int vetor_organizado[tamanho];		// note que esse código poderia ser mais compacto, caso não
						// fosse utilizado esse vetor auxiliar, mas sim utilizando
						// o método da "bolha"
	for(cont_org = 0; cont_org < tamanho; cont_org ++)
	{
		for(menor_val = 101, maior_cont = cont = 0; cont < tamanho; cont ++)
		{
			if(vetor[cont] < menor_val)
			{
				menor_val = vetor[cont];
				maior_cont = cont;
			}
		}

		vetor_organizado[cont_org] = menor_val;
		vetor[maior_cont] = 102;
	}

	printf("\nPos - Cont\n");

	for(pos_imprime = 0; pos_imprime < tamanho; pos_imprime ++)
		printf("\n%.2d - %.2d", pos_imprime + 1, vetor_organizado[pos_imprime]);
				// outro erro, o vetor deveria ser impresso no programa principal, e não no
	putchar('\n');		// procedimento
}

int main()
{
	int vetor[tamanho], cont;

	srand(time(0));

	printf("\nPos - Cont\n");

	for(cont = 0; cont < tamanho; cont ++)
	{
		vetor[cont] = (rand() % 101);
		printf(" %.2d - %.2d\n", cont + 1, vetor[cont]);
	}
	
	printf("\nO vetor organizado em ordem crescente é:\n");
	organizar(vetor);
}
