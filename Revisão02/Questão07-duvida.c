//questão 07 Revisão de Conteúdos
//NÃO ENTENDI NADA
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenchermatriz(int *vetor, int matriz[10][10]){
	int i, j;
	for(j=0; j<10; j++){
		*(*matriz + j) = *(vetor + j);
	}
	
	for(i=1; i<10; i++){
		for(j=0; j<10; j++){
			*(*(matriz+i)+j) = *(*(matriz + i - 1) + j )* (i + 1);
		}
	}
}

void mostrarmatriz(int matriz[10][10]){
	int i, j;
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("%5d", *(*(matriz+i)+j));
		}
	printf("\n");
	}
}

int main(){
	int vetor[10], matriz[10][10], i;
	
	srand(time(NULL));
	
	for(i=0; i<10; i++){
		*(vetor + i) = rand() % 10 + 1;
	}
	
	printf("Vetor incial: \n");
	for(i=0; i<10; i++){
		printf("%4d", *(vetor + i));
	}
	printf("\n\n");
	
	preenchermatriz(vetor, matriz);
	
	printf("Matriz gerada:\n");
	mostrarmatriz(matriz);
	
	return 0;
}
