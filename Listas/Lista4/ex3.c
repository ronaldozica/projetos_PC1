#include <stdio.h>

int soma_imp(int n1, int n2)
{
	int soma;

	for(soma = 0; n1 <= n2; n1 ++)
		if(n1 % 2 != 0)			// realiza a soma de todos os números ímpares entre n1 e n2
			soma += n1;		// vale ressaltar que essa soma só acontece se o intervalo
						// digitado for válido
	return soma;
}

int main()
{
	int n1, n2;

	printf("\nDigite n1 e n2: ");
	scanf("%d %d", &n1, &n2);
	
	if(n1 > n2)				// realiza o teste se o intervalo digitado é válido
		printf("\nOs valores inseridos são inválidos.\n");
	else
		printf("\nA soma de todos os ímpares entre n1 e n2 é: %d\n", soma_imp(n1, n2) );
}
