#include <stdio.h>

float Max(float x, float y, float z)
{
	if( (x >= y) && (x >= z) )
		return x;
	if( (y >= x) && (y >= z) )
		return y;
	else
		return z;
}

int main()
{
	float x, y, w, maior;

	printf("\nDigite um valor para x, y e w respectivamente: ");
	scanf("%f %f %f", &x, &y, &w);

	maior = Max(x, y, w);

	printf("\nO maior valor é: %f.\n", maior);
}
