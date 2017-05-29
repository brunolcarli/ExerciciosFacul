/*
 * exercicio3.c
 * 
 * 3)Elabore um algoritmo que recebe um número inteiro e apresente 
 * o antecessor do número, o número e o sucessor do número.
 * 
 * OBJETIVO DO ALGORITMO: Receber um número e mostrar seu sucessor e o
 * seu antecessor;
 * 
 * ENTRADA: um número inteiro;
 * 
 * PROCESSAMENTO: Calcular o número menos um e o número mais um;
 * 
 * SAIDA: Exibir o número, seu antecessor e seu sucessor.
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Definição das variáveis necessárias
	int numero;
	
	//Captura dos dados de entrada
	printf("---------------------------- \n");
	printf("Insira um número \n");
	printf("---------------------------- \n");
	scanf("%d", &numero);
	
	//Processamento e saida
	printf("---------------------------- \n");
	printf("O numero é %d \n", numero);
	printf("---------------------------- \n");
	
	printf("---------------------------- \n");
	printf("O antecessor de %d é %d \n", numero, numero - 1);
	printf("---------------------------- \n");
	
	printf("---------------------------- \n");
	printf("O sucessor de %d é %d \n", numero, numero + 1);
	printf("---------------------------- \n");
	
	return 0;
}

