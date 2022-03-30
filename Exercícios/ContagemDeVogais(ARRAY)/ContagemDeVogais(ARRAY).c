#include <stdio.h>
#include <stdlib.h>

int main ()

	{
		char letra;
		int vogais[5] = {0,0,0,0,0};
		
		printf("\n__________________________________________________________________________________");
		printf("\n|                                                                                |");
		printf("\n| Digite uma palavra ou frase, letra por letra, pressionando o 'enter'           |");
		printf("\n| Ao finalizar a palavra ou frase, digite um '.' e pressione o 'enter' novamente |");
		printf("\n|________________________________________________________________________________|\n");
		
		printf("\nDigite a primeira letra\n");
		scanf("%c", &letra);
		
		while (letra != '.')
		{
			switch (letra)
			{
				case 'a':
					vogais[0] ++;
						break;
				case 'e':
					vogais[1]++;
						break;
				case 'i':
					vogais[2]++;
						break;
				case 'o':
					vogais[3]++;
						break;
				case 'u':
					vogais[4]++;
						break;
					
			}
			
			printf("\nDigite a proxima letra\n");
			scanf(" %c", &letra);
		}
		
		printf("\nA quantidade de vogais 'a' foram: %d", vogais[0]);
		printf("\nA quantidade de vogais 'e' foram: %d", vogais[1]);
		printf("\nA quantidade de vogais 'i' foram: %d", vogais[2]);
		printf("\nA quantidade de vogais 'o' foram: %d", vogais[3]);
		printf("\nA quantidade de vogais 'u' foram: %d", vogais[4]);
		
		printf("\n\n");
		system("pause");
	}
