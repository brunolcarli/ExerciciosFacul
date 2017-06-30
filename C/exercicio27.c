/*
 * exercicio27.c
 * 
 * 27) Formule um algoritmo que leia uma matriz 5x5 de números inteiros
 * e imprima os elementos da diagonal principal;
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	
	int matriz[5][5];
	int i, j;
	
	for(i=0;i<=5;i++){
		for(j=0;j<=5;j++){
			
			printf("Insira o valor para a linha %d da coluna %d: ", i, j);
			scanf("%d",&matriz[i][j]);
			
			}
		}
	
	printf("-----------------\n");
	printf("%d x x x x\n",matriz[0][0]);
	printf("x %d x x x\n",matriz[1][1]);
	printf("x x %d x x\n",matriz[2][2]);
	printf("x x x %d x\n",matriz[3][3]);
	printf("x x x x %d\n",matriz[4][4]);
	printf("-----------------\n");
	
	return 0;
}

