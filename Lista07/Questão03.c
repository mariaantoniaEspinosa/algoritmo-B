//LISTA 7 QUESTÃO 3
#include <stdio.h>
#include <stdlib.h>

void lermatriz(int *m, int l, int c){
	int i, j, k;
	
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			k = i * c + j;
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%d", (m+k));
		}
	}
	
	return ;
}

void mostrarmatriz(int *m, int l, int c){
	int i, j, k;
		
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			k = i * c + j;
			printf("%d\t", *(m+k));
		}
		printf("\n");
	}
	
	return ;
}

void somarmatriz(int *a, int *b, int *c_result, int l, int c){
	int i, j, k;
	
	printf("\nA soma das matrizes A + B eh: \n");
	
	for(i=0; i<l; i++){
		for(j=0; j<c; j++){
			k = i * c + j;
			*(c_result+k) = *(a+k) + *(b+k);
		}
	}
	
	return ;
}

int main(){
	int linha, coluna, *a, *b, *c;
	
	printf("Numero de linhas da matriz? ");
	scanf("%d", &linha);
	
	printf("Numero de colunas da matriz? ");
	scanf("%d", &coluna);
	
	a = (int *) malloc (linha * coluna * sizeof(int) );
	
	if(!a){
		printf("Erro");
		exit(-1);
	}
	
	b = (int *) malloc (linha * coluna * sizeof(int) );
	
	if(!b){
		printf("Erro");
		exit(-1);
	}
	
	c = (int *) malloc (linha * coluna * sizeof(int) );
	
	if(!c){
		printf("Erro");
		exit(-1);
	}
	
	printf("\nDigite a Matriz A:\n");
	lermatriz(a, linha, coluna);
	
	printf("\nDigite a Matriz B:\n");
	lermatriz(b, linha, coluna);
	
	printf("\nSua matriz A eh:\n");
	mostrarmatriz(a, linha, coluna);
	
	printf("\nSua matriz B eh:\n");
	mostrarmatriz(b, linha, coluna);
	
	somarmatriz(a, b, c, linha, coluna);
	mostrarmatriz(c, linha, coluna);
	
	free(a);
	free(b);
	free(c);		
	
	return 0;
}
