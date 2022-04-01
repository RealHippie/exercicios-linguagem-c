#include <stdio.h>
#include <stdlib.h>

int main ()

	{
		int linha, coluna, mat[4][4];
		
		for(linha = 0; linha < 4; linha++)
		{
			for(coluna = 0; coluna  < 4; coluna++)
			{
				if (linha == coluna)
				{
					mat[linha][coluna] = 0;
				}
				
				else 
				{
					printf("\n[LINHA: %d][COLUNA: %d] Digite um numero\n", linha, coluna);
					scanf("%d", &mat[linha][coluna]);
				}
			}
			
		}
		
		// Ilustrando a matriz na tela com os valores adicionados
		
		printf("\n----------------------------------\n");
		printf("\n     MATRIZ\n\n");
		
		for(linha = 0; linha < 4; linha++)
		{
			for(coluna = 0; coluna < 4; coluna++)
			{	
				if(coluna < 3)
				{
				printf("[%d]", mat[linha][coluna]);
				}
				else
				{
				printf("[%d]\n", mat[linha][coluna]);
				}
			}
		}
		
		printf("\n\n");
		system("pause");
	}
	
