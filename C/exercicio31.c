/*
 * exercicio31.c
 * 
 * 31)Escreva a estrutura de um registro para um cadastro de livros contendo
 * as seguintes informações: titulo, autor,  editora, edição e ano.
 * 
 */


#include <stdio.h>
#include <stdlib.h>

struct livro cadastro();


struct livro{
	
	char titulo[50];
	char autor[50];
	char editora[30];
	int edicao;
	int ano;
	
	};


int main(int argc, char **argv)
{
	int x = 10;
	struct livro livros[x];
	int option;
	int i;
	
	for(i=0;i<10;i++){
		livros[i].ano = 0;
		}
	
	do{
		option = 0;
		printf("Escolha uma opção: \n");
		printf("[1]Cadastrar um livro\n[2]Ver livros cadastrados\n[3]Buscar livro por codigo\n[4]Sair\n");
		scanf("%d", &option);
		
		switch(option){
			
			case 1:
				for(i=0;i<10;i++){
					if(!livros[i].ano){
						livros[i] = cadastro();
						break;
						}
				}
				option = 0;	
				break;
			case 2:
				for(i = 0; i < x; i++){
					printf("Código: %d \n", i+1);
					printf("Titulo %s \n", livros[i].titulo);
					printf("Autor %s \n", livros[i].autor);
					printf("Editora %s \n", livros[i].editora);
					printf("Edição %d \n", livros[i].edicao);
					printf("Ano %d \n", livros[i].ano);
				}
				option = 0;
				break;
			case 3:
				printf("Insira o codigo do livro");
				scanf("%d", &option);
				if(option > x){
					system("clear");
					printf("***** Código não cadastrado *****\n");
					}
				else{
					system("clear");
					printf("Código: %d \n", option);
					printf("Titulo %s \n", livros[option-1].titulo);
					printf("Autor %s \n", livros[option-1].autor);
					printf("Editora %s \n", livros[option-1].editora);
					printf("Edição %d \n", livros[option-1].edicao);
					printf("Ano %d \n", livros[option-1].ano);
					}
				option = 0;
				break;
			case 4:
				system("clear");
				printf("*** \n\n\nAté logo\n\n\n*** \n\n");
				break;
			default:
				option = 0;
				system("clear");
				printf("********* Opção inválida *******\n");
			}
		}while(!option);
		
	
	
	return 0;
}


struct livro cadastro(){
	
	system("clear");
	
	struct livro novo_livro;
	
	printf("Insira o titulo do livro: ");
	setbuf(stdin, NULL);
	gets(novo_livro.titulo);
	
	printf("Insira o nome do autor do livro: ");
	gets(novo_livro.autor);
	
	printf("Insira o nome da editora: ");
	gets(novo_livro.editora);
	
	printf("Insira a edição do livro: ");
	scanf("%d", &novo_livro.edicao);
	
	printf("Insira o ano do livro: ");
	scanf("%d", &novo_livro.ano);
	
	return novo_livro;
	}
	
	
