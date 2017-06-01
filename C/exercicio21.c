/*
 * exercicio21.c
 * 
 * 
 * 21) Apresente todos os números divisíveis por 5 que sejam menores que 200;
 * 
 * OBJETIVO DO ALGORITMO: Apresentar o números menores que 200 que são divisíveis por 5;
 * 
 * ENTRADA: Nenhuma;
 * 
 * PROCESSAMENTO: Contar até 200, verificar se o número é divisivel por 5;
 * 
 * SAÍDA: Informar a lista de números;
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	
	printf("Os números menores que 200 divisíveis por 5 são:\n\n");
	
	for(i = 1; i<=200; i++){
		
		if((i%5) == 0){
			printf("%d é divisivel por 5 (%d /  5 = %d)\n", i, i, i/5);
		}
		
	}
	
	return 0;
}

