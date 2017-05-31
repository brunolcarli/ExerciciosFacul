/*
 * exercicio17.c
 * 
 * 17) Escreva um algoritmo que leia 20 nomes e imprima o primeiro 
 * caractere de cada nome.
 * 
 * OBJETIVO DO ALGORITMO: Ler vinte nomes e escrever o primeiro caractere de cada
 * 
 * ENTRADA: 20 nomes
 * 
 * PROCESSAMENTO: receber os nomes atraves de um loop
 * 
 * SAIDA: Informar apenas o primeiro caractere de cada nome
 * 
 * 
 */


#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	char nomes[20][20];
	int i;
	
	for(i=0; i<20; i++){
			printf("Insira o nome %i\n", i+1);
			scanf("%s", &nomes[i][20]);
			
	}
	
	for(i=0; i<20; i++){
		printf("%c\n", toupper(nomes[i][0]));
		}
	return 0;
}

