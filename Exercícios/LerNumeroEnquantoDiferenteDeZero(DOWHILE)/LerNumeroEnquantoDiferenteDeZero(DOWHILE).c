#include <stdio.h>

int main()

	{
		int numero;
		
		do
		 
		{
			printf("\nDigite um numero diferente de zero\n");
			scanf(" %d", &numero);
			
			if (numero != 0)
			{	

				
				printf("\nO numero digitado foi: %d\n", numero);	
			}
			
			else
			{
				printf("\n[Voce digitou o numero zero, o programa vai encerrar]");
			}
		}
		
		while (numero != 0);
	}
