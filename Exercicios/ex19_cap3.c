#include <stdio.h>

int main()
{
	char dig1, dig2, dig3;
	unsigned char num_dias = 0;
	printf ("Digite o nome de um mês: ");
	scanf ("%c%c%c", &dig1, &dig2, &dig3);

	if ( dig1 == 'j' )
		{
			if ( (dig2 == 'a' && dig3 == 'n') || (dig2 == 'u' && dig3 == 'l') )
				num_dias = 31;
			else if ( dig2 == 'u' && dig3 == 'n')
				num_dias = 30;
		}
	else if ( dig1 == 'f' && dig2 == 'e' && dig3 == 'v')
		num_dias = 28;
	
	else if ( (dig1 == 'm' && dig2 == 'a'&& dig3 == 'r') || (dig1 == 'm' && dig2 == 'a'&& dig3 == 'i') )
		num_dias = 31;
	
	else if ( dig1 == 'a')
		if ( dig2 == 'b' && dig3 == 'r')
			num_dias = 30;
		else if ( dig2 == 'g' && dig3 == 'o')
			num_dias = 31;

	else if ( ( dig1 == 's' && dig2 == 'e' && dig3 == 't') || ( dig1 == 'n' && dig2 == 'o' && dig3 == 'v') )
		num_dias = 30;
	
	else if ( ( dig1 == 'o' && dig2 == 'u' && dig3 == 't') || ( dig1 == 'd' && dig2 == 'e' && dig3 == 'z') )
		num_dias = 31;
	
	if (num_dias)
		printf ("\nO número de dias do mês digitado é: %d\n\n", num_dias);
	else
		printf("\nDigite o nome de um mês em português.\n\n");
}
