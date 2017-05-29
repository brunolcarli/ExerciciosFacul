/*
 * exercicio6.c
 * 
 * 6)Elabore um algoritmo que leia a quantidade de livros que uma 
 * locadora de livros possui e o valor do aluguel por livro.
 * Apresente as seguintes informações:
 * 	a)Faturamento mensal se todos os livros forem locados;
 * 	b)faturamento anual caso 20% dos livros não forem locados todo mês
 * 
 * OBJETIVO DO ALGORITMO: Apresentar o faturamento de uma locadora de 
 * livros;
 * 
 * ENTRADA: Valor do alugues dos livros da locadore, quantidade de 
 * livros que a locadora possui;
 * 
 * PROCESSAMENTO: Calcular o valor do faturamento mensal caso todos os
 * livros sejam lcoados e calcular o faturamento anual caso 80% dos
 * livros sejam locados mensalmente no ano.
 * 
 * SAIDA: Exibir os faturamentos mensal e anual.
 *
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Definição das variáveis necessárias
	float valor_aluguel, fat_mes, fat_ano;
	int numero_livros;
	
	//Captura das variáveis de entrada
	printf("------------------------------------ \n");
	printf("Insira o valor do aluguel do livro \n");
	printf("------------------------------------ \n");
	scanf("%f", &valor_aluguel);
	
	printf("------------------------------------ \n");
	printf("Quantos livros a locadora possui? \n");
	printf("------------------------------------ \n");
	scanf("%d", &numero_livros);
	
	//Processament
	
	fat_mes = (numero_livros * valor_aluguel) * 30;
	fat_ano = (((numero_livros) * 0.8) * valor_aluguel) * 12;
	
	//Saida
	printf("------------------------------------ \n");
	printf("             RESULTADO \n");
	printf("------------------------------------ \n");
	
	printf("------------------------------------ \n");
	printf("Caso todos os livros sejam locados em \num mês o faturamento sera de \nR$ %.2f\n", fat_mes);
	printf("------------------------------------ \n\n");
	
	printf("------------------------------------ \n");
	printf("Considerando a locação parcial dos\nlivros, o faturamento anual será de \nR$ %.2f \n", fat_ano);
	printf("------------------------------------ \n");
	
	return 0;
}

