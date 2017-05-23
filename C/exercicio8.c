/*
 * exercicio8.c
 * 
 * 8)Escreva um algoritmo que calcule a área e o perímetro de um
 * círculo.
 * 
 * OBJETIVO DO ALGORITMO: Calcular a área e perímetro de um círculo.
 * ENTRADA: Valor do raio.
 * PROCESSAMENTO: Calcular a área, tal que A = Pi x (raio ao quadrado)
 * e calcular o perímetro, tal que P = 2 x Pi x raio
 * SAIDA: Exibir o resultado do cálculo.
 * 
 */


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	//Definição das variáveis necessárias
	float raio;
	
	//Captura dos dados de entrada
	printf("------------------------------------ \n");
	printf("  INSIRA OS DADOS CORRETAMENTE PARA \n");
	printf("   CALCULAR A AREA E PERIMETRO DE  \n");
	printf("           UM CIRCULO \n");
	printf("------------------------------------ \n\n");
	
	printf("------------------------------------ \n");
	printf("    Digite o valor do raio \n");
	printf("------------------------------------ \n");
	scanf("%f", &raio);
	
	//Processamento e saida
	printf("------------------------------------ \n");
	printf("             RESULTADO \n");
	printf("------------------------------------ \n\n");
	
	printf("------------------------------------ \n");
	printf("A área deste círculo é: %.2f \n", M_PI * pow(raio, 2));
	printf("------------------------------------ \n\n");
	
	printf("------------------------------------ \n");
	printf("O perímetro deste círculo é: %.2f \n", 2 * M_PI * raio);
	printf("------------------------------------ \n");
	
	return 0;
}

