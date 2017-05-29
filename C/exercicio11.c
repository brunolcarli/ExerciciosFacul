/*
 * exercicio11.c
 * 
 * 11)Elabore um algoritmo que leia o percurso em quilômetros, o tipo de
 * moto e informe o consumo estimado de combustível, sabendo que uma 
 * moto do tipo A faz 26km com um litro de gasolina, uma moto do tipo B
 * faz 20km e o tipo C faz 7km.
 * 
 * OBJETIVO DO ALGORITMO: Calcular o gasto de combústivel dado um certo
 * tipo de moto
 * 
 * ENTRADA: Percurso em km, tipo de moto (A, B ou C)
 * 
 * PROCESSAMENTO: Calcular o consumo de combustivel em uma determinada 
 * distância: Distância / consumo
 * 
 * SAÍDA: Exibir o cálculo do consumo para a distância fornecida
 * 
 * 
 */


#include <stdio.h> //lib para comandos de E/S
#include <ctype.h> //daqui vamos usar o comando toupper()

int main(int argc, char **argv)
{	
	//variaveis necessárias
	float distancia;
	char moto;
	
	//entrada
	printf("------------------------------------ \n");
	printf("Insira a distancia a ser percorrida \n");
	printf("------------------------------------ \n");
	scanf("%f", &distancia);
	
	printf("------------------------------------ \n");
	printf("Insira o tipo de moto (A, B ou C) \n");
	printf("------------------------------------ \n");
	getchar(); //getchar() recebe um literal
	moto = getchar(); //atribuimos o literal à variàvel moto
	moto = toupper(moto); //usamos toupper() para garantir que sera uma letra maiúscula 
	
	//processamento e saida
	if(moto == 'A'){
		printf("------------------------------------ \n");
		printf("O consumo de combustível necessario  \n");
		printf("e de %.2f litros de gasolina\n", distancia/ 26);
		printf("------------------------------------ \n");
	}
	else if(moto == 'B'){
		printf("------------------------------------ \n");
		printf("O consumo de combustível necessario  \n");
		printf("e de %.2f litros de gasolina \n", distancia/ 20);
		printf("------------------------------------ \n");
	}
	else if(moto == 'C'){
		printf("------------------------------------ \n");
		printf("O consumo de combustível necessario  \n");
		printf("e de %.2f litros de gasolina. \n", distancia/ 7);
		printf("------------------------------------ \n");	
	}
	else{
		printf("------------------------------------ \n");
		printf("Tipo de moto invalida, insira A, B ou C  \n");
		printf("------------------------------------ \n");
	}
	return 0;
}

