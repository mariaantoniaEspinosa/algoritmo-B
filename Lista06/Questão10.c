//questão 10 lista 6
#include <stdio.h>
void somar(int *a, int *b, int *r){
	int i;
	for(i=0; i<9; i++){
		*(r+i) = *(a+i) + *(b+i);
	}
}

int main(){
	int m1[3][3], m2[3][3], r[3][3];
	int i, j;
	
	printf("Digite os elementos da matriz 1:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &m1[i][j]);
		}
	}
	
	printf("Digite os elementos da matriz 2:\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("[%d][%d]: ", i, j);
			scanf("%d", &m2[i][j]);
		}
	}
	
	somar((int *)m1, (int *)m2, (int *)r);
	
	printf("Matriz soma\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d\t", r[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
