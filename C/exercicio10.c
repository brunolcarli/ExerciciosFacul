/*
 * exercicio10.c
 * 
 * 10) De acordo com uma tabela médica, o peso ideal está relacionado 
 * com a altura e o sexo. Elabore um algoritmo que receba altura e sexo 
 * de uma pessoa e calcule e imprima o seu peso ideal, sabendo que:
 * 			Homens: (72.7 x altura) - 58
 * 			Mulheres: (62.1 x altura) - 44.7
 * 
 * OBJETIVO DO ALGORITMO: Verificar se o indivíduo está dentro do peso
 * ideal de acordo com sua altura e sexo.
 * ENTRADA: Valores de altura e gênero.
 * PROCESSAMENTO: Calcular o peso ideal de acordo com os dados fornecidos
 * SAIDA: Exibir o peso ideal para o usuário.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	//Definição das variáveis necessárias
	float altura;
	int sexo;

	
	//Captura dos dados de entrada
	printf("------------------------------------ \n");
	printf("Insira sua altura \n");
	printf("------------------------------------ \n");
	scanf("%f", &altura);
	
	printf("------------------------------------ \n");
	printf("Indique seu gênero \nInsira 1 para Masculino \nInsira 2 para Feminino \n");
	printf("------------------------------------ \n");
	scanf("%d", &sexo);
	
	//Processamento e saida
	if (sexo == 1){
		printf("------------------------------------ \n");
		printf("O seu peso ideal é %.2f Kg.\n", (72.7 * altura)- 58 );
		printf("------------------------------------ \n");
		}
	else if (sexo == 2) {
		printf("------------------------------------ \n");
		printf("O seu peso ideal é %.2f Kg.\n", (62.1 * altura) - 44.7);
		printf("------------------------------------ \n");
		}
	else {
		printf("------------------------------------ \n");
		printf("Digito inválido\n");
		printf("------------------------------------ \n");
		}
		
	return 0;
}

