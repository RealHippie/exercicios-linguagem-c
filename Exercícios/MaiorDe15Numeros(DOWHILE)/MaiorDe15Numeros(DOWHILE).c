#include <stdio.h>

int main()
	
	{
		int cont, numero, maiorNumero;
		
		maiorNumero = 0;
		cont = 1;
		
		printf("\n(%d) Digite um numero\n", cont);
		scanf(" %d", &numero);
		
		do 
		{
			cont += 1;
			
			if (numero > maiorNumero)
			
			{
				maiorNumero = numero;
			}
			
			printf("\n(%d) Digite um numero\n", cont);
			scanf(" %d", &numero);
			
		}
		
		while (cont < 15);
		
		printf("\n O maior numero digitado foi: %d", maiorNumero);
	}
