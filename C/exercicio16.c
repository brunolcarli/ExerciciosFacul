/*
 * exercicio16.c
 * 
 * 16) Escreva um algoritmo para resolver equações do segundo grau
 * (ax**2 + bx + c). Sendo que: a variavel a deve ser diferente de zero;
 * DELTA = b**2 - 4ac;
 * Se DELTA < 0 não existe raiz real;
 * se DELTA = 0 existe uma raiz real que e dada por  x = (-b)/2a;
 * Se DELTA > 0 existem duas raizes reais: x1 = (-b +SQR(DELTA)/2a e
 * x2 = (-b - SQR(DELTA)/2a
 * 
 * OBJETIVO DO ALGORITMO: Solucionar uma equação do segundo grau
 * 
 * ENTRADA: Valores de a, b e c com a diferente de zero
 * 
 * PROCESSAMENTO: realizar a formula de bhaskara, verificar se há raízes
 * reais, calcular a equação.
 * 
 * SAIDA: Informar se há raiz real e informar o resultado dos cálculos
 * 
 */


#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(int argc, char **argv)
{	
	//Variaveis
	int a, b, c, d, x, resultado, lock1, lock2;
	char key;
	
	lock1 = 0;
	
	while(!lock1){
	
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("Programa que calcula uma equação do segundo grau\n");
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
		
		//entrada
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");	
		printf("            Insira o valor de a\n");
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
		scanf("%d", &a);
		
		if(a == 0){ //se nao for uma equação do segundo grau p programa termina aqui
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("       Não é uma equação do segundo grau \n");
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
		} else{
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("            Insira o valor de b\n");
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			scanf("%d", &b);
			
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("             Insira o valor de c\n");
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			scanf("%d", &c);
			
			//Processamento
			
			//calcular bhaskara
			d = pow(b, 2) - 4*a*c;
			
			if(d < 0){
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				printf("           Não existe raiz real\n\n");
				printf("DELTA = %.2f - %d\n", pow(b, 2), (4*a*c));
				printf("DELTA = %d\n", d);
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			}
			else if(d == 0){
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				printf("          Existe uma raiz real\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				
				x = (-b)/(2*a);
				
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				printf("O valor de x e: %d\n", x);
				printf("Equação: %d . %d2 + %d . %d + %d \n", a, x, b, x, c);
				a = a * pow(x, 2);
				b = b * x;
				printf("Equação: %d + %d + %d\n", a, b, c);
				resultado = a + b + c;
				printf("Equação: %d \n", resultado);
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			}
			else{
				
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				printf("    Esta equação possui duas raizes reais: \n\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				
				// x1 = (-b +SQR(DELTA)/2a
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				printf("x1 = -( %d )+ raiz de %d / 2 . %d\n", b, d, a);
				int x1 = ((-b) + sqrt(d))/(2*a);
				printf("x1 = %.2f / %d\n", ((-b) + sqrt(d)), (2*a));
				printf("x1 = %d \n\n", x1);
				//(ax**2 + bx + c)
				printf("Equação: (%d . %d2) + (%d . %d) + %d \n", a, x1, b, x1, c);
				printf("Equação: %.2f + %d + %d\n", (a * pow(x1,2)), b * x1, c);
				printf("Equação: %.2f \n\n", a * pow(x1, 2) + b * x1 + c);
				
				//x2 = (-b - SQR(DELTA)/2a
				printf("x2 = - ( %d )- raiz de %d / 2 . %d\n", b, d, a);
				int x2 = ((-b) - sqrt(d))/(2*a);
				printf("x2 = %.2f / %d\n", ((-b) - sqrt(d)), (2*a));
				printf("x2 = %d \n\n", x2);
				//(ax**2 + bx + c)
				printf("Equação: (%d . %d2) + (%d . %d) + %d \n", a, x2, b, x2, c);
				printf("Equação: %.2f + %d + %d\n", (a * pow(x2,2)), b * x2, c);
				printf("Equação: %.2f \n\n", a * pow(x2, 2) + b * x2 + c);
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				}
		}
		
		lock2 = 0;
		while(!lock2){
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("  Gostaria de realizar outro cálculo? \n");
			printf("                   [S/N]         \n");
			printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
			getchar();
			key = getchar();
			key = toupper(key);
			
			if(key == 'N'){
				lock1 = 1;
				lock2 = 1;
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				printf("                 Até Logo\n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				
			}
			else if(key == 'S'){
					lock2 = 1;
			}
			else{
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				printf("         Você inseriu um digito invalido \n");
				printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
				lock2 = 0;
			}
		}
	}
	
	return 0;
}

