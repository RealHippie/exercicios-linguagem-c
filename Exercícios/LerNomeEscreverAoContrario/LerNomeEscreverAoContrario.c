#include <stdio.h>
#include <stdlib.h>

int main ()

	{
		int contLer, contEscrever, quantidadeLetras;
		
		printf("\nQuantas letras tem o seu nome?\n");
		scanf("%d", &quantidadeLetras);
		
		fflush(stdin);
		
		char nome[quantidadeLetras+1];
		
		printf("\ndigite a primeira letra do seu nome\n");
		scanf(" %c", &nome[0]);
		
		fflush(stdin);
		
		for (contLer = 1; contLer < quantidadeLetras; contLer++)
		{
			printf("\ndigite a proxima letra do seu nome\n");
			scanf(" %c", &nome[contLer]);
			getchar();
		}
		
		for (contEscrever = quantidadeLetras-1; contEscrever >= 0; contEscrever--)
		{
			printf("%c", nome[contEscrever]);
		}
		
		printf("\n\n");		
		system("pause");
	}
