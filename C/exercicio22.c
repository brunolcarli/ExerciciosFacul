/*
 * exercicio22.c
 * 
 * 22) Construa um algoritmo que leia números inteiros até que seja
 * inserido um valor negativo. Ao final, informe a média dos números,
 * o menor e o maior valor.
 * 
 * OBJETIVO: Ler diversos números e informar a média, o menor e o maior valor;
 * ENTRADA: Vários números inteiros;
 * PROCESSAMENTO: Receber números até que um deles seja negativo, verificar
 * o maior, o menor e a média.
 * SAÍDA: Informar a média, o menor e o maior valor inserido.
 * 
 * 
 */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	
	int entrada, soma, loop, cont;
	int menormaior[2];
	
	loop = 0;
	cont = 0;
	
	menormaior[1] = 0;
	
	while(!loop){
		printf("Insira um número igual ou maior que zero \n");
		printf("Insira um número negativo para sair \n");
		scanf("%d", &entrada);
		
		if(entrada >= 0){
			soma = soma + entrada;
			cont += 1;
			
			if(entrada < menormaior[0]){
				menormaior[0] = entrada;
				}
			if(entrada > menormaior[1]){
				menormaior[1] = entrada;
				}
			}
		else{
			loop = 1;
			}
			
			system("clear");
		}
	
	printf("A media é: %d \n",soma / cont);
	printf("O maior digito inserido foi: %d \n", menormaior[1]);
	printf("O menor digito inserido foi: %d \n", menormaior[0]);
	
	return 0;
}

