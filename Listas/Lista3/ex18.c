#include <stdio.h>

int main()
{
	int numero, contador=0, maior_num = 0;

	do{
		contador=contador+1;
		printf("Digite o %do numero: ",contador);
		scanf("%d",&numero);

		if(maior_num < numero)
			maior_num = numero;

	} while(contador<10);
	printf("\nO maior número é %d\n", maior_num);
}
