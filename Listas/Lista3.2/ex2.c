#include <stdio.h>

int main()
{
	int a, b, cont_dig, cont_num, quociente, dig;
	printf("\nDigite A: ");
	scanf("%d", &a);
	printf("\nDigite B: ");
	scanf("%d", &b);

	for(dig = 0, cont_dig = 0; cont_dig < 10; cont_dig ++)
	{
		for(cont_num = a; cont_num <= b; cont_num ++)
		{
			for(quociente = cont_num * 10; quociente / 10 != 0; quociente /= 10)
			{
				if(quociente / 10 == cont_dig)
				{
					dig ++;
				}
			}
		}
		
		printf("%d ", dig);
		dig = 0;
	}
	
	printf("\n");
}
