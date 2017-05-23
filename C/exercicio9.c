/*
 * exercicio9.c
 * 
 * 9)Formule um algoritmo que leia a matricula e nome de um vendedor,
 * seu salario fixo e total de vendas. 
 * Se o total de vendas é inferior a R$ 1500,00, o percentual de
 * credito comissão é de 2% e se for maior o percentual é de 4%.
 * Apresente o nome do vendedor, matricula, salário fixo e salário total
 * 
 * OBJETIVO DO ALGORITMO: Calcular o salário de um vendedor.
 * ENTRADA: matricula do vendedor, nome do vendedor, valor em vendas
 * do mês, salário fixo, total de vendas.
 * PROCESSAMENTO: Calcular a comissão do vendedor dependendo de seu
 * total de vendas.
 * SAIDA: Exibir o salário do vendedor, sua matricula e seu nome 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Definir variáveis necessárias
	int matricula;
	float valor_vendas, sal_fix, salario;
	char nome[50];
	
	//Captura dos dados de entrada
	printf("------------------------------------ \n");
	printf("Insira o nome do vendedor: \n");
	printf("------------------------------------ \n");
	gets(nome);
	
	printf("------------------------------------ \n");
	printf("Insira o número da matricula \n");
	printf("------------------------------------ \n");
	scanf("%d", &matricula);
	
	printf("------------------------------------ \n");
	printf("Insira o valor do salário fixo \n");
	printf("------------------------------------ \n");
	scanf("%f", &sal_fix);
	
	printf("------------------------------------ \n");
	printf("Insira o valor em vendas deste mês \n");
	printf("------------------------------------ \n");
	scanf("%f", &valor_vendas);
	
	//Processamento
	if (valor_vendas > 1500) {
		salario = sal_fix + ((sal_fix * 4) /100);
		}
	else {
		salario = sal_fix + ((sal_fix * 2) / 100);
		}
	
	//Saida
	printf("------------------------------------ \n");
	printf("Vendedor: %s Matricula n: %d \nSalário: R$ %.2f\n", nome, matricula, salario);
	printf("------------------------------------ \n");
	
	return 0;
}

