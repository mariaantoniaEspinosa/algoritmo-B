#include <stdio.h>
void preenchermatriz(int matriz[6][6]){
	int i, j;
	for(i=0;i<6; i++){
		for(j=0;j<6;j++){
			matriz[i][j]=matriz[0][j]*(i+1);
		}
	}
}
void imprimirmatriz(int matriz[6][6]){
	int i, j;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			printf("%d\t", matriz[i][j]);
		}
	printf ("\n");
	}
}
int main(){
	int matriz[6][6], j;
	
	printf("Digite os elementos da primeira linha da matriz:\n");
	for(j=0;j<6;j++){
		printf("[%d]: ", j+1);
		scanf(" %d", &matriz[0][j]);
	}
	preenchermatriz(matriz);
	
	printf("Matriz resultante: \n");
	imprimirmatriz(matriz);
	
	return 0;
	
}
