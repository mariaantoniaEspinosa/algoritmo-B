//questão 2 - teste de mesa
#include <stdio.h>
int funcao(int x,  int y){
	y++; //y passa a ser 3 aqui!! (y adiciona só 1 no seu valor!!!)
	return x + y;
}
int main(){
	int a, b =2, c, d;
	a = b*b;
	c=5;
	d=c/b;
	
	b = funcao(a, b); // b que recebia 2, agora recebe 3 por estar na função!
	
	printf("%d %d %d", b, c, d); // b=7, c=5, d=2;
	
	return 0;
}
