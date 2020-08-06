#include <stdio.h>

int multiplicacao(int num1, int num2)
{
	int produto;

	for(produto = 0; num2 != 0; num2 --)
		produto += num1;		// produto é somado com "num1", isso acontece "num2" vezes
						// então, o resultado é num1 * num2 e é retornado
	return produto;
}

int main()
{
	int num1, num2;

	printf("\nDigite dois números que serão multiplicados e aperte <ENTER>: ");
	scanf("%d %d", &num1, &num2);
	printf("\nO produto dos dois números inseridos é: %d\n", multiplicacao(num1, num2) );
}
