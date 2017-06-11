/*
 * mapaAlgoritmos2.c
 * 
 * Aluno: Bruno Luvizotto Carli
 * Disciplina: Algoritmos e lógica de programação II
 * Professor: FERNANDO CELESTINO PASCHUALETTO
 * 
 */


#include <stdio.h>

int main()
{
	
	//RA 16429535
	
	int x = 16;
	
	//vetor deve ter 42 posicoes
	int i, vetor[42];
	
	//preencher o vetor realizando operacao de soma entre x e o indice do vetor
	for (i=0; i<42;i++){
		vetor[i] = i + x;
		}
	
	//mostrar somente os 9 primeiros numeros do vetor
	for (i=0; i<9; i++){
		printf("Posicao %d do vetor: %d \n", i, vetor[i]);
		}
	 
	
	return 0;
}

