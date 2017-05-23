/*
 * exercicio13.c
 * 
 * 
 * 13)Elabora um algoritmo que receba a idade de uma pessoa e retorne
 * se ela é menor de idade, maior de idade ou idosa. Se a pessoa for 
 * menor de 16 anos ela não pode votar, se ela tiver idade entre 16 e 
 * 18 anos ou maior de 65 anos, sua condição eleitoral é facultativa,
 * entre 18 e 65 anos é eleitor obrigatório.
 * 
 * OBJETIVO DO ALGORITMO: Informar se  uma pessoa é maior de idade, 
 * menor, idoso e informar sua condição eleitoral.
 * 
 * ENTRADA: Valor da idade;
 * 
 * PROCESSAMENTO: Verificar se a pessoa é menor de idade, maior ou idoso.
 * Verificar se a pessoa pode votar, deve votar ou se não pode votar.
 * 
 * SAÍDA: Exibir na tela se a pessoa é de maior, de menor, idoso e sua
 * condição eleitoral respectiva à sua idade;
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	
	int idade;
	
	printf("------------------------------------------ \n");
	printf("Insira sua idade \n");
	printf("------------------------------------------ \n");
	scanf("%d", &idade);
	
	if(idade < 16){
		printf("------------------------------------------- \n");
		printf("Voce e menor de idade e não pode votar \n");
		printf("------------------------------------------- \n");	
	}
	else if(idade >= 16 && idade < 18){
		printf("------------------------------------------- \n");
		printf("Voce e menor de idade e eleitor facultativo \n");
		printf("------------------------------------------- \n");
	}
	else if(idade > 18 && idade < 65){
		printf("------------------------------------------- \n");
		printf("Voce e maior de idade e eleitor obrigatorio \n");
		printf("------------------------------------------- \n");		
	}
	else if(idade >= 65){
		printf("------------------------------------------- \n");
		printf("Voce e idoso e eleitor facultativo \n");
		printf("------------------------------------------- \n");	
	}

	return 0;
}

