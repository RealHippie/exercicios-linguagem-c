#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()

	{	
		int cont, quantidadeLetras;
		
		printf("\nQuantas letras tem seu nome?\n");
		scanf(" %d", &quantidadeLetras);
		
		char nome[quantidadeLetras];
		
		printf("\nDigite seu nome\n");
		scanf(" %s", nome);
		
		printf("\nSeu nome eh %s\n", nome);
		printf("Seu nome ao contrario eh ");
		
		
		for(cont = quantidadeLetras;cont >= 0;cont--)
		{
			printf("%c", nome[cont]);
		}
		
		printf("\n\n");		
		system("pause");
		
	}
