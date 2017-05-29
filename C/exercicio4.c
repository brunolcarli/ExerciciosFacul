/*
 * exercicio4.c
 * 
 * 4)Escreva  um algoritmo que calcule a area de um triângulo.
 * 
 * OBJETIVO DO ALGORITMO: Calcular a área de um triângulo.
 * 
 * ENTRADA: Valores da Base e da Altura.
 * 
 * PROCESSAMENTO: Calcular a base x altura e dividir por 2.
 * 
 * SAIDA: Exibir o resultado do cálculo.
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Definição das variáveis necessearias
	float base, altura;
	
	//Captura dos dados de entrada
	
	printf("---------------------------- \n");
	printf("PROGRAMA QUE CALCULA A AREA \n");
	printf("    DE UM TRIANGULO \n");
	printf("---------------------------- \n\n");
	
	printf("---------------------------- \n");
	printf("Insira o valor da base \n");
	printf("---------------------------- \n");
	scanf("%f", &base);
	
	printf("---------------------------- \n");
	printf("Insira o valor da altura \n");
	printf("---------------------------- \n");
	scanf("%f", &altura);
	
	//Processamento e saida
	
	printf("---------------------------- \n");
	printf("        RESULTADO\n");
	printf("---------------------------- \n\n");
	
	printf("---------------------------- \n");
	printf("A área do triângule é de: %.2f \n", (base * altura) / 2);
	printf("---------------------------- \n");
	
	return 0;
}

