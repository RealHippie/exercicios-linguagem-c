#include <stdio.h>
#include <stdlib.h>

int main()
	{
		int cont,numero,maiorNumero;
		maiorNumero=0;
		
		for (cont=1;cont<=15;cont++)
		{	
			printf ("(%d) Digite um numero: ", cont);
			scanf("%d",&numero);
			
			
			if (numero > maiorNumero)
			{
				maiorNumero=numero;
			}
				
		}
		printf ("O maior dos numeros lidos foi: %d\n",maiorNumero); return 0;
	}


