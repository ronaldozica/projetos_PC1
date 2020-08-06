#include <stdio.h>
#include <math.h>

int main()
{
	int numero, quant_dig, aux, num_inverso = 0, resto, cont_10 = 10, digito, soma;
	printf("\nDigite um número: ");
	scanf("%d", &numero);

	for(quant_dig = 0, aux = numero; aux != 0; quant_dig ++)
	{
		aux /= 10;
	}

	for(resto = numero, digito = quant_dig; digito > 0; digito --)
	{
		resto %= 10;
		num_inverso += pow(10, digito - 1) * resto;

		resto = numero / cont_10;
		cont_10 *= 10;
	}
	
	printf("\nO número invertido é: %d", num_inverso);
	soma = numero + num_inverso;
	printf("\n%d + %d = %d\n", numero, num_inverso, soma);
}
