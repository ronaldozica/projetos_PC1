#include <stdio.h>

int main()
{
	int val_x, val_z, valf_x, menor_quant;
	printf("\nDigite um valor para X: ");
	scanf("%d", &val_x);
	printf("\nDigite um valor para Z: ");
	scanf("%d", &val_z);

	while(val_z <= val_x)
	{
		printf("\nDigite um valor válido para Z: ");
		scanf("%d", &val_z);
	}
	
	for(menor_quant = 1, valf_x = val_x; valf_x < val_z; menor_quant ++)
	{
		valf_x += val_x + menor_quant;
		printf("%d || %d < %d\n", valf_x, val_x, val_z);
	}

	printf("\n%d\n", menor_quant);
}

