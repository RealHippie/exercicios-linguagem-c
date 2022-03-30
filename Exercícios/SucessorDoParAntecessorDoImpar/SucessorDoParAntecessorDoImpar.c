#include <stdio.h>

int main()

	{	
		// O objetivo é mostrar infinitamente o sucessor do número caso ele seja par ou o antecessor caso ele seja impar
		// porém o programa para se o numero digitado for 0 ou 9.
		
		int numero;
		
		do
		 
		{
			printf("\nDigite um numero, que nao seja '0' ou '9'\n");
			scanf(" %d", &numero);
			
			if (numero == 0 || numero == 9)
			
			{
				printf("\nVoce digitou o numero %d, por isso o programa sera encerrado", numero);
			}
			
			else
			 
			{
				if ( numero%2 == 0)
				
				{	
					printf("\nO sucessor do numero digitado eh %d\n", numero+1);
				}
				
				else 
				
				{
					printf("\nO antecessor do numero digitado eh %d\n", numero-1);
				}
			}
		}
		
		while (numero != 0 && numero != 9);
	}
