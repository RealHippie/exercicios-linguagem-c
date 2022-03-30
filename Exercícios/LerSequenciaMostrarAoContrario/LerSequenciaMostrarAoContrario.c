#include <stdio.h>
#include <stdlib.h>

int main ()

	{
		int cont;
		
		int sequencia[10];
		
		for(cont = 1;cont <= 10;cont++)
		
		{
			printf("\nDigite um numero\n");
			scanf("%d", &sequencia[cont]);
		}

		printf("\nOrdem inversa dos numeros que voce digitou:\n\n");	
			
		for(cont = 10; cont > 0; cont--)
		
		{
			printf("%d\n", sequencia[cont]);
		}
		
		printf("\n\n");		
		system("pause");
	}
