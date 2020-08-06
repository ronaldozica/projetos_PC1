#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define tamanho 15

int terceiro_ele(int vetor_maior[])	// ERRO: deveria ter sido declarado "void(tercei..." já que se trata de
{					// um procedimento, porém, de resto, está correto

	int pos = tamanho - 1;		// encontra a última posição do vetor

	while(vetor_maior[pos] == vetor_maior[pos - 1])
		pos --;			// encontra um número diferente do maior número do vetor

	while(vetor_maior[pos - 1] == vetor_maior[pos - 2])
		pos --;			// encontra um número diferente do segundo maior número do vetor

	printf("\nO terceiro maior elemento do vetor é: %d.\n", vetor_maior[pos - 2]);
}

int organizar(int vetor[])
{		// inicialmente, é aproveitado a função implementada no exercício anterior, porém, como foi
		// explicado anterirmente, essa função não se adequa ao enunciado
	int menor_val, cont, cont_org, maior_cont, pos_imprime;
	int vetor_organizado[tamanho];

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

	putchar('\n');

	terceiro_ele(vetor_organizado);
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
