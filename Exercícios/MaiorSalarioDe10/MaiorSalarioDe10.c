#include <stdio.h>
#include <stdlib.h>

int main()
	{	
		int cont;
		float salario,maiorSalario,somaSalarial,mediaSalarial;
		
		maiorSalario =0;
		somaSalarial =0;
		
		for (cont=1;cont<=10;cont++)
		{	
			printf ("Digite o salario: \n");
			scanf("%d", &salario);
			
			somaSalarial = somaSalarial + salario;
			
			if (salario > maiorSalario)
			{
				maiorSalario = salario;
			}
			
				
		}
		
		mediaSalarial = somaSalarial/10;
		
		printf ("O maior salario eh = %d\n", maiorSalario); 
		printf ("a media salaria eh = %d\n", mediaSalarial); 
		return 0;
	}


