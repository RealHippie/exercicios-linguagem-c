#include <stdio.h>
#include <stdlib.h>

int main ()

	{
		int cont, numero;
		int vetor1[10];
		int vetor2[10];
		
		for(cont = 0; cont < 10; cont++)
		{
			printf("\n(%d) Digite um numero\n", cont+1);
			scanf("%d", &numero);
			
			vetor1[cont] = numero;
			
			if(vetor1[cont]%2 == 0)
			{
				vetor2[cont] = vetor1[cont]+1;
			}
			
			else
			{
				vetor2[cont] = vetor1[cont]-1;
			}
		}
		
		printf("\n-----------------------------------\n");
		
		for(cont = 0; cont < 10; cont++)
		{	
			printf("\n| vetor1[%d] %d | vetor2[%d] %d |\n", cont, vetor1[cont], cont, vetor2[cont]);
		}
		
		printf("\n\n");
		system("pause");
	}
