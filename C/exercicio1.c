/*
 * exercicio1.c
 * 
 * 1)Elabore um algoritmo que leia, calcule e escreva a média aritmética
 * entre quatro números
 * 
 * OBJETIVO DO ALGORITMO: Calcular a média entre quatro números;
 * ENTRADA: Quatro números reais;
 * PROCESSAMENTO: Calcular a média entre os números fornecidos;
 * SAIDA: Exibir o resultado do cálculo.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//definição das variaveis
	float a, b, c, d, media;
	
	
	//Captura dos dados de entrada
	
	printf("---------------------------- \n");
	printf("Insira o primeiro valor \n");
	printf("---------------------------- \n");
	scanf("%f", &a);
	
	printf("---------------------------- \n");
	printf("Insira o segundo valor \n");
	printf("---------------------------- \n");
	scanf("%f", &b);
	
	printf("Insira o terceiro valor \n");
	scanf("%f", &c);
	
	printf("---------------------------- \n");
	printf("Insira o quarto valor \n");
	printf("---------------------------- \n");
	scanf("%f", &d);
	
	//Processamento
	media = (a + b + c + d) / 4;
	
	//Saida
	printf("---------------------------- \n");
	printf("        RESULTADO \n");
	printf("---------------------------- \n");
	printf("A media dos valores e: %.1f \n", media);
	printf("---------------------------- \n");
	
	return 0;
}

