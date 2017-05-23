/*
 * exercicio7.c
 * 
 * 7) Elabore um algoritmo que leia o valor da hora aula, número de
 * aulas dadas no mês e o percentual de desconto do INSS. Mostre o 
 * salário líquido e o bruto.
 * 
 * OBJETIVO DO ALGORITMO: Calcular o salário de um professor.
 * ENTRADA: Número de aulas dadas, valor da hora aula e percentual
 * de desconto do INSS.
 * PROCESSAMENTO: Calcular o desconto do inss, salário líquido
 * e o salário bruto.
 * SAIDA: Exibir o salário liquido e bruto.
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Definição das variáveis necessárias
	int aulas_dadas, inss;
	float hora_aula, sal_liq, sal_brut;
	
	//Captura dos dados de entrada
	printf("------------------------------------ \n");
	printf("    INSIRA OS DADOS CORRETAMENTE \n");
	printf("------------------------------------ \n");
	
	printf("------------------------------------- \n");
	printf("Insira o número de aulas dadas no mês \n");
	printf("------------------------------------- \n");
	scanf("%d", &aulas_dadas);
	
	printf("------------------------------------- \n");
	printf("Insira o valor da hora aula \n");
	printf("-------------------------------------\n");
	scanf("%f", &hora_aula);
	
	printf("------------------------------------- \n");
	printf("Insira o percentual de desvconto do INSS \n");
	printf("------------------------------------- \n");
	scanf("%d", &inss);
	
	//Processamento
	sal_brut = aulas_dadas * hora_aula;
	sal_liq = sal_brut - ((sal_brut * inss) / 100);
	
	
	//Saida
	printf("------------------------------------ \n");
	printf("              EXTRATO \n");
	printf("------------------------------------ \n\n");
	
	printf("------------------------------------ \n");
	printf("O Salário Bruto é de R$ %.2f \n", sal_brut);
	printf("------------------------------------ \n");
	
	printf("------------------------------------ \n");
	printf("O Salário Líquido é de R$ %.2f \n", sal_liq);
	printf("------------------------------------ \n");
	
	return 0;
}

