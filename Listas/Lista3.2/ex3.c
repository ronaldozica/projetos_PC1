#include <stdio.h>

int main()
{
	int num1, num2, soma, quociente, cont, somaf;
	printf("\nDigite dois números inteiros sem o algarismo zero para serem somados: ");
	scanf("%d %d", &num1, &num2);
	
	soma = num1 + num2;	

	for(cont = 1, somaf = 0, quociente = soma; quociente / 10 != 0; quociente /= 10)
	{
		if(quociente % 10 != 0)
		{
			somaf += (quociente % 10) * cont;
			cont *= 10;
		}
	}

	somaf += quociente * cont;
	
	printf("\nA soma sem os zeros é: %d\n", somaf);
}
