#include <stdio.h>

int main()
{
	int num1, num2, num_primo = 2, mmc = 1, cont;
	char test_primo;
	printf("\nDigite dois números inteiros:\n");
	scanf("%d %d", &num1, &num2);

	while( !( (num1 == 1) && (num2 == 1) ) )
	{
		if( (num1 % num_primo == 0) || (num2 % num_primo == 0) )
			printf("%3d,%3d | %3d\n", num1, num2, num_primo);

		if( (num1 % num_primo == 0) && (num2 % num_primo == 0) )
		{
			num1 /= num_primo;
			num2 /= num_primo;
			mmc *= num_primo;
		}
		
		else if(num1 % num_primo == 0)
		{
			num1 /= num_primo;
			mmc *= num_primo;
		}
		
		else if(num2 % num_primo == 0)
		{
			num2 /= num_primo;
			mmc *= num_primo;
		}
		
		if( ! ( (num1 % num_primo == 0) || (num2 % num_primo == 0) ) )
		{
			test_primo = 1;
			while(test_primo != 2)
			{
				num_primo++;
				for(cont = 1, test_primo = 1; cont <= num_primo; cont++)
				{
					if( (cont != 1) && (cont != num_primo) && (num_primo % cont == 0) )
					{
						test_primo = 0;
					}
					if( (cont == num_primo) && (test_primo == 1) )
					{
						test_primo = 2;
					}
				}
			}
		}
		
	}
	printf("\nO mmc dos dois números digitados é: %d\n", mmc);
}
