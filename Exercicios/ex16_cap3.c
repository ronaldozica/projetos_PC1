#include <stdio.h>

int main()
{
	int num;
	printf("\nDigite um número inteiro: ");
	scanf("%d",&num);

	if (num)
		printf("\nO número digitado é diferente de zero\n\n");
	else
		printf("\nO número digitado é zero\n\n");


	if (num == 0)
		printf("\nO número digitado é zero\n\n");
	else
		printf("\nO número digitado é diferente de zero\n\n");

	switch (num)
	{
		case 0: 
			printf("\nO número digitado é zero\n\n");
			break;
		default:
			printf("\nO número digitado é diferente de zero\n\n");
	}

	num == 0 ? printf("\nO número digitado é zero\n\n") : printf("\nO número digitado é diferente de zero\n\n");
}
