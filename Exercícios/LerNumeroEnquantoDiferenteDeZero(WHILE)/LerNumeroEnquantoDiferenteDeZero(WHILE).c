#include <stdio.h>

int main() 

	{
		int numero;
		
		printf("Digite um numero:\n");
		scanf("%d", &numero);
		
		while(numero != 0)
		{
			printf("o numero lido foi: %d\n\n", numero);
			printf("Digite um numero: \n");
			scanf("%d", &numero);
		}
	}
	
