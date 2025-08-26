//Passagem de valores às funções
#include <stdio.h>
int funcao2(int x){
	return x + 2;
}

int f(int x, char y){
	printf("\nOs valores passados foram: %d, %c", x, y);
}

void main(void){
	int a=50;
	char b='B';
	f(49, 'A'); /*constantes*/
	f(a, b); /*varaveis*/
	f(a+1, b+1); /*expressoes*/
	f(funcao2(a), b+2); /*funcao e expressao*/
	
	return;
}
