/*
 * exercicio2.c
 * 
 * 2) Formule um algoritmo para ler um número positivo qualquer e
 * apresentar o quadrado e a raiz quadrada deste número
 * 
 * OBJETIVO DO ALGORITMO: Realizar o cálculo de potiencia e raiz 
 * quadrada de um número positivo;
 * 
 * ENTRADA: Um número positivo;
 * 
 * PROCESSAMENTO: Calcular o quadrado e a raiz do número fornecido.
 * 
 * 
 */


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	//Definição das variáveis necessárias
	float numero;
	
	//Captura dos dados de entrada
	printf("---------------------------- \n");
	printf("Insira um número positivo \n");
	printf("---------------------------- \n");
	scanf("%f", &numero);
	
	//Processamento e Saida
	printf("---------------------------- \n");
	printf("A raiz quadrade de %.1f é %.1f. \n",numero, sqrt(numero));
	printf("---------------------------- \n");
	
	printf("---------------------------- \n");
	printf("O quadrado de %.1f é %.1f. \n",numero, pow(numero, 2));
	printf("---------------------------- \n");
	return 0;
}

