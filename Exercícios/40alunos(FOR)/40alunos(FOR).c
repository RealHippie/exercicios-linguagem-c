#include <stdio.h>
#include <stdlib.h>

int main()
	{	
		int cont;
		float nota1,nota2,nota3,media;
		

		
		for (cont = 1; cont < 40 ; cont++)
		{
			printf("\n Digite a primeira nota do aluno %d \n", cont);
			scanf(" %f", &nota1);
			printf("Digite a segunda nota do aluno %d \n", cont);
			scanf(" %f", &nota2);
			printf("Digite a terceira  nota do aluno %d \n", cont);
			scanf(" %f", &nota3);
			
			media= (nota1+nota2+nota3)/3;
			
			if (media >= 7)
			{	
				printf("\n ****************************************");
				printf("\n   aluno %d foi aprovado com media %.2f \n", cont, media);
				printf("\n ****************************************");
			}
			else 
			{	
				printf("\n ****************************************");
				printf("\n   aluno %d foi reprovado com media %.2f \n", cont, media);
				printf("\n ****************************************");
			}
			
		}
	}


