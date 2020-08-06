#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define tamanho 15

int maior_dif(int vetor[])
{
	int dif = 0, cont, cont_aux;

	for(cont = 0; cont < (tamanho - 1); cont ++)	// observe que só é necessário percorrer até a
	{						// posição "tamanho" - 1 do vetor, já que os números
		cont_aux = cont + 1;			// estão sendo verificados 2 a 2

		if( abs(vetor[cont_aux] - vetor[cont]) > dif)		// encontra a maior diferença entre
			dif = abs(vetor[cont_aux] - vetor[cont]);	// dois números consecutivos e a
	}								// armazena em "dif", que é retornada
									// à função principal
	return (dif);
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
	
	printf("\nA maior diferença entre números consecutivos do vetor é: %d.\n", maior_dif(vetor));
}
