/*
 * exercicio28.c
 * 
 * 
 * 28) Desenvolva um algoritmo que efetua a leitura dos nomes de 5 alunos
 * e também de suas quatro notas bimestrais. Calcule a média de cada aluno
 * e apresente os nomes classificados em ordem crescente de média.
 * 
 */


#include <stdio.h>
#include <stdlib.h>

struct aluno {
	
	char nome[25];
	float nota1;
	float nota2;
	float nota3;
	float nota4;
	float media;
	
	};

int main(int argc, char **argv)
{
	int i, j;
	struct aluno troca;
	struct aluno lista[5];
	
	for(i=0;i<5;i++){
		
		printf("Insira o nome do aluno %d: ", i+1);
		scanf("%s", lista[i].nome);
		printf("Insira a nota do primeiro bimestre: ");
		scanf("%f", &lista[i].nota1);
		printf("Insira a nota do segundo bimestre: ");
		scanf("%f", &lista[i].nota2);
		printf("Insira a nota do terceiro bimestre: ");
		scanf("%f", &lista[i].nota3);
		printf("Insira a nota do quarto bimestre: ");
		scanf("%f", &lista[i].nota4);
		lista[i].media = (lista[i].nota1 + lista[i].nota2 + lista[i].nota3 + lista[i].nota4)/4;
		
		}
		
	for(i=0;i<5;i++){
		for(j=i+1;j<=0;j++){
			
			if(lista[i].media > lista[j].media){
				
				troca = lista[i];
				lista[i] = lista[j];
				lista[j] = troca;
				
				}
			
			}
		}
	
	system("clear");
	
	for(i=0;i<5;i++){
		
		printf("\n------------------------------------------\n");
		printf("Aluno: %s \n", lista[i].nome);
		printf("1 Bimestre: %.2f \n", lista[i].nota1);
		printf("2 Bimestre: %.2f \n", lista[i].nota2);
		printf("3 Bimestre: %.2f \n", lista[i].nota3);
		printf("4 Bimestre: %.2f \n", lista[i].nota4);
		printf("Media Final: %.2f \n", lista[i].media);
		printf("------------------------------------------\n");
		}
	
	return 0;
}

