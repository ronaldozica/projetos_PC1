#include <stdio.h>

int primo(int num)
{
	int cont;

	for(cont = 2; cont < num; cont ++)
	{
		if(num % cont == 0)
			return 0;
	}
	
	return 1;
}

int prox_primo(int num)
{
	for(num ++; primo(num) == 0; num ++);	// chama a função primo até que se encontre o próximo número
	return num --;				// primo após "num", esse valor é retornado à função principal
}

int main()
{
	int num;

	printf("\nDigite um número: ");
	scanf("%d", &num);

	printf("\nO primeiro número primo após %d é: %d.\n", num, prox_primo(num) );
}
