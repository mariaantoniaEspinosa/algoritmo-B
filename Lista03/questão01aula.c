#include <stdio.h>
int m[6][6];
void lerlinha(){
	int j;
	printf("Insira os elementos da linha 1: \n");
	for(j=0;j<6;j++){
		scanf("%d", &m[0][j]);
	}
	return ;
}
void preenchermatriz(){
	int i, j;
	for(i=1;i<6;i++){
		for(j=0;j<6;j++){
			m[i][j]=m[0][j]*(i+1);
		}
	}
	return ;
}
void mostrarmatriz(){
	int i, j;
	printf("Matriz:\n");
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d\t", m[i][j]);
		}
	printf("\n");
	}
	return ;
}
int main(){
	lerlinha();
	preenchermatriz();
	mostrarmatriz();
	return 0;
}
