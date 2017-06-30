/*
 * exercicio25.c
 * 
 * 25) Escreva um algoritmo que leia dois vetores A e B com 20 números
 * inteiros. Efetue a soma dos dois vetores em um vetor C e imprima o 
 * vetor C em ordem crescente.
 * 
 */


#include <stdio.h>




int main()
{
	
	int i, j, troca;
	int a[20];
	int b[20];
	int c[40];
	
	printf("\n--------------------------------- \n");
	//le o vetor A
	for(i = 0; i<=20; i++){
		printf("Vetor A \n");
		printf("Insira um numero para a posição %d: ", i);
		scanf("%d", &a[i]);
		}
	printf("\n--------------------------------- \n");
	//le o vetor B	
	for(i = 0; i<=20; i++){
	printf("Vetor B \n");
	printf("Insira um numero para a posição %d: ", i);
	scanf("%d", &b[i]);
		}
	
	printf("\n--------------------------------- \n");
	//monta o vetor C	
	for(i = 0; i<=40; i++){
		if (i <= 20){
			c[i] = a[i];
			}
		else{
			c[i] = b[i-20];
			}
		}
	//organiza o vetor C
	for(i=0; i<40; i++){
		for(j=i+1;j<=40;j++){
			
			if(c[i] > c[j]){
				troca = c[i];
				c[i] = c[j];
				c[j] = troca;
				}
			
			}
		}
	
	//exibe o vetor C	
	for(i=0;i<=40;i++){
		printf("Vetor C posicao %d: %d \n", i, c[i]);
		}
	printf("\n--------------------------------- \n");
	return 0;
}

