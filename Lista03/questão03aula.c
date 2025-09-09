//Questão 03 da lista III - Achar o Minimax da Matriz
// 1) Encontrar o maior elemento
// 2) Encontrar a linha do maior
// 3) Na linha do maior, encontrar o menor
#include <stdio.h>
#include <stdlib.h>
#define n 10
int m[n][n]; //matriz global
void gerarmatriz(){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			m[i][j]= rand()%100;
		}
	}
	return;
}
void mostrarmatriz(){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t", m[i][j]);
		}
	printf("\n");
	}
	return;
}
int encontrarmaior(){
	int i, j, maior=m[0][0];
	int guardarlinha=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(m[i][j]>maior){
				maior = m[i][j];
				guardarlinha = i;
			}
		}
	}
	printf("Maior valor = %d\n", maior);
	return guardarlinha;
}
int encontrarmx(int l){
	int menor = m[l][0], j;
	for(j=0;j<n;j++){
		if(m[l][j]<menor){
			menor = m[l][j];
		}
	}
	return menor;
}
int main(){
	int linha, minimax;
	gerarmatriz();
	mostrarmatriz();
	linha = encontrarmaior();
	printf("Linha do maior = %d\n", linha+1);
	minimax=encontrarmx(linha);
	printf("Minimax = %d\n", minimax);
	return 0;
}
