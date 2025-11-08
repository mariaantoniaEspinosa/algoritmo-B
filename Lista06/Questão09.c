//questão 9 lista 6
#include <stdio.h>

void soma( int *a, int *b, int *r, int n){
	int i;
	for(i = 0; i < n; i++){
		*(r+i) = *(a+i) + *(b+i);
	}
}

void sub( int *a, int *b, int *r, int n){
	int i;
	for(i = 0; i < n; i++){
		*(r+i) = *(a+i) - *(b+i);
	}
}

int produto(int *a, int *b, int n){
	int soma = 0, i;
	for(i = 0; i < n; i++){
		soma+= (*(a+i)) * (*(b+i));
	}
	return soma;
}

int main(){
	int v1[10], v2[10], r[10], i;
	
	for(i=0; i<10; i++){
		printf("v1{%d} = ", i);
		scanf("%d", &v1[i]);
	}
	
	for(i=0; i<10; i++){
		printf("v2{%d} = ", i);
		scanf("%d", &v2[i]);
	}
	
	soma(v1, v2, r, 10);
	printf("soma:\n");
	for(i=0; i<10; i++){
		printf("%d\n", r[i]);
	}
	
	printf("\n");
	
	sub(v1, v2, r, 10);
	printf("Subtracao:\n ");
	for(i=0; i<10; i++){
		printf("%d\n", r[i]);
	}
	
	printf("\n");
	
	printf("Produto escalar: %d\n", produto(v1, v2, 10));
	
	return 0;
}
