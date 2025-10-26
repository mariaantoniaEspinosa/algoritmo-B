//questão 05 Revisão de Conteúdos
#include <stdio.h>
#include <stdlib.h>

int somacoluna(int matriz[4][4]){
	int i, soma=0;
	for(i=0;i<4;i++){
		soma+=matriz[i][0];
	}
	return soma;
}

int produtolinha(int matriz[4][4]){
	int j, produto = 1;
	for(j=0; j<4; j++){
		produto *= matriz[0][j];
	}
	return produto;
}

int somadiagonal(int matriz[4][4]){
	int i, soma=0;
	for(i=0; i<4; i++){
		soma += matriz[i][i];
	}
	return soma;
}

int somatotal(int matriz[4][4]){
	int i, j, soma=0;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			soma += matriz[i][j];
		}
	}
	return soma;
}

int main(){
	int matriz[4][4], i, j;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			matriz[i][j] = rand() %100;
		}
	}
	
	printf("Matriz:\n");
	
	for(i=0; i<4; i++){
		for(j=0;j<4;j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("Soma da coluna 1 = %d\n", somacoluna(matriz));
	printf("Produto da linha 1 = %d\n", produtolinha(matriz));
	printf("Soma da diagonal = %d\n", somadiagonal(matriz));
	printf("Soma total da matriz = %d\n", somatotal(matriz));
	
	return 0;

}
