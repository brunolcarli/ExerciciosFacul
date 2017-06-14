/*
 * exercicio23.c
 * 
 * 
 * 23)Escreva um algoritmo que leia varios nomes até que seja digitado o
 * valor FIM. Imprima o primeiro caractere de cada nome
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(int argc, char **argv)
{
	
	char nome[50];
	int i = 0;
	int j = 0;
	do{
		printf("Insira um nome\nEscreva FIM para sair\n");
		gets(nome);
		printf("%c \n", nome[0]);
		getchar();
		system("clear");
		
		for(j=0;j<3;j++){
			nome[j] = toupper(nome[j]);
			}
			
		
		if(strcmp(nome, "FIM") == 0){
			i = 1;
			}
			
			
	}while(!i);
	
	return 0;
}

