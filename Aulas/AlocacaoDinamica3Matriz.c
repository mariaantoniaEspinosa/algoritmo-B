//ALOCAÇÃO DINÂMICA DE MEMÓRIA ENTRE MATRIZES
#include <stdio.h>
#include <stdlib.h>
void lermatriz(float *m, int l, int c){
	int i, j, k;
	
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			k = i * c + j;
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%f", (m+k));
		}
	}
	
	return ;
}

void mostrarmatriz(float *m, int l, int c){
	int i, j, k;
	printf("Matriz: \n");
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			k = i * c + j;
			printf("%.2f\t", *(m+k));
		}
		printf("\n");
	}
	
	return ;
}



int main(){
	int linha, coluna;
	float *a;
	
	printf("Quantidade de linhas: ");
	scanf("%i", &linha);
	
	printf("Quantidade de colunas: ");
	scanf("%i", &coluna);
	
	a = (float *) malloc (linha * coluna * sizeof(float) );
	
	if(!a){
		printf("Erro de alocacao\n");
		exit(-1);
	}
	
	lermatriz(a, linha, coluna);
	mostrarmatriz(a, linha, coluna);
	
	free(a);
	return 0;
}
