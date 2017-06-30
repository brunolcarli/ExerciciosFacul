/*
 * exercicio30.c
 * 
 *30) Formule um algoritmo que leia uma matriz de contas a pagar ao longo
 * do ano, de modo que cada linha representa um mês do ano e cada coluna 
 * uma semana do mês. Com isso, temos uma matriz 12 x 4. Calcule e imprima:
 * total de contas a pagar por mês e o total anual.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	float total_mes, total_ano;
	float matriz[12][4];
	int i, j;
	
	total_ano = 0;
	
	for(i=0;i<12;i++){
		for(j=0;j<4;j++){
			
			printf("Insira as contas para a semana %d do mês %d: ", j+1, i+1);
			scanf("%f", &matriz[i][j]);
			
			}
		}
	
	system("clear");
	
	for(i=0;i<12;i++){
		
		total_mes = matriz[i][0] + matriz[i][1] + matriz[i][2] + matriz[i][3];
		printf("-------------------------------\n");
		printf("Contas do mes %d: %.2f \n",i+1, total_mes);
		printf("-------------------------------\n");
		total_ano += total_mes;
		}
	
	printf("Total de contas do ano: %.2f \n", total_ano);
	
	return 0;
}

