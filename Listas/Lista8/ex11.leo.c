#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fpin = fopen("ci.txt", "r");
	FILE *fpout = fopen("totais.txt", "w");

  if(fpin==NULL)
  {
    printf("impossivel abrir fpin\n");return 0;
  }
  if(fpout==NULL)
  {
    printf("impossivel abrir fout\n");return 0;
  }

	char *str = (char *)malloc(100 * sizeof(char));
	int matricula;
	int qtdLig;
	double totalPessoa;
	double totalEmpresa = 0;
	char *token;
	while (fgets(str, 100, fpin))
  {
		token = strtok(str, " ");//separa uma string em varias outras substrings.//devolve o endereço
		matricula = atoi(token);//transforma caracteres para inteiro, recebe ponteiro para char e devolve inteiro
		token = strtok(NULL, " ");//separa outra string
		qtdLig = atoi(token);
		if (qtdLig!=0)
    {
			totalPessoa = 0;
			while (qtdLig > 0)
      {
				token = strtok(NULL, " ");
				totalPessoa += atof(token);// recebe ponteiro para char e devolve DOBLE, real
				totalEmpresa += atof(token);
				qtdLig--;
			}
			fprintf(fpout,"%d %.1lf\n",matricula,totalPessoa);
		}
	}
	fprintf(fpout,"%.1lf\n", totalEmpresa);
	free(str);
	fclose(fpin);
	fclose(fpout);
}
