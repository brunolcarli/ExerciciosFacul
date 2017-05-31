/*
 * exercicio18.c
 *
 * 18) Formule um algoritmo que entre com o nome do aluno eas notas de 
 * quatro provas de 20 alunos. Imprima nome, nota1, nota2, nota3, nota4
 * e média de cada aluno e informe a média geral da turma.
 * 
 * OBJETIVO DO ALGORITMO: Realizar o cálculo da média de cada aluno de uma
 * turma e a média geral da turma;
 * 
 * ENTRADA: Nome, nota1, nota2, nota3, nota4 de cada aluno;
 * 
 * PROCESSAMENTO: Calcular média de cada aluno e da turma toda;
 * 
 * SAIDA: Exibir a media do de cada aluno e a média geral da turma.
 *  
 *  
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	
	char turma[20][20];
	int notas[20][4];
	int media, media_turma;
	int i, g;
	
	for (i=0; i<20; i++){
			printf("Insira o nome do aluno: %d\n", i+1);
			scanf("%s", &turma[i][20]);
			for (g=0; g<4; g++){
					printf("Insira nota %d\n", g+1);
					scanf("%d", &notas[i][g]);
			}
	}
	
	for(i=0; i<20; i++){
			media = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3])/4;
			media_turma = media_turma + media; 
			printf("Aluno: %s Media: %d \n", turma[i], media);
	}
	
	printf("A media geral da turma é: %d", media_turma/20);
	
	return 0;
}

