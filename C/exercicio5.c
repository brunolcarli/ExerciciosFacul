/*
 * exercicio5.c
 * 
 * 5) Construa um algoritmo que leia o preço de um produto, o percentual
 * de desconto e calcule o valor a pagar e o valor de desconto
 * 
 * OBJETIVO DO ALGORITMO: Realizar o calculo de desconto de um produto
 * 
 * ENTRADA: Valor do produto, valor em percentual do desconto.
 * 
 * PROCESSAMENTO: Calcular quanto de desconto sera oferecido em reais e
 * calcular o valor final do produto com o desconto.
 * 
 * SAIDA: Exibir os valores do desconto e do produto com desconto.
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Definição das variáveis necessárias
	float valor_produto, valor_desconto;
	int percentual_desconto;
	
	//Captura dos dados de entrada
	printf("---------------------------- \n");
	printf("Insira o valor do produto \n");
	printf("---------------------------- \n");
	scanf("%f", &valor_produto);
	
	printf("---------------------------- \n");
	printf("Insira o valor do desconto \n");
	printf("---------------------------- \n");
	scanf("%d", &percentual_desconto);
	
	//Processamento
	valor_desconto = (valor_produto * percentual_desconto) / 100;
	
	//Saida
	
	printf("---------------------------- \n");
	printf("         RESULTADO \n");
	printf("---------------------------- \n\n");
	
	printf("---------------------------- \n");
	printf("O valor do desconto será de R$ %.2f \n", valor_desconto);
	printf("---------------------------- \n\n");
	
	printf("---------------------------- \n");
	printf("O valor do produto será de R$ %.2f \n", valor_produto - valor_desconto);
	printf("---------------------------- \n\n");
	
	return 0;
}

