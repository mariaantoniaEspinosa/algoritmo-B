//QUESTÃO 06 LISTA 04 RECURSSIVIDADE 
#include <stdio.h>
void crescente(int n){
	if(n == 0){
		return ;
	}
	else {
		printf("%d\n", n);
		decrescente(n-1);
	}
}

int main(){
	int n;
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);
	
	decrescente(n);
	return 0;
}
