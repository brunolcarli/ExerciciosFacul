/*
 * exercicio12.c
 * 
 * 12)Um insituição financeira concederá crédito a uma taxa de juros de 
 * 3% aos seus clientes de acordo com o saldo médio do período. Elabore 
 * um algoritmo que calcule o valor que pode ser concedido ao cliente e
 * impríma-o. Os clientes com saldo inferior a R$ 500,00 não tem direito 
 * à crédito. Já os clientes com saldo médio entre R$ 501,00 e R$ 1000,00
 * podem obter créditos de até 35% em relação ao saldo médio. Clientes 
 * com saldo entre R$1001,00 a R$ 3000,00 podem obter créditos de 50% em
 * relação ao saldo médio. E para aqueles clientes com saldo superior a
 * R$ 3001,00 pode serconcedido crédito de 75% do valor do saldo.
 * 
 * OBJETIVO DO ALGORITMO: Calcular e fornecer o valor de crédito fornecido
 * para os clientes de acordo com sua média salarial.
 * 
 * ENTRADA: Valor do salário
 * 
 * PROCESSAMENTO: Calcular a quantidade de crédito cedida ao cliente
 * 
 * SAÍDA: Mostrar o valor disponibilizado de crédito na tela
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float salario;
	
	//ENTRADA
	printf("------------------------------------ \n");
	printf("Insira o valor do seu salario \n");
	printf("------------------------------------ \n");
	scanf("%f", &salario);
	
	//PROCESSAMENTO E SAIDA
	if(salario <= 500){
		printf("------------------------------------ \n");
		printf("Infelizmente voce nao tem direito  \n");
		printf("a valores em credito \n");
		printf("------------------------------------ \n");
	}
	else if(salario >= 501 && salario <=1000){
		
		printf("------------------------------------ \n");
		printf("Voce possui R$ %.2f em credito \n", (salario * 0.35) - (salario * 0.3));
		printf("------------------------------------ \n");
	}
	else if(salario >= 1001 && salario <= 3000){
		
		printf("------------------------------------ \n");
		printf("Voce possui R$ %.2f em credito \n", (salario * 0.50) - (salario * 0.3));
		printf("------------------------------------ \n");	
	}
	else if(salario >= 3000){
		printf("------------------------------------ \n");
		printf("Voce possui R$ %.2f em credito \n", (salario * 0.75) - (salario * 0.3));
		printf("------------------------------------ \n");	
	}
	else{
		printf("------------------------------------ \n");
		printf("Voce inseriu um digito invalido \n");
		printf("------------------------------------ \n");	
	};
	
	return 0;
}

