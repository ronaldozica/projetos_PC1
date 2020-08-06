#include <stdio.h>

int main()
{
	int nota100, nota50, nota20, nota10, nota5, nota2;
	int moeda1, moeda0_50, moeda0_25, moeda0_10, moeda0_05, moeda0_01;
	float valor;
	printf("\nDigite um valor monetário (com duas casas decimais): ");
	scanf("%f", &valor);
	printf("\nValor: %f\n",valor);

/*----------------------------------------------NOTAS----------------------------------------*/	
	for(nota100 = 0; valor >= 100; valor -= 100)
		nota100 ++;
	
	for(nota50 = 0; valor >= 50; valor -= 50)
		nota50 ++;
	
	for(nota20 = 0; valor >= 20; valor -= 20)
		nota20 ++;
	
	for(nota10 = 0; valor >= 10; valor -= 10)
		nota10 ++;
	
	for(nota5 = 0; valor >= 5; valor -= 5)
		nota5 ++;

	for(nota2 = 0; valor >= 2; valor -= 2)
		nota2 ++;
	
/*----------------------------------------------MOEDAS---------------------------------------*/
	for(moeda1 = 0; valor >= 1; valor -= 1)
		moeda1 ++;
	
	for(moeda0_50 = 0; valor >= 0.50; valor -= 0.5)
		moeda0_50 ++;
	
	for(moeda0_25 = 0; valor >= 0.25; valor -= 0.25)
		moeda0_25 ++;
	
	for(moeda0_10 = 0; valor >= 0.10; valor -= 0.10)
		moeda0_10 ++;
	
	for(moeda0_05 = 0; valor >= 0.05; valor -= 0.05)
		moeda0_05 ++;
	
	for(moeda0_01 = 0; valor >= 0.01; valor -= 0.01)
		moeda0_01 ++;
	
/*--------------------------------------------IMPRESSÃO--------------------------------------*/	
	printf("\nNOTAS: ");

	printf("\n%d nota(s) de R$100,00", nota100);
	printf("\n%d nota(s) de R$ 50,00", nota50);
	printf("\n%d nota(s) de R$ 20,00", nota20);
	printf("\n%d nota(s) de R$ 10,00", nota10);
	printf("\n%d nota(s) de R$  5,00", nota5);
	printf("\n%d nota(s) de R$  2,00", nota2);
	
	printf("\nMOEDAS: ");

	printf("\n%d moeda(s) de R$  1,00", moeda1);
	printf("\n%d moeda(s) de R$  0,50", moeda0_50);
	printf("\n%d moeda(s) de R$  0,25", moeda0_25);
	printf("\n%d moeda(s) de R$  0,10", moeda0_10);
	printf("\n%d moeda(s) de R$  0,05", moeda0_05);
	printf("\n%d moeda(s) de R$  0,01\n\n", moeda0_01);
}

/*24) Implemente um programa que solicita ao usuário um valor real com duas casas decimais.
Este valor representa um valor monetário. A seguir, calcule o menor número de notas e
moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100,
50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre
a relação de notas necessárias.*/
