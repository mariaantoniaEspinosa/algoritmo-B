//PONTEIROS E FUNÇÕES
#include <stdio.h>

//passagem por valor:

int funcao1(int x, int y){
	int z;
	x++;
	y = x * 2;
	z = x + y;
	return z;
}

//passagem por referência: ponteiros

int funcao2(int *x, int *y){
	int z;
	*x = 20;
	*y = *y + *x;
	z = *y;
	return z;
}

int main(){
	int a = 5, b = 10, c;
	
	c = funcao1(a, b);
	
	printf("A = %d B = %d C = %d\n", a, b, c);
	
	c = funcao2(&a, &b); //endereços = ponteiros.
	
	printf("A = %d B = %d C = %d\n", a, b, c);
	
	return 0;
}
