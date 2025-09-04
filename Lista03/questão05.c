#include <stdio.h>
int soma(int n1, int n2){
	int soma=0, novo=0, i;
	if(n1>n2){
		novo = n1;
		n1 = n2;
		n2 =  novo;
	}
	for(i=n1;i<=n2;i++){
		soma+=i;
	}
	return soma;
}
int main(){
	int n1, n2;
	
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &n1, &n2);
	
	printf("A soma dos numeros entre %d e %d (e eles) = %d\n", n1, n2, soma(n1, n2));
	
	return 0;
}
