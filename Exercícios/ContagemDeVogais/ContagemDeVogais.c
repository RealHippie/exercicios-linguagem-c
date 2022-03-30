#include <stdio.h>

int main ()
	
	{
		char letra;
		int contA = 0, contE = 0, contI =0, contO = 0, contU = 0;
		
		printf("\n_________________________________________________________________________");
		printf("\n|                                                                       |");
		printf("\n| Digite uma palavra, letra por letra, pressionando o 'enter'           |");
		printf("\n| Ao finalizar a palavra, digite um '.' e pressione o 'enter' novamente |");
		printf("\n|_______________________________________________________________________|\n");
		
		printf("\nDigite a primeira letra:\n");
		
		scanf(" %c", &letra);
		
		while  (letra != '.')
		
		{	
			printf("\nDigite mais uma letra ou finalize:\n");
			
			switch (letra)
			
			{
				
				case 'a':
					contA ++;
						break;
				case 'e':
					contE ++;
						break;
				case 'i':
					contI ++;
						break;
				case 'o':
					contO ++;
						break;
				case 'u':
					contU ++;
						break;
			}
		
			scanf(" %c", &letra);
		}
		
		printf("\nQuantidade de letras A: %d\n", contA);
		printf("\nQuantidade de letras E: %d\n", contE);
		printf("\nQuantidade de letras I: %d\n", contI);
		printf("\nQuantidade de letras O: %d\n", contO);
		printf("\nQuantidade de letras U: %d\n", contU);
	}
