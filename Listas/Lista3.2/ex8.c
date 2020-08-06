#include <stdio.h>

int main()
{
	int N, cont, num, posicao, maior_valor = 0;
	printf("\nDigite o valor de N: ");
	scanf("%d", &N);
	
	for(cont = 1; cont <= N; cont++)
	{
		printf("Digite o %dº valor: ", cont);
		scanf("%d", &num);
		
		if(num > maior_valor)
		{
			maior_valor = num;
			posicao = cont;
		}
	}
	
	printf("\nO maior valor informado foi %d na posição %d\n", maior_valor, posicao);
}
