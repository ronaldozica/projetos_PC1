#include <stdio.h>

int main()
{
	int quant_num, numero, soma = 0, vezes;
	float media;

	printf("\nEscolha quantos números serão digitados: ");
	scanf("%d", &vezes);
	
	for(quant_num = 1; quant_num <= vezes; quant_num++)
	{
		printf("Digite o %d valor: ", quant_num);
		scanf("%d", &numero);
		soma += numero;
	}
	
	printf("\nA soma dos valores digitados é: %d", soma);
	media = (float) soma / vezes;
	printf("\nA média dos valores digitados é: %f\n", media);
}
