#include <stdio.h>
#include <stdlib.h>

int main()
	{	
		int cont;
		float aumentoPorcento,salario,salarioReajustado,maiorSalario;
		
		printf("De quantos porcento sera o aumento? \n");
		scanf(" %f", &aumentoPorcento);
		
		aumentoPorcento= aumentoPorcento/100;
		
		
		for (cont = 1; cont <= 5 ; cont++)
		{
			printf("\n");
			printf("\nDigite o salario do trabalhador %d \n", cont);
			scanf(" %f", &salario);
			
			salarioReajustado = salario+(salario*aumentoPorcento);
			
			printf("\nApos o reajuste, o novo salario do trabalhador %d eh: %.2f", cont, salarioReajustado);
			
			if (salarioReajustado > maiorSalario)
			{
				maiorSalario = salarioReajustado;
			}
			
			
		}
		
		printf("\nO maior salario reajustado eh: %.2f \n", maiorSalario);
	}


