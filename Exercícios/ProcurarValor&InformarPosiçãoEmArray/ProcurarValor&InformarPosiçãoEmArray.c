#include <stdio.h>
#include <stdlib.h>

int main ()

	{
		int cont1, cont2, numero, armazenamento[20];
		
		printf("\n-----------------------------------------------------------\n");	
		printf("\nVoce precisa digitar uma lista de 20 numeros\n");
		printf("\n-----------------------------------------------------------\n");
		
		for(cont1 = 0; cont1 < 20; cont1++)
		{
			printf("\n(%d) Digite um numero\n", cont1+1);
			scanf("%d", &armazenamento[cont1]);			
		}
		
		printf("\n-----------------------------------------------------------\n");
		printf("\nAgora digite 10 numeros para tentar encontra-los na lista\n");
		printf("\n-----------------------------------------------------------\n");
		
		for(cont1 = 1; cont1 <= 10; cont1++)
		{
			printf("\n(%d) Digite um numero\n", cont1);
			scanf(" %d", &numero);
			
			int achou = 0;
			
			for (cont2 = 0; cont2 < 20; cont2++)
			{
				if (numero == (armazenamento[cont2]))
				{
					printf("\n----> O numero %d se encontra na posicao %d da lista\n", numero, cont2);
					achou = 1;
				}
				
			}
			
			if(achou == 0)
			{
				printf("\n----> O numero %d nao se encontra na lista\n", numero);
			}
		}
		
		printf("\n\n");
		system("pause");
		
		
	}
