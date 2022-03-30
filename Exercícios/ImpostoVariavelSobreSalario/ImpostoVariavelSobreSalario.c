#include <stdio.h>

int main ()

	{	
		int cont;
		float salarioBruto, imposto, salarioLiquido, totalBruto = 0, totalImposto = 0, totalLiquido = 0;
		
		for  (cont = 1; cont <= 10; cont ++)
		
		{				
			printf("\nDigite o salario bruto do trabalhador (%d)\n", cont);
			scanf(" %f", &salarioBruto);
			
			if (salarioBruto <= 999)
			
			{
				imposto = salarioBruto*0.10;
			}
			
			else
				if ((salarioBruto > 999) && (salarioBruto <= 1999))	
						
				{
					imposto = salarioBruto*0.15;
				}
			
			else
				if ((salarioBruto > 1999) && (salarioBruto <= 9999))
			
				{
					imposto = salarioBruto*0.20;
				}
			
			else
				if ((salarioBruto > 9999) && (salarioBruto <=  99999))
			
				{
					imposto = salarioBruto*0.25;
				}
			
			else 
			
			{
				imposto = salarioBruto*0.30;
			}
			
			salarioLiquido = salarioBruto - imposto;
			
			totalBruto = totalBruto+salarioBruto;
			totalLiquido = totalLiquido+salarioLiquido;
			totalImposto = totalImposto+imposto;
			
			printf("\nO salario liquido do trabalhador (%d) eh %.2f\n", cont, salarioLiquido);
			
		}
		
		printf("\n--------------------------------\n");
		printf("\nTotal salario bruto: %.2f\n", totalBruto);
		printf("\nTotal salario liquidoo: %.2f\n", totalLiquido);
		printf("\nTotal impostos: %.2f\n", totalImposto);
		
	}
