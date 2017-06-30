/*
 * exercicio29.c
 * 
 * 29) Escreva um algoritmo que receba duas matrizes inteiras de ordem 5
 * e imprima a soma e a diferença entre elas.
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	
	int matrizA[5][5];
	int matrizB[5][5];
	
	int i, j;
	
	//Ler matriz A
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			
			printf("Insira o valor da posição[%d][%d] da matriz A: ", i,j);
			scanf("%d", &matrizA[i][j]);
			}
		}
	
	//Ler matriz B
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			
			printf("Insira o valor da posição[%d][%d] da matriz A: ", i,j);
			scanf("%d", &matrizB[i][j]);
			}
		}
	
	system("clear");
	
	//Soma das matrizes
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			
			printf("A[%d][%d] + B[%d][%d] = %d \n", i, j, i, j, matrizA[i][j] + matrizB[i][j]);
			}
		}
		
	printf("--------------------------------------\n");
	
	//Diferença das matrizes
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			
			printf("A[%d][%d] - B[%d][%d] = %d \n", i, j, i, j, matrizA[i][j] - matrizB[i][j]);
			}
		}
		
	printf("--------------------------------------\n");
	return 0;
}

