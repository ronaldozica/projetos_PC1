#include <stdio.h>

int main()
{
	int tot_dias, n_anos, n_meses, n_dias;
	printf("\nDigite um número de dias: ");
	scanf("%d", &tot_dias);
	
	for(n_anos = 0; tot_dias >= 365; n_anos++)
		tot_dias -= 365;
	
	for(n_meses = 0 ; tot_dias >= 30; n_meses++)
		tot_dias -= 30;
	
	n_dias = tot_dias;

	printf("%d ano(s)\n%d mês/meses\n%d dia(s)\n", n_anos, n_meses, n_dias);
}

/*23) Implemente um programa que solicita ao usuário um valor inteiro correspondente à idade
de uma pessoa em dias e informe­a em anos, meses e dias.*/
