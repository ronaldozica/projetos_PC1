#include <stdio.h>

int primo(int num)
{
	int cont;

	for(cont = 2; cont < num; cont++)
	{
		if(num % cont == 0)
			return 0;		// essa função informa se o número é primo e, para isso, realiza
	}					// a verificação se esse número é divisível por outro ou não
	
	return 1;
}

int main()
{
	int num;
	
	printf("\nDigite um número: ");
	scanf("%d", &num);

	if(primo(num))
		printf("\n%d é primo.\n", num);
	else
		printf("\n%d não é primo.\n", num);
}
