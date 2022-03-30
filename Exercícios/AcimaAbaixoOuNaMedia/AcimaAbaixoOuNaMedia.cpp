#include <stdio.h>
#include <stdlib.h>

int main ()

	{
		int cont;
		float nota[10];
		float notaTotal = 0, media;
		
		for (cont = 0; cont < 10; cont++)
		{
			printf("\nEscreva a nota do aluno (%d)\n", cont+1);
			scanf(" %f", &nota[cont]);
			notaTotal = notaTotal+nota[cont];
		}
		
		media = notaTotal/10;
		
		printf("\nA media da turma foi: %.2f\n", media);
		
		for (cont = 0; cont < 10; cont++)
		{
			if (nota[cont] >= media)
			{
				printf("\nAluno (%d) tirou nota %.2f e esta acima da media da turma!\n", cont+1, nota[cont]);
			}
			
			else
				if (nota[cont] == media)
				{
					printf("\nAluno (%d) tirou nota %.2f e esta na media da turma!\n", cont+1, nota[cont]);
				}
			
			else
			{
				printf("\nAluno (%d) tirou nota %.2f e esta abaixo da media da turma!\n", cont+1, nota[cont]);
			}
		}
		
		printf("\n\n");
		system("pause");
	}
	
	
