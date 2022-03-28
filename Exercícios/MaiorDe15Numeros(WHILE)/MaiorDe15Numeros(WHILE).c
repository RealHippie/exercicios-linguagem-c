#include <stdio.h>

int main() 

	{
		int cont, numero, maiorNumero;
		
		cont = 1;
		maiorNumero = 0;
		
		while(cont <= 15)
		{
			cont += 1;
			printf("Digite um numero: \n");
			scanf("%d", &numero);
			
			if (numero > maiorNumero)
			
			{
				maiorNumero = numero;
			}
		}
		
		printf("O maior numero digitado foi: %d", maiorNumero);
	}
	
