#include <stdio.h>
#include <stdlib.h>

int main ()

	{
		int pares = 0, impares = 0, linha, coluna, mat[3][4];
		
		for(linha = 0; linha < 3; linha++)
		{
			for(coluna = 0; coluna < 4; coluna++)
			{
				printf("\n[LINHA: %d][COLUNA: %d] Digite um numero\n", linha, coluna);
				scanf("%d", &mat[linha][coluna]);
				
				if (mat[linha][coluna]%2 == 0)
				{
					pares++;
				}
				
				else
				{
					impares++;
				}
			}
		}
		
		printf("\nA quantidade de numeros pares foi: %d", pares);
		printf("\nA quantidade de numeros impares foi: %d", impares);
		
		printf("\n\n");
		system("pause");
		
	}
