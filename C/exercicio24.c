/*
 * exercicio24.c
 * 
 *24) Elabore um algoritmo que imprima todas as tabuadas do 1 ao 10
 * 
 * 
 */


#include <stdio.h>

int main()
{
	
	int num, tab;
	
	
	for(tab = 1; tab <= 10; tab++){
		
		printf("Tabuado do %d \n", tab);
		
		for(num = 1; num <= 10; num++){
			printf("%d x %d = %d \n", num, tab, num * tab);
			}
		
		}
	
	return 0;
}

