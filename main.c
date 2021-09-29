#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	

	float valueA = 0, valueB = 0, resul=0;
	int cont = 0;
	
	do
	{
			
		
		printf("Calculadora");
		printf("\n");
		printf("\nSelecione uma das operações abaixo");
		printf("\n1-Soma");
		printf("\n2-Subtração");
		printf("\n3-Multiplicação");
		printf("\n4-Divisão");
		printf("\n5-Sair");
		printf("\n");
		scanf("%d", &cont);
		
		
		
		switch(cont)
		{
			
			case 1 :
			printf ("\nInforme o valor A");
			printf("\n");
			scanf("%f", &valueA);
			printf("\nInforme o Valor B");
			printf("\n");
			scanf("%f", &valueB);
			resul = valueA + valueB;
			break;
			
			case 2 :
			printf ("\nInforme o valor A");
			printf("\n");
			scanf("%f", &valueA);
			printf("\nInforme o Valor B");
			printf("\n");
			scanf("%f", &valueB);
			resul = valueA - valueB;
			break;
			
			case 3 :
			printf ("\nInforme o valor A");
			printf("\n");
			scanf("%f", &valueA);
			printf("\nInforme o Valor B");
			printf("\n");
			scanf("%f", &valueB);
			resul = valueA * valueB;
			break;
			
			case 4 :
			printf ("\nInforme o valor A");
			printf("\n");
			scanf("%f", &valueA);
			printf("\nInforme o Valor B");
			printf("\n");
			scanf("%f", &valueB);
			resul = valueA/valueB;
			break;
			
			case 5 :
			printf("Saindo...");
			break;
			
			default :
			printf("\nInsira um valor valido");
			cont = 0;
			break;
			
		}
		
		if (cont < 5 && cont > 0)
		{
			
			printf("\nResultado: %f", resul);
			printf("\n");
			printf("\n0 - Voltar ao menu");
			printf("\n1 - Sair");
			printf("\n");
			scanf("%d", &cont);
			
			if(cont == 1){
				
				cont = 5;
				
			}
			
		}
		
		
	}while (cont >= 0 && cont <= 4);
	
	return 0;
}
