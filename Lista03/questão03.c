#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gerarmatriz(int m[10][10]){
	int i, j;	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			m[i][j]= rand() % 100;
		}
	}
}
void imprimirmatriz(int m[10][10]){
	int i, j;
	printf("Matriz: \n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}
int acharmaior(int m[10][10]){
	int i, j, maior= m[0][0];
	for(i=0; i<10;i++){
		for(j=0;j<10;j++){
			if(m[i][j]>maior){
				maior=m[i][j];
			}
		}
	}
	return maior;
}
int linhadomaior(int m[10][10], int maior){
	int i, j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(m[i][j]==maior){
				return i;
			}
		}
	}
	return -1;
}
int colunadomaior(int m[10][10], int maior){
	int i, j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(m[i][j]==maior){
				return j;
			}
		}
	}
	return -1;
}
int acharminimax(int m[10][10], int linha){
	int j, minimax=m[linha][0];
	for(j=1;j<10;j++){
		if(m[linha][j]<minimax){
			minimax = m[linha][j];
		}
	}
	return minimax;
}
int main(){
	int m[10][10];
	int maior, linhamaior, colunamaior, minimax;
	
	gerarmatriz(m);
	imprimirmatriz(m);
	
	maior = acharmaior(m);
	linhamaior = linhadomaior(m, maior);
	colunamaior = colunadomaior(m, maior);
	minimax = acharminimax(m, linhamaior);
	
	printf("Maior elemento = %d\n", maior);
	printf("-> linha %d, coluna %d\n", linhamaior, colunamaior);
	
	printf("Elemento minimax = %d\n", minimax);
	printf("-> linha %d\n", linhamaior);
	
	return 0;
}
