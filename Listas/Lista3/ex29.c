#include <stdio.h>

int main()
{
	int num, cont, maior_valor, posicao;
	printf("\nDigite 10 valores, será informado o maior valor e a primeira posição em que aparece.\n");
	
	for(posicao = 1, maior_valor = 0, cont = 1; cont <= 10; cont++)
	{
		printf("Digite o %dº valor: ", cont);
		scanf("%d", &num);
		
		if(num > maior_valor)
		{
			maior_valor = num;
			posicao = cont;
		}
	}
	
	printf("\nO maior valor digitado foi o da %dª posição, e foi %d.\n", posicao, maior_valor);
}
