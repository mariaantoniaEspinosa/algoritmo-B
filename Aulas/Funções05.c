#include <stdio.h>
int par (int n){
	if(n%2==0){
		return 0;
	}else {
		return 1;
	}
}

int main (){
	int x;
	printf ("Digite um numero: ");
	scanf("%d", &x);
	// par(x) ou == 0 
	if (par(x)){
		printf ("A funcao par retornou falsa = %d\n", par(x));
	} else {
		printf ("A funcao par retornou verdadeira = %d\n", par(x));
	}
	return 0;
}
