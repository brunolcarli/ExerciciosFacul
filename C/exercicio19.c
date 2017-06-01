/*
 * exercicio19.c
 * 
 * 
 * 19) escreva um algoritmo que leia a quantidade de números que se deseja 
 * digitar. Em seguida, leia esses números e encontre o maior e o menor.
 * 
 * OBJETIVO DO ALGORITMO: Receber qualquer quantidade de numeros e identificar 
 * o menor e o maior dentre eles;
 * 
 * ENTRADA: um numero inteiro qualquer, quantidade de numeros a ser inserido;
 * 
 * PROCESSAMENTO: Receber números, verificar se o numero inserido e maior
 * ou menor que os inseridos anteriormente;
 * 
 * SAIDA: Mostrar o maior e o menor número dentre os inseridos;
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	
	int quant, menor, maior, num, i;
	
	
	printf("---------------------------------\n");
	printf("Quantos números você irá inserir? \n");
	printf("---------------------------------\n");
	scanf("%d", &quant);
	system("clear"); //trocar a string para "cls" caso seja executado em rWindows
	
	i = 0;
	
	while(i < quant){
		printf("---------------------------------\n");
		printf("      Insira um número: \n");
		printf("---------------------------------\n");
		scanf("%d", &num);
	
		
		if(num >= maior){
			maior = num;
		}
		else{
			menor = num;
		}
		system("clear"); //cls no windows
		i += 1;
	}
	printf("---------------------------------\n");
	printf("Você inseriu %d números.\nO maior foi %d \nO menor foi %d\n", quant, maior, menor);
	printf("---------------------------------\n");
	
	return 0;
}

