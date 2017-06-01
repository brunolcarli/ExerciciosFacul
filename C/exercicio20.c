/*
 * exercicio20.c
 * 
 * 20)Construa um algoritmo que leia números inteiros até que seja 
 * digitado o 0. Calcule e escreva o número de valores lidos, a média
 * aritmética, a quantidade d enúmeros pares e impares.
 * 
 * OBJETIVO DO ALGORITMO: Receber uma quantidade de números e informar
 * a quantidade de números, média, quantidade de números pares e ímpares.
 * 
 * ENTRADA: números inteiros;
 * 
 * PROCESSAMENTO: Receber números até que seja inserio 0. Calcular média,
 * identificar pares e ímpares;
 * 
 * SAÍDA: Mostrar na telaa quantidade de números inseridos pelo usuário, 
 * mostrar a média destes números, mostrar quantos eram pares e quantos 
 * eram ímpares.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	
	int par, impar, quant, media, num;
	par = 0;
	impar = 0;
	quant = 0;
	media = 0;
	
	do{
		printf("................................\n");
		printf("Insira um número qualquer ou\nInsira 0 para sair\n");
		printf("................................\n");
		scanf("%d", &num);
		
		system("clear");
		
		media += num;
		quant += 1;
		
		if((num % 2) == 0){
			par += 1;
		}
		else{
			impar += 1;
		}
		
	}while(num != 0);
	
	media = media/quant;
	
	printf("................................\n");
	printf("Foram inseridos %d números\n", quant);
	if (par > 1 || par < 1){
		printf("%d pares\n", par);
	}else{
		printf("%d par\n", par);
	}
	if(impar > 1 || impar < 1){
		printf("%d ímpares\n", impar);
	}else{
		printf("%d ímpar\n", impar);
	}
	printf("A média destes números é: %d\n", media);
	printf("................................\n");
	
	return 0;
}

