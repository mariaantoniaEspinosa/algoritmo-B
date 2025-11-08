//questão 16 lista 5
#include <stdio.h>
int main(){
	int v[10], *p, x, cont = 0;
	
	printf("Digite 10 valores: \n");
	
	for(p = v; p < v + 10; p++){
		scanf("%d", p);
	}
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	for(p=v; p<v+10; p++){
		if(*p == x){
			cont ++;
		}
	}
	
	printf("Numero %d aparece %d vezes", x, cont);
	
	return 0;
}
