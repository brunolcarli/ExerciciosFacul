/*
 * exercicio14.c
 * 
 * 
 *14) Escreva um algoritmo que calcule o IMC de uma pessoa e identifique 
 *se a pessoa  está abaixo do peso(IMC < 20), normal (IMC entre 20 e 25),
 *com excesso de peso(IMC entre 26 e 30), obesidade(IMC entre 31 e 35) ou
 *com obesidade mórbida (acima de 35). O cálculo do IMC é dado pela 
 *divisão do peso pelo quadrado da altura.
 * 
 * OBJETIVO DO ALGORITMO: Informar o Índice de Massa Corporal de uma pessoa
 * 
 * ENTRADA: Valor correspondente ao peso, valor correspondente à altura.
 * 
 * PROCESSAMENTO: Calcular a divisão da massa pelo quadrado da alura, 
 * verificar em que faixa encontra-se o índice de massa corporal (imc).
 * 
 * SAÍDA: Informar o resultado do cálculo e se ela está abaixo do peso,
 * normal, excesso de peso, obesidade ou obesidade mórbida.
 * 
 * 
 */


#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	//VARIAVEIS
	float peso, altura, imc;
	
	//ENTRADA
	printf("------------------------------------ \n");
	printf("Insira sua altura:  \n");
	printf("------------------------------------ \n");
	scanf("%f", &altura);
	
	printf("------------------------------------ \n");
	printf("Insira o seu peso: \n");
	printf("------------------------------------ \n");
	scanf("%f", &peso);
	
	//PROCESSAMENTO
	imc = peso/(pow(altura, 2));
	
	//SAIDA
	if(imc < 20){
		printf("------------------------------------ \n");
		printf("Voce esta abaixo do peso \n");
		printf("Seu IMC e %.2f. \n", imc);
		printf("------------------------------------ \n");
	}
	else if(imc >= 20 && imc < 25){
		printf("------------------------------------ \n");
		printf("Voce esta normal \n");
		printf("Seu IMC e %.2f. \n", imc);
		printf("------------------------------------ \n");	
	}
	else if(imc >= 25 && imc < 30){
		printf("------------------------------------ \n");
		printf("Voce esta com excesso de peso \n");
		printf("Seu IMC e %.2f. \n", imc);
		printf("------------------------------------ \n");	
	}
	else if(imc >= 30 && imc <= 35){
		printf("------------------------------------ \n");
		printf("Voce esta em caso de obesidade \n");
		printf("Seu IMC e %.2f. \n", imc);
		printf("------------------------------------ \n");	
	}
	else if (imc > 35){
		printf("------------------------------------ \n");
		printf("Voce esta em caso de obesidade morbidal \n");
		printf("Seu IMC e %.2f. \n", imc);
		printf("------------------------------------ \n");
	}
	else {
		printf("------------------------------------ \n");
		printf("Voce inseriu um digito invalido \n");
		printf("------------------------------------ \n");
	}
	
	return 0;
}

