/*
 * exercicio15.c
 * 
 * 15)Elabore um algoritmo que receba o salário de um funcionário e o 
 * código do cargo e apresente o cargo, o valor do aumento e o novo 
 * salário. A tabela abaixo apresenta os cargos:
 * 
 * CODIGO   |   CARGO       |   PERCENTUAL DO AUMENTO   |
 *   1	 	| Serv. Gerais  |       50%                 |
 *   2      | Vigia         |       30%                 |
 *   3      | Recepcionista |       25%                 |
 *   4      | Vendedor      |       15%                 |
 * 
 * 
 * 
 * OBJETIVO DO ALGORITMO: Calcular o aumento do saleario de acordo com
 * o cargo do funcionáro;
 * 
 * ENTRADA: Codigo do cargo, salário do funcionário;
 * 
 * PROCESSAMENTO: Calcular novo salário e valor do aumento;
 * 
 * SAÍDA: Mostrar código do cargo, nome do cargo, valor do novo salário
 * com o aumento e o valor do aumento.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//variaveis
	int codigo;
	float salario, novo_salario, aumento;
	
	//Entrada
	printf("------------------------------------ \n");
	printf("Insira seu salario:  \n");
	printf("------------------------------------ \n");
	scanf("%f", &salario);
	
	
	printf("------------------------------------ \n");
	printf("Insira o codigo do seu cargo:  \n");
	printf("[1] Servicos Gerais \n");
	printf("[2] Vigia\n");
	printf("[3] Recepcionista\n");
	printf("[4] Vendedor\n");
	printf("------------------------------------ \n");
	scanf("%d", &codigo);
	
	switch(codigo) {
		case 1:
			aumento = salario * 0.50;
			novo_salario = salario + aumento;
			printf("------------------------------------ \n");
			printf("Cargo: Serv. Gerais - Cod: 1\n");
			printf("Salario: R$ %.2f - Aumento: R$ %.2f\n", salario, aumento);
			printf("Salario com aumento: R$ %.2f \n", novo_salario);
			printf("------------------------------------ \n");
			break;
		case 2:
			aumento = salario * 0.30;
			novo_salario = salario + aumento;
			printf("------------------------------------ \n");
			printf("Cargo: Vigia - Cod: 2\n");
			printf("Salario: R$ %.2f - Aumento: R$ %.2f\n", salario, aumento);
			printf("Salario com aumento: R$ %.2f \n", novo_salario);
			printf("------------------------------------ \n");
			break;
		case 3:
			aumento = salario * 0.25;
			novo_salario = salario + aumento;
			printf("------------------------------------ \n");
			printf("Cargo: Recepcionista - Cod: 3\n");
			printf("Salario: R$ %.2f - Aumento: R$ %.2f\n", salario, aumento);
			printf("Salario com aumento: R$ %.2f \n", novo_salario);
			printf("------------------------------------ \n");
			break;
		case 4:
			aumento = salario * 0.15;
			novo_salario = salario + aumento;
			printf("------------------------------------ \n");
			printf("Cargo: Vendedor - Cod: 4 \n");
			printf("Salario: R$ %.2f - Aumento: R$ %.2f\n", salario, aumento);
			printf("Salario com aumento: R$ %.2f \n", novo_salario);
			printf("------------------------------------ \n");
			break;
		default:
			printf("------------------------------------ \n");
			printf("Digito Invalido\n");
			printf("------------------------------------ \n");
			break;
	};

	
	return 0;
}

