/*
 * exercicio30.c
 * 
 *30) Formule um algoritmo que leia uma matriz de contas a pagar ao longo
 * do ano, de modo que cada linha representa um mês do ano e cada coluna 
 * uma semana do mês. Com isso, temos uma matriz 12 x 4. Calcule e imprima:
 * total de contas a pagar por mês e o total anual.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

float getConta();
int selectMes();
int selectSemana();
int verContas();
void bye();

int main(int argc, char **argv)
{
	float total_mes, total_ano, valor;
	float matriz[12][4];
	int i, j, entrada, mes, semana;
	char enter;
	
	total_ano = 0;
	
	system("clear");
	
	//inicializa a matriz de valores com zero
	for(i=0;i<12;i++){
		for(j=0;j<4;j++){
			
			matriz[i][j] = 0;
			
			}
		}
	
	
	
	do{
		system("clear");
		printf("-----------------------------------------------\n");
		printf(">>>>>>>>>>>>>>RELATÓRIO DE CONTAS<<<<<<<<<<<<<<\n");
		printf("-----------------------------------------------\n\n");
		printf("+++++     Selecione a opção desejada      +++++\n");
		printf("+[1] Inserir contas\n+[2] Verificar contas\n+[3] Sair\n");
		printf("-----------------------------------------------\n");
		
		scanf("%d", &entrada);
		
		switch(entrada){
			case 1:

				mes = selectMes();
				if(!mes){
					break;
					}
				semana = selectSemana();
				if(!semana){
					break;
					}
				
				valor = getConta();
				
				matriz[mes][semana] = valor;
				break;
			case 2:
				printf("Ver contas\n");
				
				i = verContas();
				if(!i){
					break;
					}
				else{
					switch(i){
						case 1: //total do ano
							for(i=0;i<12;i++){
								total_mes = matriz[i][0] + matriz[i][1] + matriz[i][2] + matriz[i][3];
								total_ano += total_mes;
								}
							printf("-----------------------------------------------\n");
							printf(">>>>>>>>>>>>>>RELATÓRIO DE CONTAS<<<<<<<<<<<<<<\n");
							printf("-----------------------------------------------\n\n");
							printf("Total de contas do ano: R$ %.2f \n", total_ano);
							getchar();
							enter = getchar();
							break;
						case 2: //total mes
							mes = selectMes();
							total_mes = matriz[mes][0] + matriz[mes][1] + matriz[mes][2] + matriz[mes][3];
							system("clear");
							printf("-----------------------------------------------\n");
							printf(">>>>>>>>>>>>>>RELATÓRIO DE CONTAS<<<<<<<<<<<<<<\n");
							printf("-----------------------------------------------\n\n");
							printf("Mês %d  TOTAL: R$ %.2f \n", mes, total_mes);
							getchar();
							enter = getchar();
							break;
						case 3: //semanas por mes
							mes = selectMes();
							if(!mes){
								break;
								}
							semana = selectSemana();
							if(!semana){
								break;
								}
							system("clear");
							printf("-----------------------------------------------\n");
							printf(">>>>>>>>>>>>>>RELATÓRIO DE CONTAS<<<<<<<<<<<<<<\n");
							printf("-----------------------------------------------\n\n");
							printf("Mês %d Semana %d TOTAL: R$ %.2f \n", mes, semana, matriz[mes][semana]);
							getchar();
							enter = getchar();	
							break;
						case 4: // sair
							break;
						}
					}
				break;
			case 3:
				bye();
				break;
			}
		}while(entrada != 3);
	
	return 0;
}


int selectSemana(){
		system("clear");
		int e;
		
		do{
		
			printf("-----------------------------------------------\n");
			printf(">>>>>>>>>>>>>>>>>INSERIR CONTAS<<<<<<<<<<<<<<<<\n");
			printf("-----------------------------------------------\n\n");
			printf("+++++             Insira a semana         +++++\n");
			printf("+[1] Semana 1\n+[2] Semana 2\n+[3] Semana 3\n+[4] Semana 4\n");
			printf("+[0] Voltar \n");
			printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("-----------------------------------------------\n");
			
			scanf("%d", &e);
		
			if(e < 0 || e > 4){
				printf("**** Opção inválida ****\n");
				}
			else{
				break;
			}
		}while(!e);
		
		return(e);
	}


int selectMes(){
	int e;
	system("clear");
	
	do{
		printf("-----------------------------------------------\n");
		printf(">>>>>>>>>>>>>>>>>INSERIR CONTAS<<<<<<<<<<<<<<<<\n");
		printf("-----------------------------------------------\n\n");
		printf("+++++             Insira o Mês            +++++\n");
		printf("+[1] Janeiro\n+[2] Fevereiro\n+[3] Março\n+[4] Abril\n");
		printf("+[5] Maio\n+[6] Junho\n+[7] Julho\n+[8] Agosto\n+[9] Setembro\n");
		printf("+[10] Outubro\n+[11] Novembro\n+[12] Dezembro\n+[0] Voltar\n");
		printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("-----------------------------------------------\n");
		
		scanf("%d", &e);
		
		if(e == 0){
			break;
			}
		else {
			if(e < 0 || e > 12){
				printf("**** Opção inválida ****\n");
				}
			else{
				break;
				}
			}
		
		}while(!e);
		return(e);
	}



void inserirContas(){
	
	}

float getConta(){
	float conta;
	printf("Insira o valor da conta: ");
	scanf("%f", &conta);
	return(conta);
	}


int verContas(){
	
	system("clear");
	
	int e;
	
	do{
			printf("-----------------------------------------------\n");
			printf(">>>>>>>>>>>>>>>VERIFICAR CONTAS<<<<<<<<<<<<<<<<\n");
			printf("-----------------------------------------------\n\n");
			printf("+++++         Selecione uma opção         +++++\n");
			printf("+[1] Ver Total do ano\n+[2] Ver Total do mês\n");
			printf("+[3] Ver contas por semanas do mês\n+[0] Voltar \n");
			printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("-----------------------------------------------\n");
			
			scanf("%d", &e);
			
			if(e < 0 || e > 4){
				printf("**** Opção inválida ****");
				}
			else{
				break;
				}
		}while(!e);
	
		return(e);
	}

void bye(){
	char enter;
	system("clear");
	printf("-----------------------------------------------\n");
	printf(">>>>>>>>>>>>>>>>>>>ENCERRANDO<<<<<<<<<<<<<<<<<<\n");
	printf("-----------------------------------------------\n\n");
	printf("+++++               Até logo             +++++\n\n");
	printf("+++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("-----------------------------------------------\n");
	getchar();
	enter = getchar();
	}
