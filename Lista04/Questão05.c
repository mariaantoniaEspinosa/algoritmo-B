//QUESTÃO 05 LISTA 04 RECURSSIVIDADE 
#include <stdio.h>
void crescente(int n){
	if(n == 0){
		return ;
	}
	else {
		crescente(n-1);
		printf("%d\n", n);
	}
}

int main(){
	int n;
	printf("Digite um valor inteiro: ");
	scanf("%d", &n);
	
	crescente(n);
	return 0;
}
