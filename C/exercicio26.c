/*
 * exercicio26.c
 * 
 * 26) Construa um algoritmo que leia o preço de compra e venda de 30 produtos e
 * imprima o número de mercadorias que apresenta lucro < 15% e quantas
 * apresentam lucro > 30%.
 * 
 * 
 */


#include <stdio.h>

int main(){
	
	float compra[30], venda[30], lucro;
	int i, min, max;
	int total1 = 0;
	int total2 = 0;
	
	
	for(i=0;i<=30;i++){
		
		printf("\n------------------------------------------------------------------ \n");
		printf("Insira o valor de compra do produto %d: ", i+1);
		scanf("%f", &compra[i]);
		printf("Insira o valor de venda do produto %d: ", i+1);
		scanf("%f", &venda[i]);
		
		}
	
	//calcula o lucro
	for(i=0;i<=30;i++){
		
		min = compra[i] * 0.15;
		max = compra[i] * 0.30;
		lucro = venda[i] - compra[i];
		
		if(lucro < min){
			total1 += 1;
			}
		else{
			if(lucro > max){
				total2 += 1;
				}
			}
		}
	
	printf("\n------------------------------------------------------------------ \n");
	printf("O número de produtos com lucro abaixo de 15 porcento é de %d \n", total1);
	printf("O número de produtos com lucro acima de 30 porcento é de %d \n", total2);
	printf("\n------------------------------------------------------------------ \n");
	return 0;
}

