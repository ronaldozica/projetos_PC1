#include <stdio.h>

int main()
{
	int num1, num2, resultado = 0, vezes;
	
	printf("\nDigite um número inteiro: ");
	scanf("%d", &num1);
	printf("\nDigite outro número inteiro: ");
	scanf("%d", &num2);
	
	for(vezes = 1; vezes <= num2; vezes++)
	{
		resultado += num1;
	}
	
	printf("\nO resultado da multiplicação é: %d\n", resultado);
}
