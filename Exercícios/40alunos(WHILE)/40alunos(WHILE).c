#include <stdio.h>

int main ()
	
	{
		float nota1, nota2, nota3, mediaNotas;
		
		int cont = 1;
		
		while (cont <= 40)
		
		{
			printf("\ndigite a PRIMEIRA NOTA do aluno (%d)\n", cont);
			scanf(" %f", &nota1);
			printf("\ndigite a SEGUNDA NOTA do aluno (%d)\n", cont);
			scanf("%f", &nota2);
			printf("\ndigite a TERCEIRA NOTA do aluno (%d)\n", cont);
			scanf("%f", &nota3);
			
			mediaNotas = (nota1+nota2+nota3)/3;
			
			if (mediaNotas >= 7)
			{
				printf("\nO aluno (%d) foi aprovado com nota: %.2f\n", cont, mediaNotas);
			}
			else 
			{
				printf("\nO aluno (%d) foi reprovado com nota: %.2f\n", cont, mediaNotas);
			}
			
			cont += 1;
		}
	}
