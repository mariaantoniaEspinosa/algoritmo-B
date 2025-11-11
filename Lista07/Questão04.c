//questão 4
#include <stdio.h>
#include <stdlib.h>

void lermatriz(int *m, int linha, int coluna){
	int i, j, k;
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			k = i * coluna + j;
			printf("Elemento[%d][%d]: ", i, j);
			scanf("%d", (m+k));
		}
	}
	
	return ;
}

void mostrarmatriz(int *m, int linha, int coluna){
	int i, j, k;
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			k = i * coluna + j;
			printf("%d\t", *(m+k));
		}
		printf("\n");
	}
	
	return ;
}

void escalar(int *a, int *b, int n, int linha, int coluna){
	int i, j, k;
	
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			k = i * coluna + j;
			*(b + k) = *(a + k) * n;
		}
	}
	
	return ;
}

int main(){
	int linha, coluna, *a, *b, numero;
	
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
	
	printf("\nDigite a Matriz:\n");
	lermatriz(a, linha, coluna);
	
	printf("\nSua matriz eh:\n");
	mostrarmatriz(a, linha, coluna);
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	
	printf("Sua nova matriz eh: \n");
	escalar(a, b, numero, linha, coluna);
	mostrarmatriz(b, linha, coluna);
	
	return 0;
}
