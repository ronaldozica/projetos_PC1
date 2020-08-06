#include <stdio.h>

int main()
{
	int quant_num, numero, soma = 0;
	float media;
	
	for(quant_num = 1; quant_num <= 10; quant_num++)
	{
		printf("Digite o %d valor: ", quant_num);
		scanf("%d", &numero);
		soma += numero;
	}
	
	printf("\nA soma dos valores digitados é: %d", soma);
	media = (float) soma / 10;
	printf("\nA média dos valores digitados é: %f\n", media);
}
