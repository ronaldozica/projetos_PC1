#include <stdio.h>

int main()
{
	int n, cont, num;
	int num_dentro = 0, num_fora = 0;
	printf("\nDigite um número N: ");
	scanf("%d", &n);

	for(cont = 1; cont <= n; cont++)
	{
		printf("Digite o %dº número: ", cont);
		scanf("%d", &num);
		
		if( (num >= 10) && (num <= 20) )
			num_dentro ++;
		else
			num_fora ++;
	}
	
	printf("\nNúmeros dentro do intervalo: %d", num_dentro);
	printf("\nNúmeros fora do intervalo: %d\n", num_fora);
}
