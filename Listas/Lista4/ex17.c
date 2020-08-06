#include <stdio.h>

int calcular_tempo(int m_inicial, int h_inicial, int m_final, int h_final)
{
	int duracao;

	if(h_inicial > h_final)
	{						// jogo começou em um dia e terminou em outro
		h_inicial = 24 - h_inicial;
		m_inicial += (h_inicial * 60);
		m_final += (h_final * 60);
		duracao = m_inicial - m_final;
		printf("\nO jogo durou %d minutos.\n", duracao);
	}
	
	else if(h_inicial < h_final)			// jogo começou e terminou no mesmo dia
	{
		m_inicial += (h_inicial * 60);
		m_final += (h_final * 60);
		duracao = m_final - m_inicial;
		printf("\nO jogo durou %d minutos.\n", duracao);
	}
	
	else if(h_inicial == h_final)
	{
		if(m_inicial > m_final)			// jogo começou em um dia e terminou em outro
		{
			duracao = (23 * 60) + (60 - (m_inicial - m_final));
			printf("\nO jogo durou %d minutos.\n", duracao);
		}

		else if(m_inicial < m_final)		// jogo começou e terminou no mesmo dia
		{
			duracao = m_final - m_inicial;
			printf("\nO jogo durou %d minutos.\n", duracao);
		}
		else if(m_inicial == m_final)		// horário inválido, o jogo não pode ter durado 0 minutos
			printf("\nInsira horários diferentes.\n");
	}
}

int main()
{
	int m_inicial, h_inicial, m_final, h_final;

	printf("\nDigite a hora de começo do jogo no formato hh mm: ");
	scanf("%d %d", &h_inicial, &m_inicial);
	printf("\nDigite a hora do final do jogo no formato hh mm: ");
	scanf("%d %d", &h_final, &m_final);

	if( (m_inicial >= 60) || (h_inicial >= 24) || (m_final >= 60) || (h_final >= 24) )
		printf("\nHorário inválido.\n");	// verifica se o intervalo digitado é válido ou não
	else
		calcular_tempo(m_inicial, h_inicial, m_final, h_final);
}
